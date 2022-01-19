#include <stdio.h>

int main()
{
int x;
printf("chiedi un numero:");
scanf("%d", &x);
int y;
printf("chiedi  il secondo numero:");
scanf("%d", &y);
if(!(x%y))
{
    printf("x è multiplo di y");
}
else
{
    printf("x non è multiplo di y");

}
return 0;
}