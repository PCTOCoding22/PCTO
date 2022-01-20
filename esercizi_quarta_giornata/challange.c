#include <stdio.h>
#include <stdlib.h>
typedef struct canvas
{
	int x_size;
	int y_size;
	char *array;
} canvas_struct;

canvas_struct* create_canvas(int x_size, int y_size){
    canvas_struct *canvas = malloc(sizeof(canvas_struct));
    canvas->x_size = x_size;
    canvas->y_size = y_size;
    canvas->array = malloc(sizeof(char) * (x_size*y_size));
    return canvas;
}

void task1(canvas_struct *canvas){
    /*for (int x; x>-1; x++){
        printf("%c\n", canvas->array[x]);
    }
    */
    for (int y = 0; y < canvas->y_size; y++){
        for (int x = 0; x < canvas->x_size; x++){
            if (x % 2 == 0){
                canvas->array[(y)*canvas->x_size + x] = 'X';
            }
            else{
                canvas->array[(y)*canvas->x_size + x] = '-';
            }
        }
    }
    for (int d = 0; d < (canvas->x_size*canvas->y_size); d++){
        printf("%c ", canvas->array[d]);
        if (d % canvas->x_size == canvas->x_size-1){
            printf("\n");
        }
    }
}

void task2(canvas_struct *canvas){
    for (int y = 0; y < canvas->y_size; y++){
        for (int x = 0; x < canvas->x_size; x++){
            if (y%2==0){
                if (x % 2 == 0){
                    canvas->array[(y)*canvas->x_size + x] = 'X';
                }
                else{
                    canvas->array[(y)*canvas->x_size + x] = '-';
                }
            }
            else{
                if (x % 2 == 0){
                    canvas->array[(y)*canvas->x_size + x] = '-';                    
                }
                else{
                    canvas->array[(y)*canvas->x_size + x] = 'X';
            }
        }
    }
    for (int d = 0; d < (canvas->x_size*canvas->y_size); d++){
        printf("%c ", canvas->array[d]);
        if (d % canvas->x_size == canvas->x_size-1){
            printf("\n");
        }
    }
}
}

void task3(canvas_struct *canvas){
    /*for (int x; x>-1; x++){
        printf("%c\n", canvas->array[x]);
    }
    */
    for (int y = 0; y < canvas->y_size; y++){
        for (int x = 0; x < canvas->x_size; x++){
            if (y == 0 || x == 0 || x == canvas->x_size-1 || y == canvas->y_size-1){
                canvas->array[(y)*canvas->x_size + x] = 'X';
            }
            else{
                canvas->array[(y)*canvas->x_size + x] = '-';
            }
        }
    }
    for (int d = 0; d < (canvas->x_size*canvas->y_size); d++){
        printf("%c ", canvas->array[d]);
        if (d % canvas->x_size == canvas->x_size-1){
            printf("\n");
        }
    }
}

void task4(canvas_struct *canvas){
    /*for (int x; x>-1; x++){
        printf("%c\n", canvas->array[x]);
    }
    */
    for (int y = 0; y < canvas->y_size; y++){
        for (int x = 0; x < canvas->x_size; x++){
            if (x <= y){
                canvas->array[(y)*canvas->x_size + x] = 'X';
            }
            else{
                canvas->array[(y)*canvas->x_size + x] = '-';
            }
        }
    }
    for (int d = 0; d < (canvas->x_size*canvas->y_size); d++){
        printf("%c ", canvas->array[d]);
        if (d % canvas->x_size == canvas->x_size-1){
            printf("\n");
        }
    }
}

int main(){
    task1(create_canvas(6, 6));
    task2(create_canvas(7, 6));
    task3(create_canvas(9, 6));
    task4(create_canvas(7, 12));

    return (0);
}

//solo colonne alternate, scacchiera, solo il bordo, quadrato diviso da diagonale