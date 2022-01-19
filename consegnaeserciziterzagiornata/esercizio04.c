#include <stdio.h>

int main(){
    float x;
    printf("inserisci una temperatura");
    scanf("%f",&x);
    if(x < -273.15){
        printf("ERROR");
    }
    else{
        float faherenheit;
        float Kelvin;

        faherenheit=(9/5)*x+32;
        Kelvin=x+273,15;

        printf("Temperatura in Faherenheit:%f\n",faherenheit);
        printf("Temperatura in Kelvin:%f\n",Kelvin);


    }
    return 0;

}