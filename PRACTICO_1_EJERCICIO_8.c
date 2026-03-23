#include <stdio.h>

int main() {

 float compra, descuento;

 printf("\n//COMPRAS//\n");
 printf("Escribir el monto de la compra $: ");
 scanf("%f", &compra);

 descuento = ( compra * 0.9 );

 if (compra > 100){
    printf("\nDescuento del 10%%, el monto total a pagar es de $ %.2f\n", descuento);
 }

 else if (compra <= 100){
    printf("\nEl monto total a pagar es de $ %.2f\n", compra);
 }

    return 0;
}
