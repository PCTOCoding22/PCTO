#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct canvas
{
	int x_size;
	int y_size;
	char **arr;
    int x_dot;
    int y_dot;
    int x_x;
    int x_y;
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

canvas_struct *put_pixel(int to_x, int to_y, canvas_struct *canvas)
{
	canvas->arr[to_y][to_x] = 'X';
    canvas->x_x = to_x;
    canvas->x_y = to_y;
    return canvas;
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

canvas_struct *put_food(canvas_struct *canvas){
    srand(time(NULL));
    int x_dot = rand() % canvas->x_size;
    sleep(1);
    int y_dot = rand() % canvas->y_size;
    canvas->x_dot = x_dot;
    canvas->y_dot = y_dot;
    canvas->arr[y_dot][x_dot] = 'O';
    return canvas;
}

void start_pursuit(canvas_struct *canvas){
    put_food(canvas);
    int where_x = canvas->x_dot - canvas-> x_x;
    int where_y = canvas->y_dot - canvas-> x_y;
    int mv_x, mv_y;
    printf("%d %d\n\n", canvas->x_dot, canvas->x_x);
    //printf("%d %d\n\n", where_x, where_y);
    if (where_x < 0){
        mv_x = -1;
    }
    else{
        mv_x = 1;
    }
    if (where_y < 0){
        mv_y = -1;
    }
    else{
        mv_y = 1;
    }
    printf("\n%d %d\n", mv_x, mv_y);
    //printf("%d %d\n\n\n", canvas->x_x, canvas->x_y);
    for (; canvas->x_x != canvas->x_dot; canvas->x_x += mv_x){
        printf("%d %d", mv_x, mv_y);
        put_pixel(canvas->x_x, canvas->x_y, canvas);
        print_2d_array(canvas);
        delete_pixel(canvas->x_x, canvas->x_y, canvas);
        usleep(300000);
    }
    for (; canvas->x_y != canvas->y_dot; canvas->x_y += mv_y){
        put_pixel(canvas->x_x, canvas->x_y, canvas);
        print_2d_array(canvas);
        delete_pixel(canvas->x_x, canvas->x_y, canvas);
        usleep(300000);
    }
    put_pixel(canvas->x_x, canvas->x_y, canvas);
    print_2d_array(canvas);
    }


    

int main(int argc, char **argv)
{
	int size_x = 10;
	int size_y = 10;
	canvas_struct *canvas;
	canvas = generate_new_canvas(size_x, size_y);
	put_pixel(0, 0, canvas);
    while (size_x){
        start_pursuit(canvas)
;        }
	//put_pixel(3, 4, canvas);
    //start_pursuit(canvas);
	//move_pixel(3, 4, 4, 5, canvas);
	//print_2d_array(canvas);
	//move_pixel(4, 5, 5, 6, canvas);
	//print_2d_array(canvas);
	return 0;
}