#include <stdio.h> // a cura di LORENZO IL MAGNIFICO (GIGLIO) - DANIELE DELLA GENS ALVARADA (daniel alvarado) - IMMANNUEL (EMANUEL DOCAJ)- e poi MATTEo (che non ha fatto nulla)

int main()
{
    int x, y;
    char a;
    int risultato;
    
    printf("inserisci un' operazione:\n");
    scanf("%d %c %d", &x, &a, &y);
    

    if (a == '+')
    {
        risultato = x + y;
        printf("Il risultato della somma è: GILBERTO E' ESPLOSO %d\n", risultato);

        return(0);
    }

    else
    {

        if (a == '-')
        {
            risultato = x - y;
            printf("Il risultato della sottrazione è: SALAMALAEKUM BIG MAC %d\n", risultato);

            return(0);
        }
        else
        {
                if (a == '*')
            {
                risultato = x * y;
                printf("Il risultato della moltiplicazione è: MA LISCIAMI LE MELE SUDICIO %d\n", risultato);

                return(0);
            }
            else
            {

                if (a == '/')
                {
                    risultato = x / y;
                    printf("il risultato della divisione è: SIUUUUUM %d\n", risultato);

                    return(0);
                }
            }
        }
    }
    
    return (0);
    
}

                                                                                                                                                                                                                                                                          