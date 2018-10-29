#include <stdio.h>
#include <stdlib.h>

#define TAM 150

int main()
{
    int classi, num, soma, media;
    num = 0;
    soma = 0;
    media = 0;

    do{
        do{
            printf("Classificação:");
            scanf("%i", &classi);
            if(classi < -1 || classi >20)
            {
                printf("Valor inválido");
            }

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
