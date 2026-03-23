# include <stdio.h>

int main() {
    char nombre[50];
    float salario, aguinaldo;
    int meses_trabajados;

    printf("\n------------------------------------------------------");
    printf("\n//CALCULO DEL AGUINALDO DEL TRABAJADOR//\n");
    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", nombre);
    printf("Ingrese el salario mensual del trabajador: ");
    scanf("%f", &salario);
    printf("Ingrese la cantidad de meses trabajados: ");
    scanf("%d", &meses_trabajados);

    aguinaldo = salario * meses_trabajados / 12;

    printf("\n------------------------------------------------------");
    printf("\n//RESULTADO//\n");
    printf("\nEl trabajador %s\n", nombre);
    printf("Tiene que cobrar un aguinaldo de Bs: %.2f", aguinaldo);
    printf("\n------------------------------------------------------");

    return 0;
}
