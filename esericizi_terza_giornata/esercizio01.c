#include <stdio.h>
int main()
{
    int maggiore_eta = 18;
    int eta;
    printf("Inserire età: ");
    scanf("%d", &eta);

    if( eta >= maggiore_eta)
    {
        printf("Sei maggiorenne\n");

    }
    else 
    {
        printf("Non sei maggiore\n");
    }
    return 0;
}
