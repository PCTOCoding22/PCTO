#include<stdio.h>
int main () {

int x;
int y;
printf ("inserisci un numero:");
scanf("%d", &x);
printf ("inserisci il secondo numero:");
scanf("%d", &y);
if ( x % y == 0 ){
   printf("è un multipo\n");
}
else{
    printf("non è un multiplo\n");
}
return 0;
}