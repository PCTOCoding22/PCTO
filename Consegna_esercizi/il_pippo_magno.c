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
	int size_x = 7;
	int size_y = 8;
    int y, x;

	canvas_struct * canvas;
    for (int x = 0; x <= size_x; delete_pixel)
    {
        if (x % 2 == 0)
        {
            put_pixel(x, y, canvas);
        }

     return (0);
    }
    for (int y = 0; y <= size_y; delete_pixel)
    {
       if (y % 2 != 0)
       {
          put_pixel (x, y, canvas);
       }
       return (0);
    }

	canvas = generate_new_canvas(size_x, size_y);
	return 0;
}

//put pixel(x ì, y --)
