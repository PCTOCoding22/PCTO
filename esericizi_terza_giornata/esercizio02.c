#include <stdio.h>
int  main()
{
    int etatizio;
    
    printf("Inserire età: \n");
    scanf("%d", &etatizio );

    if( etatizio >= 18 )
    {
        printf("Puoi guidare in Italia :D\n");
    }
    else
    {
        if( etatizio >= 16 )
        {
            printf("Non puoi guidare in Italia ma almeno guidare in America :P\n");
        }
        else
        {
            printf("Non puoi guidare ne in America ne in Italia. :(\n");
        }
    }
    return(0);

}
