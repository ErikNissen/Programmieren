#include <stdio.h>

int main(void) {
    // Konstante deklarieren & definieren
    const float Preise[] = {1.7, 1.0, 1.8};
    // Variablen deklarieren & definieren
    float Preis[4];
    float A, P;
    _Bool x = 0;
    char eingabe;
    unsigned short M;
    while (x == 0) {   
        printf("Wie viel kg Aepfel?\n");
        scanf("%f", &A);
        Preis[0] = Preise[0] * A; //1. Teilpreisberechnung
        printf("Das sind %.2f€.\nWie viele Melonen?\n", Preis[0]);
        scanf("%d", &M);
        Preis[1] = Preise[1] * M; //2. Teilpreisberechnung
        printf("Das sind %.2f€.\nWie viele kg Pfirsiche?\n", Preis[1]);
        scanf("%f", &P);
        Preis[2] = Preise[2] * P; //3. Teilpreisberechnung
        Preis[3] = Preis[0] + Preis[1] + Preis[2]; //Gesammtpreisberechnung
        printf("Das sind %.2f€.\nDas macht zusammen %.2f€\n\n", Preis[2], Preis[3]);
        //Beendedialog
        printf("Beenden?[Y,N]\n: ");
        n:
        scanf("%c", &eingabe);
        if(eingabe == 'Y'){
            x = 1;
        }else if (eingabe == 'y') {
            x = 1;
        }else if (eingabe == 'n') {
        }else if (eingabe == 'N') {
        }else {
            goto n;
        }
    }
}