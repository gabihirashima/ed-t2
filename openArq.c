#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variaveis.h"
#include "formaC.h"
#include "formaL.h"
#include "formaR.h"
#include "formaT.h"
#include "hidrante.h"
#include "quadra.h"
#include "radio.h"
#include "semaforo.h"
#include "listas.h"
#include "openArq.h"

void openGeo(listaRadios listaR, listaQuadras listaQ, listaHidrantes listaH, listaSemaforos listaS,
listaCirculos listaC, listaRetangulos listaA, listaTexto listaT)
{
    FILE *arq; 

    char comando[3];
    char cfillQ[20];
    char cstrkQ[20];
    char cstrkH[20];
    char cfillH[20];
    char cstrkR[20];
    char cfillR[20];
    char cstrkS[20];
    char cfillS[20];
    char corb[20];
    char corp[20];
    char text[50];
    char id[20];
    char cep[20];
    int id_forma;
    int i = 1000;
    int nq = 1000;
    int nh = 1000;
    int ns = 1000;
    int nr = 1000;
    int cont_i = 0;
    int cont_nq = 0;
    int cont_nh = 0;
    int cont_ns = 0;
    int cont_nr = 0;
    double r;
    double x;
    double y;
    double w;
    double h;
    char sw[5];
    char cw[5];
    char rw[5];

    tipo elemento;

    arq = fopen("b1-bsc-000.geo", "r");

        if(arq == NULL){
            printf("Erro ao abrir o arquivo Geo!!");
            system("pause");
            exit(1);
        }
    
        while(fscanf(arq, "%s", comando) != EOF){
            while(cont_i < i &&  nq < cont_nq && nh < cont_nh && ns < cont_ns && nr < cont_nr){
                if(strcmp(comando, "nx") == 0){
                    fscanf(arq, "%d %d %d %d %d\n", &i, &nq, &nh, &ns, &nr);
                }

                else if(strcmp(comando, "c") == 0){
                    fscanf(arq, "%d %lf %lf %lf %s %s", &id_forma, &r, &x, &y, corb, corp); 
                    elemento = criaCirculo(id_forma, r, x, y, corb, corp);
                    listaC = insereElemento(listaC, elemento);
                    cont_i += 1;
                }

                else if(strcmp(comando, "r") == 0){
                    fscanf(arq, "%d %lf %lf %lf %lf %s %s", &id_forma, &w, &h, &x, &y, corb, corp); 
                    elemento = criaRetangulo(id_forma, w, h, x, y, corb, corp);
                    listaA = insereElemento(listaA, elemento);
                    cont_i += 1;
                }

                else if(strcmp(comando, "t") == 0){
                    fscanf(arq, "%d %lf %lf %s %s %s", &id_forma, &x, &y, corb, corp, text); 
                    elemento = criaTexto(id_forma, x, y, corb, corp, text);
                    listaT = insereElemento(listaT, elemento);
                }

                else if(strcmp(comando, "q") == 0){
                    fscanf(arq, "%s %lf %lf %lf %lf", cep, &x, &y ,&w ,&h);
                    elemento = criaQuadra(cep, x, y, w, h, cfillQ, cstrkQ);
                    listaQ = insereElemento(listaQ, elemento);
                    cont_nq += 1;
                }

                else if(strcmp(comando, "h") == 0){
                    fscanf(arq, "%s %lf %lf", id, &x, &y);
                    elemento = criaHidrante(id, x, y, cfillH, cstrkH);
                    listaH = insereElemento(listaH, elemento);
                    cont_nh += 1;
                }

                else if(strcmp(comando, "s") == 0){
                    fscanf(arq, "%s %lf %lf", id, &x, &y);
                    elemento = criaSemaforo(id, x, y, cfillS, cstrkS);
                    listaS = insereElemento(listaS, elemento);
                    cont_ns += 1;
                }

                else if(strcmp(comando, "rb") == 0){
                    fscanf(arq, "%s %lf %lf", id, &x, &y);
                    elemento = criaRadio(id, x, y, cfillR, cstrkR);
                    listaR = insereElemento(listaR, elemento);
                    cont_nr += 1;
                }

                else if(strcmp(comando, "ch") == 0){
                    fscanf(arq, "%s %s %s", sw, cfillH, cstrkH);
                }

                else if(strcmp(comando, "cr") == 0){
                    fscanf(arq, "%s %s %s", sw, cfillR, cstrkR);
                }

                else if(strcmp(comando, "cs") == 0){
                    fscanf(arq, "%s %s %s", sw, cfillS, cstrkS);
                }

                else if(strcmp(comando, "cq") == 0){
                    fscanf(arq, "%s %s %s", sw, cfillQ, cstrkQ);
                }

                else if(strcmp(comando, "sw") == 0){
                    fscanf(arq, "%s %s", cw, rw);
                }
            }
            printf("\nExcesso de elementos no arquivo geo.");
        }
        

    fclose(arq);
}
