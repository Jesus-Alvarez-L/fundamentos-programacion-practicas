# include <stdio.h>
# include <math.h>

int main() {

    float C, T, M, G;
    int N;

    printf("\n-------------------------------------------------\n");
    printf("//CALCULO DE INVERSION CON CAPITALIZACION MENSUAL//\n");
    printf("Ingrese el Capital inicial: ");
    scanf("%f", &C);
    printf("Ingrese la tasa de interes anual: ");
    scanf("%f", &T);
    printf("Ingrese el plazo en años: ");
    scanf("%d", &N);

    M = C * pow( 1 + T / 12 / 100 , N * 12 );
    G = M - C;

    printf("\n-------------------------------------------------\n");
    printf("                 //RESULTADOS//\n");
    printf("\nEl monto acumulado es de: %.2f\n", M);
    printf("La ganancia neta es de:   %.2f\n", G);
    printf("\n-------------------------------------------------\n");

    return 0;
}
