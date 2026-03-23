# include <stdio.h>
# include <math.h>

int main () {
    float C, N, Cuota_Mensual, Monto_Total, Interes_Total, T_porcentaje;

    printf("-----------------------------------------------------");
    printf("\n//CALCULO DE MONTO TOTAL A PAGAR POR UN CREDITO//\n");
    printf("\nIngrese el capital prestado: ");
    scanf("%f", &C);
    printf("\nIngrese la tasa de interes mensual: ");
    scanf("%f", &T_porcentaje);

    double T = T_porcentaje / 100;

    printf("\nIngrese el numero de cuotas: ");
    scanf("%f", &N);

    Cuota_Mensual = C * ( T * pow( 1 + T , N)) / (pow( 1 + T , N) - 1);
    Monto_Total = Cuota_Mensual * N;
    Interes_Total = Monto_Total - C;

    printf("\n------------------------------------------------------\n");
    printf("                    //RESULTADOS//\n");
    printf("\nLa cuota mensual que pagara es de:   %.2f", Cuota_Mensual);
    printf("\nEl monto total que pagara es de:   %.2f", Monto_Total);
    printf("\nEl interes total que pagara es de: %.2f", Interes_Total);
    printf("\n------------------------------------------------------\n");

    return 0;
}
