void menu() {
  printf ("\nIntroduce una opcion de las siguientes:\n");
  printf ("1.- Ingrese A: \n");
  printf ("2.- Ingrese B: \n");
  printf ("3.- Sumar\n");
  printf ("4.- Restar\n");
  printf ("5.- Dividir\n");
  printf ("6.- Multiplicar\n");
  printf ("7.- Factorear\n");
  printf ("8.- Todas las operaciones\n");
  printf ("9.- Salir\n");
  printf ("Opcion: ");
}

float suma(float a, float b) {
  return a+b;
}

float resta(float a, float b) {
  return a-b;
}

float multiplicar(float a, float b) {
  return a*b;
}

float dividir(float a, float b) {
  if(b==0){
    printf("Error, B debe ser mayor que 0 para dividir.");
    printf("\nIntroduce b: ");
    scanf("%f", &b);
  }
  return a/b;
}

int factorear (int a){
 int i,j;
    int n[50];
    while(a<=0)
    {
       printf("el numero debe ser positivo\n");
       printf("Reingrese a: ");
       scanf("%d",&a);
    }
      //factores
    i=2;
    j=0;
    while(a>1)
    {
       if(a%i==0)
       {
          a=a/i;
          n[j]=i;
          j++;
          i=2;

       }
       else
          i++;
    }
      //imprimir los factores
    for(i=0;i<j;i++)
       printf("\nfactor %d = %d",i+1,n[i]);

    getchar();
    return 0;
}



int factor (int b){
 int i,j;
    int n[50];
    while(b<=0)
    {
       printf("el numero debe ser positivo\n");
       printf("Reingrese b: ");
       scanf("%d",&b);
    }
      //los factores
    i=2;
    j=0;
    while(b>1)
    {
       if(b%i==0)
       {
          b=b/i;
          n[j]=i;
          j++;
          i=2;

       }
       else
          i++;
    }
      //imprimir los factores
    for(i=0;i<j;i++)
       printf("\nfactor %d = %d",i+1,n[i]);

    getchar();
    return 0;
}

