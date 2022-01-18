#include <stdio.h>
int main()
{
    int n = 0;
    int indice = 1;
    while (indice){
        printf("Inserisci un numero: ");
        int new_n;
        scanf("%d", &new_n);
        if (new_n >= 0){
            n += new_n;
            printf("La media è %d\n", n/indice);
            indice++;
            }
        else{
            return 0;
        }
    }
}
    