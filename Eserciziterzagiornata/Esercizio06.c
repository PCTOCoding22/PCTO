#include <stdio.h>

int main(){
  int x;
  printf("In che anno sei nato?\n");
  scanf("%d", &x);

 if(x%4 == 0)
 {
    if(x%400 == 0)
    {
        if(x%100 != 0)
        {
            printf("L'anno è stato bisestile\n");
        }
        
    }
 }

    printf("l'anno non è stato bisestile\n");

 return 0;
}