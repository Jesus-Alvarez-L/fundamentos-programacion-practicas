# include <stdio.h>

int main(){

float pago_por_hora, salario, bono;
int horas_trabajadas;

printf("Escriba el total de horas trabajadas: ");
scanf("%d", &horas_trabajadas);

printf("Escriba el pago por hora: ");
scanf("%f", &pago_por_hora);

salario  = ( horas_trabajadas * pago_por_hora );

bono = salario *(1+0.1);

if (horas_trabajadas > 40){
    printf("\nBono del 10%%, su salario es de $ %.2f\n", bono);
}
else {
    printf("\nSu salario es de $ %.2f\n", salario);
}

return 0;

}
