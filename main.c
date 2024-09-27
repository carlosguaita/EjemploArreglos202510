#include <stdio.h>

int main (int argc, char *argv[]) {

    float nums[6];
    float min=10, max=0, prom=0;


    for (int i = 0; i < 6; i++)
    {
        printf("Ingrese el elemento %d: ",i);
        scanf("%f",&nums[i]);
        if (nums[i]<0 || nums[i]>10)
        {
            printf("La calificacion ingresada es incorrecta\n");
            i--;
        } 
    }

    for (int i = 0; i < 6; i++)
    {
        if (nums[i]>max)
        {
            max=nums[i];
        }
        if (nums[i]<min)
        {
            min=nums[i];
        }
        prom=prom+nums[i];
    }
    prom=prom/6;
    printf("La calificacion menor es: %.2f\n",min);
    printf("La calificacion mayor es: %.2f\n",max);
    printf("El promedio es: %.2f\n",prom);

    return 0;
}