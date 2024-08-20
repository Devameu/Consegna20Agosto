#include <stdio.h>
//definisco la funzione di calcolo
int moltiplicazione(int num1, int num2){
    int moltiplicazione = 0;

    moltiplicazione = num1 * num2;
    return moltiplicazione;
    }

//Chiedo all'utente di inserire i due valori per effettuare il calcolo della moltiplicazione
void calcolo_moltiplicazione(){
    int num1 ,num2;

    printf("Inserisci primo numero\n");
    scanf("%d", &num1);

    printf("Inserisci secondo numero\n");
    scanf("%d", &num2);
    
    printf("\n%d * %d = %d\n", num1,num2, moltiplicazione(num1,num2));
}

//definisco la funzione di calcolo
float mediaAritmetica(int num1, int num2){
    float media;

    media = (num1 + num2) / 2.0;
    return media;
    }

//Chiedo all'utente di inserire i due valori interi per effettuare il calcolo per la media aritmetica
void calcolo_media(){
    int num1, num2;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &num1);

    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &num2);
    
    printf("La media aritmetica è: %.2f\n", mediaAritmetica(num1,num2));
}

//Utilizzo di uno switch per la scelta dell'operazione
int main(){
    int scelta;
    printf("\nScegli \n1 Moltiplicazione \n2 Media Aritmetica\n");
    scanf("%d", &scelta);
    switch(scelta){
        case 1:
            calcolo_moltiplicazione();
            break;
        case 2:
            calcolo_media();
            break;
        default:
            printf("Non previsto");        
    }
    
    return 0;
}