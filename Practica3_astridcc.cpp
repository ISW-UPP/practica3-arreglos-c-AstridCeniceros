//Ejercicio1 Programa que pida 10 números y los muestre en orden inverso al que fueron agregados

#include <iostream>

using namespace std;

int main()
{
    int arreglo[9];
    printf("10 numeros y su inversa \n\n");
    for(int i = 0; i < 10; i++){
        printf("ingresa el numero %d: ",i + 1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("\nArreglo_impreso_a_la_inversa \n\n");
    for(int j = 9; j >= 0; j--){
        printf("numero %d: %d\n", j + 1, arreglo[j]);
    }
    

    return 0;
}


/*Ejercicio2 Programa que pida 10 números, calcule su media y luego muestre los que están por encima de la media*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sum,numeros1[10];
    int i;
    sum=0;
for(i=0;i<10;i++)
{
    printf("ingrese un numero:");
    scanf("%d", &numeros1[i]);
}

for(i=0;i<10;i++)
{
    sum=sum+numeros1[i];
}
printf("%d\n",sum/10);


    return 0;
}



//Ejercio3 Programa que pida 10 números, para que calcule cuál es el mayor de ellos

#include <stdio.h>
int main()
{
    int num,k,mayor=0;
    printf("introduce los 10 numeros:");
    for(k=1;k<=10;k++)
    {
    scanf("%d",&num);
    if(num>mayor)mayor=num;
    }
    printf("este es el numero mayor: %d",mayor);

    return 0;
}

