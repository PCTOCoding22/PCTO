#include <stdio.h>

int main() {

    while (1) {
        
        int unitario = 5;
        int npezzi;

        printf("Inserisci quantità ordine: ");
        scanf("%d", &npezzi);

        float prezzo = unitario * npezzi;

        if (npezzi >= 50) {

            float sconto = 0.15 * prezzo;
            prezzo = prezzo - sconto;
            printf("Il prezzo è %f€ scontato del 15 percento\n", prezzo);
            
        } else if (npezzi >= 30) {

            float sconto = 0.10 * prezzo;
            prezzo = prezzo - sconto;
            printf("Il prezzo è %f€ scontato del 10 percento\n", prezzo);

        } else if (npezzi <= 10) {

            printf("Hai inserito un ordine nullo o negativo\n");
            return 0;

        } else {

            printf("Il prezzo è %f€ non scontato\n", prezzo);

        }

    }
 
    return 0;
}