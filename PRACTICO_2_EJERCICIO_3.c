
# include <stdio.h>

int main() {
    int examen_parcial_1, examen_parcial_2, examen_final, proyecto, nota_final;

    printf("\n---------------------------------------\n");
    printf("//CALCULO DE NOTA DEL ESTUDIANTE//\n");
    printf("\nIngrese la nota del primer parcial: ");
    scanf("%d", &examen_parcial_1);
    printf("\nIngrese la nota del segundo parcial: ");
    scanf("%d", &examen_parcial_2);
    printf("\nIngrese la nota del examen final: ");
    scanf("%d", &examen_final);
    printf("\nIngrese la nota del proyecto: ");
    scanf("%d", &proyecto);
    printf("\n---------------------------------------\n");

    nota_final = (examen_parcial_1 + examen_parcial_2) * 0.25 + examen_final * 0.30 + proyecto * 0.20;

    printf("//NOTA FINAL//\n");
    printf("\nLa nota final del estudiante es: %.d\n", nota_final);
    if(nota_final>50){
       printf("\nEl estudiante aprobo la materia\n");}
       else {printf("\nEl estudiante reprobo la materia\n");}
    printf("\n---------------------------------------\n");


    return 0;
}
