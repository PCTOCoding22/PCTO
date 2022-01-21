#include <stdio.h>

    float temperatura_K (float C)
    { 
        float temperatura_K;
        temperatura_K = C + 273,15;
        return temperatura_K;
    }

    float temperatura_F (float C){
        float temperatura_F;
        temperatura_F= (1.8)*C +32;
        return temperatura_F;
    }

    int main()
    { 
        float x;
        

    printf("Quanti gradi fanno oggi in Celsius?\n");
    scanf("%f", &x);

    if (x< -273.15)
    {
       printf("\033[0;31mERRORE\n");
      return 0;
    }

            float  K;
      K = temperatura_K(x);
      printf("La temperatura è di %f K\n", K);

        float F;
        F = temperatura_F(x);
        printf("La temperatura è di %f F\n", F);

return 0;
}

