# include <stdio.h>
# include <math.h>

int main() {

    float r, h, area_lateral, area_total, volumen;

    const float pi=3.14159265;

    printf("\n----------------------------------------------------------------\n");
    printf("\n//CALCULO DEL AREA DE LA SUPERFICIE Y VOLUMEN DE UN CILINDRO//\n");
    printf("\n----------------------------------------------------------------\n");
    printf("Ingrese el radio del cilindro: ");
    scanf("%f", &r);
    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &h);

    area_lateral = 2*pi*r*h;
    area_total = 2*pi*r*(r+h);
    volumen = pi*pow(r,2)*h;

    printf("\n----------------------------------------------------------------\n");
    printf("\n//RESULTADOS DEL CALCULO//\n");
    printf("\nEl area lateral del cilindro es: %.2f\n", area_lateral);
    printf("\nEl area total del cilindro es:   %.2f\n", area_total);
    printf("\nEl volumen del cilindro es:      %.2f\n", volumen);
    printf("\n----------------------------------------------------------------\n");

    return 0;
}
