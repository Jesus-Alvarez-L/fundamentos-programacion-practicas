# include <stdio.h>

int main(){

int nota_1, nota_2, nota_3;
float nota_final;

printf("Ingrese la primera nota:");
scanf("%d", &nota_1);

printf("Ingrese la segunda nota:");
scanf("%d", &nota_2);

printf("Ingrese la tercera nota:");
scanf("%d", &nota_3);

nota_final = (nota_1+nota_2+nota_3)/3;

printf("\nLa nota final es %.2f\n", nota_final);

return 0;
}
