#include <stdio.h>
#include <stdlib.h>

int main()
{

int horas, minutos;
do {
printf("\n\nHORAS: ");
scanf("%d", &horas);
if (horas<0 || horas>23)
printf("\nHoras invalidas.");
} while (horas < 0 || horas > 23);
do {
printf("\n\nMINUTOS: ");
scanf("%d", &minutos);
if (minutos< 0 || minutos> 59)
printf("\nMinutos invalidos.");
} while(minutos<0 || minutos>59);
    printf("\n\nFoi marcado %02d:%02d", horas, minutos);
    getchar();


    return 0;
}
