#include <stdio.h>

int main()         //tutte le possibili combinazioni di due dadi a 12 faccie
{ 
    
    for(int x=1; x<=12; x=x+1 )      //(condizione iniziale, tutti valori che può assumere, funzione da svolgere dopo il printf)
    {

        for(int y=x; y<=12; y=y+1)
         {
            printf("%d %d\n",x ,y);
    }
    }
    
    
    return(0) ;


}

 