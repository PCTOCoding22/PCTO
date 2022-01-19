    #include <stdio.h>

    int main()
    {
        int eta;
        int maggiore_eta;
        int differenza_eta; 
        printf("Inserisci l'età in cui si può prendere la patente nel tuo paese: \n");
        scanf("%d", &maggiore_eta);
        while(maggiore_eta <= 0)
        {
            printf("Error01#àç\n");
            printf("Inserisci l'età in cui si può prendere la patente nel tuo paese: \n");
            scanf("%d", &maggiore_eta);
        }
        printf("Inserisci la tua età: \n");
        scanf("%d", &eta);
        while(eta <= 0)
        {
            printf("Non posso fare miracoli\n");
            printf("Inserisci l'età in cui si può prendere la patente nel tuo paese: \n");
            scanf("%d", &maggiore_eta);
            printf("Inserisci la tua età \n");
            scanf("%d", &eta);
        }
        while(eta >= 200)
        {
            printf("Umano?\n");
            printf("Inserisci l'età in cui si può prendere la patente nel tuo paese: \n");
            scanf("%d", &maggiore_eta);
            printf("Inserisci un età \n");
            scanf("%d", &eta);
        }
        differenza_eta = eta - maggiore_eta;

        if(differenza_eta >= 0)
        {
            printf("Puoi avere la patente nel tuo paese!\n");
        }
        else
        {
            printf("Non puoi avere la patente nel tuo paese!\n");
        }

    }