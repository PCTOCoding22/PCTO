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
            printf("Indefinito\n");
        } else {
            if (x % y == 0) {
                int res = x / y;
                printf("%d\n", res);
            } else {
                float res = (float)x /  (float)y;
                printf("%f\n", res);
            }
        }


    }

    
    return 0;

}