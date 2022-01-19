#include <stdio.h>

int main() {
   int eta;
    printf("inserisci un età:" );
    scanf("%d", &eta);

     if(eta >= 18)
    {
        printf("puoi prendere la patente in Italia\n");
    }
    else(eta < 18); {
        printf("non puoi prendere la patente in Italia\n");
    }

    return 0;
    
}
