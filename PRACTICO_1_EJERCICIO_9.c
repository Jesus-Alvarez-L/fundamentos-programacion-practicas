# include <stdio.h>

int main(){

    int n;

    printf("Escriba el numero entero: ");
    scanf("%d", &n);

    if (n % 2 == 0){
    printf("\nEl numero %d es par\n", n);
    }
    else {
    printf("\nEl numero %d es impar\n", n);
    }

    return 0;

}
