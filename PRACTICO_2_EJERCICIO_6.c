# include <stdio.h>

int main() {

    float C, F, K, Ra;

    printf("\n------------------------------------------------\n");
    printf("        //CONVERSION DE GRADOS CELSIUS//\n");
    printf("\nIngrese los grados Celsius: ");
    scanf("%f", &C);

    F = ( C * 9 / 5) + 32;
    K = C + 273.15;
    Ra = ( C + 273.15 ) * 9 / 5;

    printf("\n------------------------------------------------\n");
    printf("       //RESULTADO DE LAS CONVERSIONES//\n");
    printf("\n %.2f grados Celcius son: ", C);
    printf("\n En grados Fahrenheit: %.2f", F);
    printf("\n En grados Kelvin:     %.2f", K);
    printf("\n En grados Rankine:    %.2f", Ra);
    printf("\n------------------------------------------------\n");

    return 0;
}
