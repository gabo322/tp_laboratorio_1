#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

void main() {
  int opc;
  float a, b;
  char c;

  do {
    menu();
    scanf("%d",&opc);
     system("cls");
    switch(opc) {
      case 1:
        printf("\nIntroduce a: ");
        scanf("%f", &a);
        break;
      case 2:
        printf("\nIntroduce b: ");
        scanf("%f", &b);
        break;
      case 3:
       printf("La suma de %.2f y %.2f es: %.2f\n\n", a, b, suma(a, b));
        break;
      case 4:
        printf("La resta de %.2f y %.2f es: %.2f\n\n", a, b, resta(a, b));
        break;
        case 5:
        printf("La division entre %.2f y %.2f es: %.2f\n", a, b, dividir(a, b));
            break;
        case 6:
        printf("La multiplicacion de %.2f y %.2f es: %.2f\n\n", a, b, multiplicar(a, b));
            break;
        case 7:
             printf("El factoreo de a es : ");
             printf(factorear(a));
             printf("\n");
             printf("El factoreo de b es: ");
             printf(factor(b));


            // printf(factorear(b));
            break;
        case 8:
            printf("La suma de %.2f y %.2f es: %.2f\n", a, b, suma(a, b));
            printf("La resta de %.2f y %.2f es: %.2f\n", a, b, resta(a, b));
            printf("La division entre %.2f y %.2f es: %.2f\n", a, b, dividir(a, b));
            printf("La multiplicacion de %.2f y %.2f es: %.2f\n", a, b, multiplicar(a, b));
            printf(factorear(a));
            printf("\n");
            printf(factor(b));
            break;
      case 9: break;
      default:
        printf("\nIntroduce una opción valida...");
    }
  } while (opc != 9);
}
