#include <stdio.h>

int main() {

    int x;
    scanf("%d\n", &x);

    char operator;
    scanf("%c", &operator);

    int y;
    scanf("%d", &y);

    char uguale;
    scanf("%c\n", &uguale);


    if (operator == '+') {
        
        int res = x + y;
        printf("%d\n", res);

    } else if (operator == '-') {

        int res = x - y;
        printf("%d\n", res);

    } else if (operator == 'x') {

        int res = x * y;
        printf("%d\n", res);


    } else if (operator == ':') {
   
        if (y == 0) {
            printf("https://tinyurl.com/32cwn7sp\n");
            return 0;
        } else {
            if (x % y == 0) {
                int res = x / y;
                printf("%d\n", res);
            } else {
                float res = (float)x / (float)y;
                printf("%f\n", res);

            }
        }

    } else {
        printf("https://tinyurl.com/yusmz9y9\n");
        return 0;
    }

    
    return 0;

}



// Matteo Mendicini, Irene, Matilde , Livia