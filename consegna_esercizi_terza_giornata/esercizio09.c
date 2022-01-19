#include <stdio.h>

int main() {

    int primoAnno = 1969;
    int anno;

    printf("Inserisci il tuo anno di nascita: ");
    scanf("%d", &anno);

    int k = primoAnno - anno;

    if (k == 0) {
        printf("L'utente è nato lo stesso anno della prima visita sulla luna\n");
    } else {
        if (k > 0) {
            printf("L'utente è nato %d anni prima della prima visita sulla luna\n", k);
        } else {
            k = -k;
            printf("L'utente è nato %d anni dopo della prima visita sulla luna\n", k);
        }
    }

    return 0;
}