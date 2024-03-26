#include <stdio.h>

char konverto_noten(int piket) {
    int shifra_dhjeteshe = piket / 10;
    char nota;

    switch (shifra_dhjeteshe) {
        case 10:
        case 9:
            nota = 'A';
            break;
        case 8:
            nota = 'B';
            break;
        case 7:
            nota = 'C';
            break;
        case 6:
            nota = 'D';
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            nota = 'F';
            break;
        default:
            printf("Numri i dhene eshte i pavlefshem.\n");
    }

    return nota;
}

int main() {
    int piket;
    char nota;

    printf(" Vendosni piket e marra ne provim:");
    scanf("%d", &piket);

    nota = konverto_noten(piket);

    if (nota != '\0') {
        printf("Nota juaj eshte: %c\n", nota);
    }

    return 0;
}