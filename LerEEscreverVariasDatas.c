#include <stdio.h>

int main(void) {


    int N;
    scanf("%d", &N);

    typedef struct{
        int dia;
        int mes;
        int ano;
    }data;

    data escolhida[N];
    char barra1[N];
    char barra2[N];

    for(int i = 0; i < N; i++) {
        scanf("%d", &escolhida[i].dia);
        scanf("%c", &barra1[i]);
        scanf("%d", &escolhida[i].mes);
        scanf("%c", &barra2[i]);
        scanf("%d", &escolhida[i].ano);
    }

    for(int i = 0; i < N; i++) {

        if(escolhida[i].mes == 2 && escolhida[i].dia >= 29){
            if(escolhida[i].dia > 29){
                printf("DATA INVALIDA\n");
            }
            else if(escolhida[i].dia == 29){
                if((escolhida[i].ano % 4 == 0) && (escolhida[i].ano % 100 != 0 || escolhida[i].ano % 400 == 0)){
                    printf("%d", escolhida[i].dia);
                    printf(" de fevereiro de ");
                    printf("%04d\n", escolhida[i].ano);
                }
                else{
                    printf("DATA INVALIDA\n");
                }
            }
        }

        else if(escolhida[i].mes == 2 && escolhida[i].dia > 29){
        printf("DATA INVALIDA\n");
        }

        else if (escolhida[i].mes == 4 && escolhida[i].dia == 31){
        printf("DATA INVALIDA\n");
        }

        else if(escolhida[i].mes == 11 && escolhida[i].dia == 31){
            printf("DATA INVALIDA\n");
        }

        else if(escolhida[i].mes == 9 && escolhida[i].dia == 31){
            printf("DATA INVALIDA\n");
        }

        else if(escolhida[i].mes == 6 && escolhida[i].dia == 31){
            printf("DATA INVALIDA\n");
        }

        else if(escolhida[i].mes > 12 || escolhida[i].mes < 1){
            printf("DATA INVALIDA\n");
        }

        else if(escolhida[i].ano <= 0){
            printf("DATA INVALIDA\n");
        }

        else if(escolhida[i].dia < 1 || escolhida[i].dia > 31){
            printf("DATA INVALIDA\n");
        }
        else{
            if(escolhida[i].dia < 10){
                printf("0");
            }
            switch (escolhida[i].mes){

                case 1:
                printf("%d", escolhida[i].dia);
                printf(" de janeiro de ");
                printf("%04d\n", escolhida[i].ano);
                break;

                case 2:
                printf("%d", escolhida[i].dia);
                printf(" de fevereiro de ");
                printf("%04d\n", escolhida[i].ano);
                break;

                case 3:
                printf("%d", escolhida[i].dia);
                printf(" de marco de ");      
                printf("%04d\n", escolhida[i].ano);
                break;

                case 4:
                printf("%d", escolhida[i].dia);
                printf(" de abril de ");
                printf("%04d\n", escolhida[i].ano);
                break;

                case 5:
                printf("%d", escolhida[i].dia);
                printf(" de maio de ");       
                printf("%04d\n", escolhida[i].ano);
                break;

                case 6:
                printf("%d", escolhida[i].dia);
                printf(" de junho de ");       
                printf("%04d\n", escolhida[i].ano);
                break;

                case 7:
                printf("%d", escolhida[i].dia);
                printf(" de julho de ");       
                printf("%04d\n", escolhida[i].ano);
                break;

                case 8:
                printf("%d", escolhida[i].dia);
                printf(" de agosto de ");       
                printf("%04d\n", escolhida[i].ano);
                break;

                case 9:
                printf("%d", escolhida[i].dia);
                printf(" de setembro de ");       
                printf("%04d\n", escolhida[i].ano);
                break;

                case 10:
                printf("%d", escolhida[i].dia);
                printf(" de outubro de ");      
                printf("%04d\n", escolhida[i].ano);
                 break;

                case 11:
                printf("%d", escolhida[i].dia);
                printf(" de novembro de ");    
                printf("%04d\n", escolhida[i].ano);
                break;

                case 12:
                printf("%d", escolhida[i].dia);
                printf(" de dezembro de ");     
                printf("%04d\n", escolhida[i].ano);
                break;      
            }
        }
    }
  return 0;
}