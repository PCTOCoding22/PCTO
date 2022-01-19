#include <stdio.h>

int main(){   //BEATRICE DE PASCQUALE E FILIPPO SANDRI
    int x;
    char y;
    int z;
    char g = '=';
    
    printf("inserisci un numero\n");
    scanf("%d", &x);
    printf("inserisci un segno\n");
    scanf("\n%c", &y);
    printf("inserisci il secondo numero\n");
    scanf("%d", &z);
    int a = x + z;
   
    
    
    

    if( y == '+'){
        printf("%d %c %d %c %d\n", x,y,z,g,a);
        return 0;
    }
     int b = x * z;
    if ( y == '*'){
        printf ("%d %c %d %c %d\n", x,y,z,g,b);
        return 0;
    }
    int c = x - z;
    if (y == '-'){
        printf("%d %c %d %c %d\n", x,y,z,g,c);
        return 0;
    }
    
    if (z==0) {
            printf("TI ODIO");
            return 0;
    } 
    int d = x / z;
    if (y == '/'){
        
        printf("%d %c %d %c %d\n", x,y,z,g,d);
        return 0;
        }
   return 0;     
}