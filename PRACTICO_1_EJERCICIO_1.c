# include <stdio.h>

int main(){
char nombre[50], carrera[50];
int edad, semestre;

printf("---------------//REGISTRO DEL ESTUDIANTE//--------------------\n");
printf("Usar guiones bajos como espacios, ejemplo: Jesus_Andres, Ingenieria_Economica\n");

printf("Ingrese su nombre completo: ");
scanf("%s", nombre);

printf("Ingrese su edad: ");
scanf("%d", &edad);

printf("Ingrese su carrera: ");
scanf("%s", carrera);

printf("Ingrese el semestre que esta cursando: ");
scanf("%d", &semestre);

printf("\n----------//DATOS DEL ESTUDIANTE//----------\n");
printf("Nombre completo: %s\n", nombre);
printf("Edad: %d\n", edad);
printf("Carrera: %s\n", carrera);
printf("Semestre: %d\n", semestre);

return 0;

}
