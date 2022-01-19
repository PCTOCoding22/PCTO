  #include <stdio.h>

  int main()
  {
     float celsius;
     float fahrenheit;
     float kelvin;
    
     printf ("inserisci celsius:  ");
     scanf ("%f", &celsius);
     
     if (celsius < -273.15)
        {
            printf ("errore");
             
        }
     else
        {
            fahrenheit = 9.0 / 5 * celsius + 32;
            printf ("La temperatura è: %f Fahrenheit\n", fahrenheit);

            kelvin = celsius + 273.15;
            printf ("La temperatura è: %f Fahrenheit", fahrenheit);
        }

      return (0);
  }