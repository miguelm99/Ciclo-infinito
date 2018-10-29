#include <stdio.h>
#include <stdlib.h>

#define TAM 150

int main()
{
    int classi, num, soma, media;
    num = 0;
    soma = 0;
    media = 0;

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
printf("\nMinutos invalidos. asddsadsasda");
} while(minutos<0 || minutos>59);
    printf("\n\nFoi marcado %02d:%02d", horas, minutos);
    getchar();
        }while(classi!=-1);
                soma=soma+classi;

    }
    while(classi!=-1);
        {
        if(num!=0)
            {
            media=soma/num;
            }
        else
            {
            media=0;
            }
        printf("media= %i", media);
    }
    return 0;
}
