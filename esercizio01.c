#include <stdio.h>

int sottrazione(int eta)
{
    eta = eta - 18;
    return(eta);
}

int main()
{
    int eta;
    int differenza_eta; 
    printf("Inserisci un età \n");
    scanf("%d", &eta);
    differenza_eta = sottrazione(eta);

    while(eta < 0)
    {
        printf("Non posso fare miracoli\n");
        printf("Inserisci un età \n");
        scanf("%d", &eta);
    }
     while(eta > 200)
    {
        printf("Umano?\n");
        printf("Inserisci un età \n");
        scanf("%d", &eta);
    }
    if(differenza_eta >= 0)
    {
        printf("Sei Maggiorenne!\n");
    }
    else
    {
        printf("Minorato in età\n");
    }
}