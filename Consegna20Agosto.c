#include <stdio.h>

// Funzione per l'inserimento dei valori manualmente
void inserisci_numeri(int *num1, int *num2) {
    printf("Inserisci il primo numero intero: ");
    scanf("%d", num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", num2);
}

// Funzione di moltiplicazione
int moltiplicazione(int num1, int num2) {
    return num1 * num2;
}

// Funzione per calcolare la media aritmetica
float mediaAritmetica(int num1, int num2) {
    return (num1 + num2) / 2.0;
}

// Funzione principale per eseguire il calcolo di moltiplicazione o media
int main() {
    int scelta, num1, num2;

    printf("\nScegli:\n1. Moltiplicazione\n2. Media Aritmetica\n");
    scanf("%d", &scelta);

    inserisci_numeri(&num1, &num2);

    switch(scelta) {
        case 1:
            printf("\n%d * %d = %d\n", num1, num2, moltiplicazione(num1, num2));
            break;
        case 2:
            printf("La media aritmetica è: %.2f\n", mediaAritmetica(num1, num2));
            break;
        default:
            printf("Opzione non prevista\n");
    }

    return 0;
}