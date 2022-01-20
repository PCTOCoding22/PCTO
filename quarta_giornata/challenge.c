#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct canvas
{
	int x_size;
	int y_size;
	char **arr;
} canvas_struct;

canvas_struct *generate_new_canvas(int new_x_size, int new_y_size)
{
	canvas_struct *canvas = malloc(sizeof(canvas_struct));
	canvas->x_size = new_x_size;
	canvas->y_size = new_y_size;
	canvas->arr = malloc(sizeof(char *) * new_y_size);
	for (int i = 0; i < new_y_size; i++)
	{
		canvas->arr[i] = malloc(sizeof(char) * new_x_size);
		for (int n = 0; n < new_x_size; n++)
		{
			canvas->arr[i][n] = '-';
		}
	}
	return canvas;
}

void print_2d_array(canvas_struct *canvas)
{
	printf("\e[1;1H\e[2J"); // clear screen
	printf(" ");
	for (int n = 0; n < canvas->x_size; n++)
	{
		printf("%2d", n);
	}
	printf("\n");
	for (int i = 0; i < canvas->y_size; i++)
	{
		printf("%2d", i);
		for (int n = 0; n < canvas->x_size; n++)
		{
			printf("%c ", canvas->arr[i][n]);
		}
		printf("\n");
	}
}

char get_pixel(int from_x, int from_y, canvas_struct *canvas)
{
	return canvas->arr[from_y][from_x];
}

void delete_pixel(int from_x, int from_y, canvas_struct *canvas)
{
	canvas->arr[from_y][from_x] = '-';
}

void put_pixel(int to_x, int to_y, canvas_struct *canvas)
{
	canvas->arr[to_y][to_x] = 'X';
}

void move_pixel(int from_x, int from_y, int to_x, int to_y, canvas_struct *canvas)
{
	char t;
	t = get_pixel(from_x, from_y, canvas);
	delete_pixel(from_x, from_y, canvas);
	if (t == 'X')
	{
		put_pixel(to_x, to_y, canvas);
	}
	else
	{
		delete_pixel(to_x, to_y, canvas);
	}
}

int main(int argc, char **argv)
{
	int size_x = 11;
	int size_y = 15;
	canvas_struct *canvas;

	canvas = generate_new_canvas(size_x, size_y);

    
    for (int xcount = 0; xcount < size_x; xcount += 2) {
        for (int ycount = 0; ycount < size_y; ycount++) {
            put_pixel(xcount, ycount, canvas);
        }
        }

    for (int delx = 0; delx < size_x; delx++) {
        for (int dely = 0; dely <size_y; dely++) {
            delete_pixel(delx, dely, canvas);
        }
    }
    


    //inizio secondo es
    

    
    for (int chess_x = 0; chess_x < size_x; chess_x+= 2) {
        for (int chess_y = 0; chess_y < size_y; chess_y += 2) {
            put_pixel(chess_x + 1, chess_y, canvas);
            put_pixel(chess_x, chess_y + 1, canvas);
        }
    }

    

    for (int chess_x = 0; chess_x < size_x; chess_x+= 2) {
        for (int chess_y = 0; chess_y < size_y; chess_y += 2) {
            delete_pixel(chess_x, chess_y, canvas);
            delete_pixel(chess_x, chess_y, canvas);
        }
    }

    

    //inizio terzo esercizio

    
    for (int square_x = 0; square_x < size_x; square_x++) {
        for (int square_y = 0; square_y < size_y; square_y++) {
            if (square_x == 0 || square_x == size_x-1 || square_y == 0 || square_y == size_y-1) {
                    put_pixel(square_x, square_y, canvas);
            }
        }
    }

    for (int square_x = 0; square_x < size_x; square_x++) {
        for (int square_y = 0; square_y < size_y; square_y++) {
            if (square_x == 0 || square_x == size_x-1 || square_y == 0 || square_y == size_y-1) {
                    delete_pixel(square_x, square_y, canvas);
            }
        }
    }


    // inizio quarto esercizio

    
    
    for (int stair_x = 0; stair_x < size_x; stair_x++) {
        for (int stair_y = 0; stair_y < size_y; stair_y++)  {
            if (stair_x <= stair_y) {

                put_pixel(stair_x, stair_y, canvas);
                
                }
            }
        }

    

	print_2d_array(canvas);
	return 0;
}

//Matteo Mendicini, Irene, Matilde, Livia, Riccardo