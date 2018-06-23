#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#define TAM 30
void tempo(){
        time_t now;
     struct tm  ts;
     char       buf[80];

     now = time(NULL);

     ts = *localtime(&now);
     strftime(buf, sizeof(buf), "%a %d-%m-%Y %H:%M:%S", &ts);
     printf(" +  %s +                                                   +\n", buf);
}


void menu(){
printf(" ================================================================================\n");
printf(" +                          +                                                   +\n");
printf(" +  CLINICA - UEPB          +                                                   +\n");
printf(" +                          +                                                   +\n");
tempo();
printf(" +                          +                                                   +\n");
printf(" +==========================+                                                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                         >>>>>>>>>> MENU <<<<<<<<<<                           +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            1 -> ALUNO                            2 -> PACIENTE               +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            3 -> SUPERVISOR                       4 -> AGENDAMENTO            +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            5 -> ATENDIMENTO                      0 -> SAIR                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" ================================================================================\n\n");
}
void menusupervirsor(){
printf(" ================================================================================\n");
printf(" +                          +                                                   +\n");
printf(" +  CLINICA - UEPB          +                                                   +\n");
printf(" +                          +                                                   +\n");
tempo();
printf(" +                          +                                                   +\n");
printf(" +==========================+                                                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                      >>>>>>>>>> SUPERVISOR <<<<<<<<<<                        +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            1 -> CADASTRAR                            2 -> LISTAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            3 -> REMOVER                              4 -> EDITAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            0 -> VOLTAR                                                       +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" ================================================================================\n\n");
}

void menuagendamento(){
printf(" ================================================================================\n");
printf(" +                          +                                                   +\n");
printf(" +  CLINICA - UEPB          +                                                   +\n");
printf(" +                          +                                                   +\n");
tempo();
printf(" +                          +                                                   +\n");
printf(" +==========================+                                                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                      >>>>>>>>>> AGENDAMENTO <<<<<<<<<<                       +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +              1 -> CRIAR                              2 -> LISTAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +              3 -> REMOVER                            0 -> VOLTAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" ================================================================================\n\n");
}
void menuatendimento(){
printf(" ================================================================================\n");
printf(" +                          +                                                   +\n");
printf(" +  CLINICA - UEPB          +                                                   +\n");
printf(" +                          +                                                   +\n");
tempo();
printf(" +                          +                                                   +\n");
printf(" +==========================+                                                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                      >>>>>>>>>> ATENDIMENTO <<<<<<<<<<                       +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +              1 -> REALIZAR                           2 -> LISTAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +              3 -> REMOVER                            0 -> VOLTAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" ================================================================================\n\n");
}

void menualuno(){
printf(" ================================================================================\n");
printf(" +                          +                                                   +\n");
printf(" +  CLINICA - UEPB          +                                                   +\n");
printf(" +                          +                                                   +\n");
tempo();
printf(" +                          +                                                   +\n");
printf(" +==========================+                                                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                        >>>>>>>>>> ALUNO <<<<<<<<<<                           +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            1 -> CADASTRAR                            2 -> LISTAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            3 -> REMOVER                              4 -> EDITAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            0 -> VOLTAR                                                       +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" ================================================================================\n\n");
}

void menupaciente(){
printf(" ================================================================================\n");
printf(" +                          +                                                   +\n");
printf(" +  CLINICA - UEPB          +                                                   +\n");
printf(" +                          +                                                   +\n");
tempo();
printf(" +                          +                                                   +\n");
printf(" +==========================+                                                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                       >>>>>>>>>> PACIENTE <<<<<<<<<<                         +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            1 -> CADASTRAR                            2 -> LISTAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            3 -> REMOVER                              4 -> EDITAR             +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            0 -> VOLTAR                                                       +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" ================================================================================\n\n");
}

void listarporarea(){
printf(" ================================================================================\n");
printf(" +                          +                                                   +\n");
printf(" +  CLINICA - UEPB          +                                                   +\n");
printf(" +                          +                                                   +\n");
tempo();
printf(" +                          +                                                   +\n");
printf(" +==========================+                                                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                >>>>>>>>>> LISTANDO ATENDIMENTOS <<<<<<<<<<                   +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            1 -> TODOS                               2 -> POR AREA            +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            3 -> POR ALUNO                           4 -> POR PACIENTE        +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +            0 -> VOLTAR                                                       +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" +                                                                              +\n");
printf(" ================================================================================\n\n");
}
typedef struct {
int numcasa,codigo,dia,mes,ano;
char cpf[20];
char nome[30],rua[40],cidade[30],bairro[30],SN[3],estado[40];
}PACIENTE;

typedef struct {
int mat;
char nome[30],curso[30],SN[3],cpf[20];
}ALUNO;
typedef struct{
int codigo;
char nome[20],curso[20],SN[3];
}SUPERVISOR;

typedef struct{
int codigoagen,dia,mes,ano,codigopaciente;
char nome[20],area[20],SN[3];
}AGENDAMENTO;

typedef struct{
int codaten,codagen,diaagen,mesagen,anoagen,codaluno,codpaciente,dia,mes,ano,codsuper;
char area[20],nomesuper[20],nomealuno[20],nomepaciente[20],SN[3];
}ATENDIMENTO;

//FAZENDO AGENDAMENTOS//
void fazeragendamento(){
    AGENDAMENTO ag;
    int aux,aux4;
    FILE *agen;
    agen = fopen("agendamento.txt","a+b");
    do{
            printf("===============================================================================\n====================== REALIZANDO NOVO AGENDAMENTO ============================\n===============================================================================\n");
            printf("\n\n");
            printf("- DIGITE O NOME DO PACIENTE:");
            scanf (" %[^\n]s", ag.nome);
            printf("\n");
            printf("- DIGITE O CÓDIGO DO PACIENTE:");
            scanf("%d",&ag.codigopaciente);
            printf("\n");
            aux4=versepaccad(ag.codigopaciente,ag.nome);
            if(aux4==1){
                goto aqui2728;
            }
            else{
                printf("\n\n*** O AGENDAMENTO NAO PODE SER REALIZADO POIS O PACIENTE NAO ESTA CADASTRADO!!! ***\n\n");
                printf("- DESEJA REALIZAR OUTRO AGENDAMENTO SIM/NAO");
                goto aqui4;

            }
            aqui2728:
            printf("- DIGITE A ÁREA DA CONSULTA:");
            scanf (" %[^\n]s", ag.area);
            aux = achara(ag.codigopaciente,ag.area);
            if(aux==1){
            printf("\n*** PACIENTE JA ATENDIDO NESSA AREA ***\n\n");
            printf("DESEJA FAZER UM NOVO AGENDAMENTO SIM/NAO\n");
            goto aqui4;
            }
            printf("\n");
            printf("- DIGITE A DATA DA CONSULTA:");
            scanf("%d%d%d",&ag.dia,&ag.mes,&ag.ano);
            printf("\n");
            printf("- DIGITE O CÓDIGO DO AGENDAMENTO:");
            scanf("%d",&ag.codigoagen);
            printf("\n");
            printf("- DESEJA REALIZAR OUTRO AGENDAMENTO SIM/NAO");
            fwrite(&ag, sizeof(AGENDAMENTO),1,agen);
            aqui4:
            printf("\n");
            scanf (" %[^\n]s",ag.SN);
            system("cls");
    }
    while((ag.SN[0]=='S')&&(ag.SN[1]=='I')&&(ag.SN[2]=='M')||(ag.SN[0]=='s')&&(ag.SN[1]=='i')&&(ag.SN[2]=='m'));
    fclose(agen);
}
//LISTANDO AGENDAMENTOS//
listaragendamento(){
            int m=1,d;
    printf("\n................::::::: AGENDAMENTO(S) REALIZADO(S) :::::::....................");
    printf("\n\n");
    AGENDAMENTO ag;
    FILE *agen;
    agen = fopen("agendamento.txt","r+b");
    while(fread(&ag, sizeof(AGENDAMENTO), 1, agen) == 1){
    printf("%dº AGENDAMENTO REALIZADO\n\n",m);
    printf("- NOME DO PACIENTE: %s",ag.nome);
    printf("\n\n");
    printf("- CÓDIGO DO PACIENTE: %d",ag.codigopaciente);
    printf("\n\n");
    printf("- ÁREA DA CONSULTA: %s",ag.area);
    printf("\n\n");
    printf("- DATA DA CONSULTA: %d/%d/%d",ag.dia,ag.mes,ag.ano);
    printf("\n\n");
    printf("- CÓDIGO DO AGENDAMENTO: %d",ag.codigoagen);
    printf("\n\n-------------------------------------------------------\n\n");
    m++;

}
fseek(agen, 0, SEEK_END);
if(ftell(agen)<=0){
    printf("\n\n");
    printf("---- NAO HA AGENDAMENTOS REALIZADOS ----\n\n");
    printf("\n\n");
}
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
system("cls");
fclose(agen);
}
//REMOVENDO AGENDAMENTO//
void removeragendamento(){
    int a;
    AGENDAMENTO ag;
    int codigo,i;
    FILE *arq=fopen("agendamento.txt","r+b");
    FILE *arq1=fopen("auxiliar4.txt","a+b");
    printf("===============================================================================\n========================= REMOVENDO AGENDAMENTO ===============================\n===============================================================================\n");
    printf("\n\nDIGITE O CÓDIGO DO AGENDAMENTO:");
    scanf("%d",&codigo);
    rewind(arq);
    while(fread(&ag,sizeof(AGENDAMENTO),1,arq)==1){
        if(codigo!=ag.codigoagen){
            fwrite(&ag,sizeof(AGENDAMENTO),1,arq1);
        }
    }
printf("\n\nAGENDAMENTO REMOVIDO COM SUCESSO!!!\n\n\n");
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
fclose(arq1);
fclose(arq);
system("del agendamento.txt");
system("ren auxiliar4.txt agendamento.txt");


}
//REMOVENDO AGENDAMENTO APOS SER ATENDIDO//
int removeragenaten(codigo){
    int a;
    AGENDAMENTO ag;
    FILE *arq2=fopen("agendamento.txt","r+b");
    FILE *arq1=fopen("auxiliar4.txt","a+b");
    while(fread(&ag,sizeof(AGENDAMENTO),1,arq2)==1){
        if(codigo!=ag.codigoagen){
            fwrite(&ag,sizeof(AGENDAMENTO),1,arq1);
        }
    }
fclose(arq1);
fclose(arq2);
system("del agendamento.txt");
system("ren auxiliar4.txt agendamento.txt");

return 1;

}

//ENCONTRANDO AGENDAMENTOS NA MESMA AREA//
int achara(int codigo, char nome[20]){
    AGENDAMENTO ag;
     FILE *arq=fopen("agendamento.txt","r+b");
     while(fread(&ag,sizeof(AGENDAMENTO),1,arq)){
        if((codigo==ag.codigopaciente)&&strcmp(nome,ag.area)==0)
        {
            fclose(arq);
            return 1;
        }
     }
     fclose(arq);
     return 0;
}
//RESTRIÇÃO SO ATENDER SE FOI AGENDADO//
int achardata(int codigo){
    AGENDAMENTO ag;
     FILE *arq3=fopen("agendamento.txt","r+b");
     while(fread(&ag,sizeof(AGENDAMENTO),1,arq3)){
        if(codigo==ag.codigoagen)
        {
            fclose(arq3);
            return 1;
        }
     }
     fclose(arq3);
     return 0;
}

//FAZENDO ATENDIMENTOS//
void fazeratendimento(){
    ATENDIMENTO at;
    AGENDAMENTO ag;
    int aux,aux2,aux3,aux4,aux5;
    FILE *aten;
    aten = fopen("atendimento.txt","a+b");
    do{
            printf("===============================================================================\n====================== REALIZANDO NOVO ATENDIMENTO ============================\n===============================================================================\n");
            printf("\n\n");
            printf("- DIGITE O NOME DO PACIENTE:");
            scanf(" %[^\n]s",at.nomepaciente);
            printf("\n");
            printf("- DIGITE O CÓDIGO DO PACIENTE:");
            scanf ("%d",&at.codpaciente);
            aux4=versepaccad(at.codpaciente,at.nomepaciente);
            if(aux4==1){
                goto aqui2727;
            }
            else{
                printf("\n\n*** O ATENDIMENTO NAO PODE SER REALIZADO POIS O PACIENTE NAO ESTA CADASTRADO!!! ***\n\n");
                goto aqui7;

            }
            aqui2727:
            printf("\n");
            printf("- DIGITE O NOME DO ALUNO:");
            scanf(" %[^\n]s", at.nomealuno);
            printf("\n");
            printf("- DIGITE A MATRICULA DO ALUNO:");
            scanf ("%d",&at.codaluno);
            aux3=versealucad(at.codaluno,at.nomealuno);
            if(aux3==1){
                goto aqui123;
            }
            else{
                printf("\n\n*** O ATENDIMENTO NAO PODE SER REALIZADO POIS O ALUNO NAO ESTA CADASTRADO!!! ***\n\n");
                goto aqui7;

            }
            aqui123:
            printf("\n");
            printf("- DIGITE O NOME DO SUPERVISOR:");
            scanf(" %[^\n]s",at.nomesuper);
            printf("\n");
            printf("- DIGITE O CODIGO DO SUPERVISOR:");
            scanf ("%d",&at.codsuper);
            printf("\n");
            aux5=versesupcad(at.codsuper,at.nomesuper);
            if(aux5==1){
                goto aqui145;
            }
            else{
                printf("\n\n*** O ATENDIMENTO NAO PODE SER REALIZADO POIS O SUPERVISOR NAO ESTA CADASTRADO!!! ***\n\n");
                goto aqui7;

            }
            aqui145:
            printf("- DIGITE A AREA DE ATENDIMENTO:");
            scanf(" %[^\n]s",at.area);
            printf("\n");
            printf("- DIGITE O CÓDIGO DO AGENDAMENTO:");
            scanf ("%d",&at.codagen);
            aux2=achardata(at.codagen);
            if(aux2==1){
                goto aqui23;
            }
            else{
                printf("\n\n*** O ATENDIMENTO NAO PODE SER REALIZADO POIS NAO FOI PREVIAMENTE AGENDADO!!! ***\n\n");
                goto aqui7;
            }
            aqui23:
            printf("\n");
            printf("- DIGITE A DATA DO AGENDAMENTO:");
            scanf ("%d%d%d",&at.diaagen,&at.mesagen,&at.anoagen);
            printf("\n");
            printf("- DIGITE O CÓDIGO DO ATENDIMENTO:");
            scanf ("%d",&at.codaten);
            printf("\n");
            printf("- DIGITE A DATA DO ATENDIMENTO:");
            scanf ("%d%d%d",&at.dia,&at.mes,&at.ano);
            printf("\n");
            printf("\nATENDIMENTO REALIZADO COM SUCESSO!!!\n\n");
            aux = removeragenaten(at.codagen);
            if(aux==1){
            goto aqui7;
            }
            aqui7:
            printf("- DESEJA REALIZAR OUTRO ATENDIMENTO SIM/NAO");
            fwrite(&at, sizeof(ATENDIMENTO),1,aten);
            printf("\n");
            scanf (" %[^\n]s",at.SN);
            system("cls");
    }
    while((at.SN[0]=='S')&&(at.SN[1]=='I')&&(at.SN[2]=='M')||(at.SN[0]=='s')&&(at.SN[1]=='i')&&(at.SN[2]=='m'));
    fclose(aten);
//    fclose(arq);
}
////LISTANDO TODOS OS ATENDIMENTOS////
void listaratendimento(){
        int l=1,d;

    printf("\n................::::::: ATENDIMENTO(S) REALIZADO(S) :::::::....................");
    printf("\n\n");
    ATENDIMENTO at;
    FILE *aten;
    aten = fopen("atendimento.txt","r+b");
    while(fread(&at, sizeof(ATENDIMENTO), 1, aten) == 1){
    printf("%dº ATENDIMENTO REALIZADO\n\n",l);
    printf("- CÓDIGO DO ATENDIMENTO: %d",at.codaten);
    printf("\n\n");
    printf("- CÓDIGO DO AGENDAMENTO: %d",at.codagen);
    printf("\n\n");
    printf("- DATA DO AGENDAMENTO: %d/%d/%d",at.diaagen,at.mesagen,at.anoagen);
    printf("\n\n");
    printf("- NOME DO ALUNO: %s",at.nomealuno);
    printf("\n\n");
    printf("- MATRICULA DO ALUNO: %d",at.codaluno);
    printf("\n\n");
    printf("- NOME DO PACIENTE: %s",at.nomepaciente);
    printf("\n\n");
    printf("- CÓDIGO DO PACIENTE: %d",at.codpaciente);
    printf("\n\n");
    printf("- DATA DO ATENDIMENTO: %d/%d/%d",at.dia,at.mes,at.ano);
    printf("\n\n");
    printf("- AREA DO ATENDIMENTO: %s",at.area);
    printf("\n\n");
    printf("- NOME DO SUPERVISOR: %s",at.nomesuper);
    printf("\n\n");
    printf("- CÓDIGO DO SUPERVISOR: %d",at.codsuper);
    printf("\n\n");
    printf("\n-------------------------------------------------------\n\n\n");
    l++;

}
fseek(aten, 0, SEEK_END);
if(ftell(aten)<=0){
    printf("\n\n");
    printf("---- NAO HA ATENDIMENTOS ----\n\n");
    printf("\n\n");
}
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
system("cls");
fclose(aten);

}

//MOSTRANDO ATENDIMENTOS PELO MENU AREA//
void listaratarea(){
        int l=1,d;
        char area[20];

    printf("\n...........::::::: ATENDIMENTO(S) REALIZADO(S) POR AREA :::::::................");
    printf("\n\n");
    ATENDIMENTO at;
    FILE *aten;
    aten = fopen("atendimento.txt","r+b");
    printf("DIGITE A AREA: ");
    scanf(" %[^\n]s",area);
    printf("\n\n");
    while(fread(&at, sizeof(ATENDIMENTO), 1, aten) == 1){
    if(strcmp(area,at.area)==0){
    printf("%dº ATENDIMENTO REALIZADO\n\n",l);
    printf("- CÓDIGO DO ATENDIMENTO: %d",at.codaten);
    printf("\n\n");
    printf("- CÓDIGO DO AGENDAMENTO: %d",at.codagen);
    printf("\n\n");
    printf("- DATA DO AGENDAMENTO: %d/%d/%d",at.diaagen,at.mesagen,at.anoagen);
    printf("\n\n");
    printf("- NOME DO ALUNO: %s",at.nomealuno);
    printf("\n\n");
    printf("- MATRICULA DO ALUNO: %d",at.codaluno);
    printf("\n\n");
    printf("- NOME DO PACIENTE: %s",at.nomepaciente);
    printf("\n\n");
    printf("- CÓDIGO DO PACIENTE: %d",at.codpaciente);
    printf("\n\n");
    printf("- DATA DO ATENDIMENTO: %d/%d/%d",at.dia,at.mes,at.ano);
    printf("\n\n");
    printf("- AREA DO ATENDIMENTO: %s",at.area);
    printf("\n\n");
    printf("- NOME DO SUPERVISOR: %s",at.nomesuper);
    printf("\n\n");
    printf("- CÓDIGO DO SUPERVISOR: %d",at.codsuper);
    printf("\n\n");
    printf("\n-------------------------------------------------------\n\n\n");
    l++;

}

}

printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
system("cls");
fclose(aten);

}
//LISTANDO ATENDIMENTOS PELO MENU ALUNO//
void listarataluno(){
        int l=1,d;
        int alu;

    printf("\n...........::::::: ATENDIMENTO(S) REALIZADO(S) POR ALUNO :::::::...............");
    printf("\n\n");
    ATENDIMENTO at;
    FILE *aten;
    aten = fopen("atendimento.txt","r+b");
    printf("DIGITE A MATRICULA: ");
    scanf("%d",&alu);
    printf("\n\n");
    while(fread(&at, sizeof(ATENDIMENTO), 1, aten) == 1){
    if(alu==at.codaluno){
    printf("%dº ATENDIMENTO REALIZADO\n\n",l);
    printf("- CÓDIGO DO ATENDIMENTO: %d",at.codaten);
    printf("\n\n");
    printf("- CÓDIGO DO AGENDAMENTO: %d",at.codagen);
    printf("\n\n");
    printf("- DATA DO AGENDAMENTO: %d/%d/%d",at.diaagen,at.mesagen,at.anoagen);
    printf("\n\n");
    printf("- NOME DO ALUNO: %s",at.nomealuno);
    printf("\n\n");
    printf("- MATRICULA DO ALUNO: %d",at.codaluno);
    printf("\n\n");
    printf("- NOME DO PACIENTE: %s",at.nomepaciente);
    printf("\n\n");
    printf("- CÓDIGO DO PACIENTE: %d",at.codpaciente);
    printf("\n\n");
    printf("- DATA DO ATENDIMENTO: %d/%d/%d",at.dia,at.mes,at.ano);
    printf("\n\n");
    printf("- AREA DO ATENDIMENTO: %s",at.area);
    printf("\n\n");
    printf("- NOME DO SUPERVISOR: %s",at.nomesuper);
    printf("\n\n");
    printf("- CÓDIGO DO SUPERVISOR: %d",at.codsuper);
    printf("\n\n");
    printf("\n-------------------------------------------------------\n\n\n");
    l++;

}
}
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
system("cls");
fclose(aten);

}
//LISTANDO ATENDIMENTO PELO MENU PACIENTES//
void listaratpaciente(){
    int l=1,d;
    int pac;

    printf("\n...........::::::: ATENDIMENTO(S) REALIZADO(S) NO PACIENTE :::::::.............");
    printf("\n\n");
    ATENDIMENTO at;
    FILE *aten;
    aten = fopen("atendimento.txt","r+b");
    printf("DIGITE O CODIGO: ");
    scanf("%d",&pac);
    printf("\n\n");
    while(fread(&at, sizeof(ATENDIMENTO), 1, aten) == 1){
    if(pac==at.codpaciente){
    printf("%dº ATENDIMENTO REALIZADO\n\n",l);
    printf("- CÓDIGO DO ATENDIMENTO: %d",at.codaten);
    printf("\n\n");
    printf("- CÓDIGO DO AGENDAMENTO: %d",at.codagen);
    printf("\n\n");
    printf("- DATA DO AGENDAMENTO: %d/%d/%d",at.diaagen,at.mesagen,at.anoagen);
    printf("\n\n");
    printf("- NOME DO ALUNO: %s",at.nomealuno);
    printf("\n\n");
    printf("- MATRICULA DO ALUNO: %d",at.codaluno);
    printf("\n\n");
    printf("- NOME DO PACIENTE: %s",at.nomepaciente);
    printf("\n\n");
    printf("- CÓDIGO DO PACIENTE: %d",at.codpaciente);
    printf("\n\n");
    printf("- DATA DO ATENDIMENTO: %d/%d/%d",at.dia,at.mes,at.ano);
    printf("\n\n");
    printf("- AREA DO ATENDIMENTO: %s",at.area);
    printf("\n\n");
    printf("- NOME DO SUPERVISOR: %s",at.nomesuper);
    printf("\n\n");
    printf("- CÓDIGO DO SUPERVISOR: %d",at.codsuper);
    printf("\n\n");
    printf("\n-------------------------------------------------------\n\n\n");
    l++;

}

}


printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
system("cls");
fclose(aten);


}


//REMOVENDO ATENDIMENTOS//
void removeratendimento(){
    int a;
    ATENDIMENTO at;
    int codigo,i;
    FILE *arq=fopen("atendimento.txt","r+b");
    FILE *arq1=fopen("auxiliar5.txt","a+b");
    printf("===============================================================================\n========================= REMOVENDO ATENDIMENTO ===============================\n===============================================================================\n");
    printf("\n\nDIGITE O CÓDIGO DO ATENDIMENTO:");
    scanf("%d",&codigo);
    rewind(arq);
    while(fread(&at,sizeof(ATENDIMENTO),1,arq)==1){
        if(codigo!=at.codaten){
            fwrite(&at,sizeof(ATENDIMENTO),1,arq1);
        }
    }
printf("\n\nATENDIMENTO REMOVIDO COM SUCESSO!!!\n\n\n");
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
fclose(arq1);
fclose(arq);
system("del atendimento.txt");
system("ren auxiliar5.txt atendimento.txt");

}
//CADASTRANDO ALUNO//
void cadastroaluno(){
    ALUNO a;
    int aux;
    FILE *alun;
    alun = fopen("aluno.txt","a+b");
    do{
            printf("===============================================================================\n========================= CADASTRANDO NOVO ALUNO ==============================\n===============================================================================\n");
            printf("\n\n");
            printf("- DIGITE O NOME DO ALUNO:");
            scanf (" %[^\n]s", a.nome);
            printf("\n");
            printf("- DIGITE O CPF DO ALUNO:");
            scanf(" %[^\n]s",a.cpf);
            printf("\n");
            printf("- DIGITE O CURSO ALUNO:");
            scanf (" %[^\n]s", a.curso);
            printf("\n");
            printf("- DIGITE A MATRICULA DO ALUNO:");
            aqui2:
            scanf("%d",&a.mat);
            aux = encontraraluno(a.mat);
            if(aux==1){
                printf("\n*** ALUNO JA CADASTRADO, TENTE OUTRA MATRICULA: ");
                goto aqui2;
            }
            printf("\n\n");
            printf("- ALUNO CADASTRADO COM SUCESSO!!!\n\n\n");
            printf("- DESEJA CADASTRAR OUTRO ALUNO SIM/NAO");
            printf("\n\n");
            fwrite(&a, sizeof(ALUNO),1,alun);
            printf("\n");
            scanf (" %[^\n]s",a.SN);
            system("cls");
    }
    while((a.SN[0]=='S')&&(a.SN[1]=='I')&&(a.SN[2]=='M')||(a.SN[0]=='s')&&(a.SN[1]=='i')&&(a.SN[2]=='m'));
fclose(alun);
}
//LISTANDO ALUNO//
void listaraluno(){
     int j=1,d;
    printf("\n..................::::::: ALUNO(S) CADASTRADO(S) :::::::.......................");
    printf("\n\n");
    ALUNO a;
    FILE *alun;
    alun = fopen("aluno.txt","r+b");
    while(fread(&a, sizeof(ALUNO), 1, alun) == 1){
    printf("%dº ALUNO CADASTRADO\n\n",j);
    printf("- NOME DO ALUNO: %s",a.nome);
    printf("\n\n");
    printf("- CPF DO ALUNO: %s",a.cpf);
    printf("\n\n");
    printf("- CURSO DO ALUNO: %s",a.curso);
    printf("\n\n");
    printf("- MATRICULA DO ALUNO: %d",a.mat);
    printf("\n\n-------------------------------------------------------\n\n");
    j++;

}
fseek(alun, 0, SEEK_END);
if(ftell(alun)<=0){
    printf("\n\n");
    printf("*** NAO HA ALUNOS CADASTRADOS ***\n\n");
    printf("\n\n");
}
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
system("cls");
if(alun == 0){
    printf("\n\n");
    printf("*** AINDA NAO HA ALUNOS CADASTRADOS ***\n\n");
    printf("\n\n");
}
fclose(alun);
}
//REMOVENDO ALUNO//
void removeraluno(){
    ALUNO a;
    int matricula,b;
    FILE *arquivo=fopen("aluno.txt","r+b");
    FILE *arquivo1=fopen("auxiliar2.txt","a+b");
    printf("===============================================================================\n============================ REMOVENDO ALUNO ==================================\n===============================================================================\n");
    printf("\n\n- DIGITE A MATRICULA DO ALUNO:");
    scanf("%d",&matricula);
    rewind(arquivo);
    while(fread(&a,sizeof(ALUNO),1,arquivo)==1){
        if(matricula!=a.mat){
            fwrite(&a,sizeof(ALUNO),1,arquivo1);
        }
    }
printf("\n\nALUNO REMOVIDO COM SUCESSO!!!\n\n\n");
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
fclose(arquivo1);
fclose(arquivo);
system("del aluno.txt");
system("ren auxiliar2.txt aluno.txt");

}
//EDITANDO ALUNO//
editaraluno(){
    ALUNO a;
    int mat,i;
    FILE *arq=fopen("aluno.txt","r+b");
    FILE *arq1=fopen("auxiliar2.txt","a+b");
    printf("===============================================================================\n============================ EDITANDO ALUNO ===================================\n===============================================================================\n");
    printf("\n\nDIGITE A MATRICULA DO ALUNO:");
    scanf("%d",&mat);
    while(fread(&a,sizeof(ALUNO),1,arq)==1){
        if(mat == a.mat){
            printf("\n\n========================== NOVOS DADOS DO ALUNO ===============================");
            printf("\n\n");
            printf("DIGITE O NOME:");
            scanf (" %[^\n]s", a.nome);
            printf("\n");
            printf("DIGITE O CPF:");
            scanf(" %[^\n]s",a.cpf);
            printf("\n");
            printf("DIGITE O CURSO:");
            scanf (" %[^\n]s", a.curso);
            printf("\n");
            printf("DIGITE A MATRICULA:");
            scanf("%d",&a.mat);
            printf("\n");
            printf("\nALUNO EDITADO COM SUCESSO!!!\n\n\n");
            printf("PARA VOLTAR TECLE ENTER\n\n");
            system("pause>>NULL");;
            fwrite(&a, sizeof(ALUNO),1,arq1);
            printf("\n");
            system("cls");

    }
     else
        {

    fwrite(&a, sizeof(ALUNO), 1,  arq1);
        }

        }

fclose(arq1);
fclose(arq);
system("del aluno.txt");
system("ren auxiliar2.txt aluno.txt");
}
//ENCONTRANDO ALUNO REPETIDO
int encontraraluno(int matricula){
    ALUNO a;
     FILE *arq=fopen("aluno.txt","r+b");
     while(fread(&a,sizeof(ALUNO),1,arq)){
        if(matricula==a.mat)
        {
            fclose(arq);
            return 1;
        }
     }
     fclose(arq);
     return 0;
}
//VERIFICANDO SE O ALUNO REALMENTE TA CADASTRADO//
int versealucad(int matricula, char nome[30]){
    ALUNO a;
     FILE *arq=fopen("aluno.txt","r+b");
     while(fread(&a,sizeof(ALUNO),1,arq)){
        if((matricula==a.mat)&&strcmp(nome,a.nome)==0)
        {
            fclose(arq);
            return 1;
        }
     }
     fclose(arq);
     return 0;
}
// VERIFICANDO SE O PACIENTE REALMENTE TA CADASTRADO//
int versepaccad(int codigo, char nome[30]){
    PACIENTE p;
     FILE *arq=fopen("paciente.txt","r+b");
     while(fread(&p,sizeof(PACIENTE),1,arq)){
        if((codigo==p.codigo)&&strcmp(nome,p.nome)==0)
        {
            fclose(arq);
            return 1;
        }
     }
     fclose(arq);
     return 0;
}

// VERIFICANDO SE O SUPERVISOR REALMENTE TA CADASTRADO//
int versesupcad(int codigo, char nome[30]){
    SUPERVISOR s;
     FILE *arq=fopen("supervisor.txt","r+b");
     while(fread(&s,sizeof(SUPERVISOR),1,arq)){
        if((codigo==s.codigo)&&strcmp(nome,s.nome)==0)
        {
            fclose(arq);
            return 1;
        }
     }
     fclose(arq);
     return 0;
}
//CADASTRANDO PACIENTES//
void cadastropaciente(){
    PACIENTE p;
    int aux;
    FILE *paci;
    paci = fopen("paciente.txt","a+b");
    do{
            printf("===============================================================================\n======================= CADASTRANDO NOVO PACIENTE =============================\n===============================================================================\n");
            printf("\n\n");
            printf("- DIGITE O NOME DO PACIENTE:");
            scanf (" %[^\n]s", p.nome);
            printf("\n");
            printf("- DIGITE O CODIGO DO PACIENTE:");
            aqui3:
            scanf("%d",&p.codigo);
            aux = encontrarpaciente(p.codigo);
            if(aux==1){
            printf("\n*** PACIENTE JA CADASTRADO, TENTE OUTRO CODIGO: ");
            goto aqui3;
            }
            printf("\n");
            printf("- DIGITE A DATA DE NASCIMENTO DO PACIENTE:");
            scanf("%d%d%d",&p.dia,&p.mes,&p.ano);
            printf("\n");
            printf("- DIGITE O CPF DO PACIENTE:");
            scanf(" %[^\n]s",p.cpf);
            printf("\n\n");
            printf("- ENDERECO DO PACIENTE\n");
            printf("\n");
            printf("- DIGITE A RUA:");
            scanf (" %[^\n]s", p.rua);
            printf("- DIGITE O NUMERO:");
            scanf("%d",&p.numcasa);
            printf("- DIGITE O BAIRRO:");
            scanf (" %[^\n]s", p.bairro);
            printf("- DIGITE A CIDADE:");
            scanf (" %[^\n]s", p.cidade);
            printf("- DIGITE O ESTADO:");
            scanf (" %[^\n]s", p.estado);
            printf("\n\n");
            printf("PACIENTE CADASTRADO COM SUCESSO!!!\n\n\n");
            printf("- DESEJA CADASTRAR OUTRO PACIENTE SIM/NAO");
            fwrite(&p, sizeof(PACIENTE),1,paci);
            printf("\n\n");
            scanf (" %[^\n]s",p.SN);
            system("cls");
    }
    while((p.SN[0]=='S')&&(p.SN[1]=='I')&&(p.SN[2]=='M')||(p.SN[0]=='s')&&(p.SN[1]=='i')&&(p.SN[2]=='m'));
    fclose(paci);
}
//LISTANDO PACIENTES//
listarpaciente(){
    int h=1,f;
    printf("\n.................::::::: PACIENTE(S) CADASTRADO(S) :::::::.....................");
    printf("\n\n");
    PACIENTE p;
    FILE *paci;
    paci = fopen("paciente.txt","r+b");
    while(fread(&p, sizeof(PACIENTE), 1, paci) == 1){
    printf("%dº PACIENTE CADASTRADO\n\n",h);
    printf("- NOME DO PACIENTE: %s",p.nome);
    printf("\n\n");
    printf("- CODIGO DO PACIENTE: %d",p.codigo);
    printf("\n\n");
    printf("- DATA DE NASCIMENTO DO PACIENTE: %d/%d/%d",p.dia,p.mes,p.ano);
    printf("\n\n");
    printf("- CPF DO PACIENTE: %s",p.cpf);
    printf("\n\n");
    printf("- ENDEREÇO DO PACIENTE: \nRUA: %s \nNUMERO: %d \nBAIRRO: %s \nCIDADE: %s \nESTADO: %s",p.rua,p.numcasa,p.bairro,p.cidade,p.estado);
    printf("\n\n-------------------------------------------------------\n\n");
    h++;
}
fseek(paci, 0, SEEK_END);
if(ftell(paci)<=0){
    printf("\n\n");
    printf("*** NAO HA PACIENTES CADASTRADOS ***\n\n");
    printf("\n\n");
}
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
system("cls");
fclose(paci);
}
//REMOVENDO PACIENTE//
void removerpaciente(){
    PACIENTE p;
    int codigo;
    FILE *arq=fopen("paciente.txt","r+b");
    FILE *arq1=fopen("auxiliar3.txt","a+b");
    printf("===============================================================================\n=========================== REMOVENDO PACIENTE ================================\n===============================================================================\n");
    printf("\n\nDIGITE O CODIGO DO PACIENTE:");
    scanf("%d",&codigo);
    rewind(arq);
    while(fread(&p,sizeof(PACIENTE),1,arq)==1){
        if(codigo!=p.codigo){
            fwrite(&p,sizeof(PACIENTE),1,arq1);
        }
    }
printf("\n\nPACIENTE REMOVIDO COM SUCESSO!!!\n\n\n");
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
fclose(arq1);
fclose(arq);
system("del paciente.txt");
system("ren auxiliar3.txt paciente.txt");

}

editarpaciente(){
    PACIENTE p;
    int codigo,i;
    FILE *arq=fopen("paciente.txt","r+b");
    FILE *arq1=fopen("auxiliar3.txt","a+b");

    printf("===============================================================================\n=========================== EDITANDO PACIENTE =================================\n===============================================================================\n");
    printf("\n\nDIGITE O CODIGO DO PACIENTE:");
    scanf("%d",&codigo);
    while(fread(&p,sizeof(PACIENTE),1,arq)==1){
        if(codigo == p.codigo){
            printf("======================== NOVOS DADOS DO PACIENTE ==============================\n");
            printf("\n\n");
            printf("- DIGITE O NOME:");
            scanf (" %[^\n]s", p.nome);
            printf("\n");
            printf("- DIGITE O CODIGO:");
            scanf("%d",&p.codigo);
            printf("\n");
            printf("- DIGITE A DATA DE NASCIMENTO:");
            scanf("%d%d%d",&p.dia,&p.mes,&p.ano);
            printf("\n");
            printf("- DIGITE O CPF:");
            scanf(" %[^\n]s",p.cpf);
            printf("\n\n");
            printf("- NOVO ENDEREÇO DO PACIENTE\n");
            printf("\n");
            printf("- DIGITE A RUA:");
            scanf (" %[^\n]s", p.rua);
            printf("- DIGITE O NUMERO:");
            scanf("%d",&p.numcasa);
            printf("- DIGITE O BAIRRO:");
            scanf (" %[^\n]s", p.bairro);
            printf("- DIGITE A CIDADE:");
            scanf (" %[^\n]s", p.cidade);
            printf("- DIGITE O ESTADO:");
            scanf (" %[^\n]s", p.estado);
            printf("\n\n- PACIENTE ALTERADO COM SUCESSO!!!\n\n\n");
            printf("PARA VOLTAR TECLE ENTER\n\n");
            system("pause>>NULL");
            fwrite(&p, sizeof(PACIENTE),1,arq1);
            printf("\n");
            system("cls");

    }
     else
        {

            fwrite(&p, sizeof(PACIENTE), 1,arq1);
        }

        }

fclose(arq1);
fclose(arq);
system("del paciente.txt");
system("ren auxiliar3.txt paciente.txt");
}

//ENCONTRANDO PACIENTE REPETIDO//
int encontrarpaciente(int codigo){
    PACIENTE p;
     FILE *arq=fopen("paciente.txt","r+b");
     while(fread(&p,sizeof(PACIENTE),1,arq)){
        if(codigo==p.codigo)
        {
            fclose(arq);
            return 1;
        }
     }
     fclose(arq);
     return 0;
}


//CADASTRANDO SUPERVISORES//
void cadastrosupervisor(){
    SUPERVISOR s;
    int aux;
    FILE *supervi;
    supervi = fopen("supervisor.txt","a+b");
    do{     printf("===============================================================================\n====================== CADASTRANDO NOVO SUPERVISOR ============================\n===============================================================================\n");
            printf("\n\n");
            novocad:
            printf("- DIGITE O NOME DO SUPERVISOR:");
            scanf (" %[^\n]s", s.nome);
            printf("\n");
            printf("- DIGITE O CURSO DO SUPERVISOR:");
            scanf (" %[^\n]s", s.curso);
            printf("\n");
            printf("- DIGITE O CODIGO DO SUPERVISOR:");
            aqui:
            scanf("%d",&s.codigo);
            aux = encontrarsupervisor(s.codigo);
            if(aux==1){
                printf("\n*** SUPERVISOR JA CADASTRADO, TENTE OUTRO CODIGO: ");
                goto aqui;
            }
            printf("\n\n- SUPERVISOR CADASTRADO COM SUCESSO!!!");
            printf("\n\n\n");
            printf("- DESEJA CADASTRAR OUTRO SUPERVISOR SIM/NAO");
            fwrite(&s, sizeof(SUPERVISOR),1,supervi);
            printf("\n\n");
            scanf (" %[^\n]s",s.SN);
            system("cls");
    }
    while((s.SN[0]=='S')&&(s.SN[1]=='I')&&(s.SN[2]=='M')||(s.SN[0]=='s')&&(s.SN[1]=='i')&&(s.SN[2]=='m'));
    fclose(supervi);
}
//LISTANDO SUPERVISORES//
void listarsupervisor(){
    int i=1,d;
    printf("\n................::::::: SUPERVISOR(ES) CADASTRADO(S) :::::::...................");
    printf("\n\n");
    SUPERVISOR s;
    FILE *supervi;
    supervi = fopen("supervisor.txt","r+b");
    while(fread(&s, sizeof(SUPERVISOR), 1, supervi) == 1){
    printf("%dº SUPERVISOR CADASTRADO\n\n",i);
    printf("- NOME DO SUPERVISOR: %s",s.nome);
    printf("\n\n");
    printf("- CURSO DO SUPERVISOR: %s",s.curso);
    printf("\n\n");
    printf("- CODIGO DO SUPERVISOR: %d",s.codigo);
    printf("\n\n-------------------------------------------------------\n\n");
    i++;

}
fseek(supervi, 0, SEEK_END);
if(ftell(supervi)<=0){
    printf("\n\n");
    printf("*** NAO HA SUPERVISORES CADASTRADOS ***\n\n");
    printf("\n\n");
}

printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
system("cls");
fclose(supervi);
}
//REMOVENDO SUPERVISOR//
void removersupervisor(){
    int a;
    SUPERVISOR s;
    int codigo,i;
    FILE *arq=fopen("supervisor.txt","r+b");
    FILE *arq1=fopen("auxiliar.txt","a+b");
    printf("===============================================================================\n========================== REMOVENDO SUPERVISOR ===============================\n===============================================================================\n");
    printf("\n\nDIGITE O CODIGO DO SUPERVISOR:");
    scanf("%d",&codigo);
    rewind(arq);
    while(fread(&s,sizeof(SUPERVISOR),1,arq)==1){
        if(codigo!=s.codigo){
            fwrite(&s,sizeof(SUPERVISOR),1,arq1);
        }
    }
printf("\n\nSUPERVISOR REMOVIDO COM SUCESSO!!!\n\n\n");
printf("PARA VOLTAR TECLE ENTER\n\n");
system("pause>>NULL");
fclose(arq1);
fclose(arq);
system("del supervisor.txt");
system("ren auxiliar.txt supervisor.txt");
system("cls");

}

   //ALTERANDO SUPERVISORES//
void editarsupervisor(){
    SUPERVISOR s;
    int codigo,i,a;
    FILE *arq=fopen("supervisor.txt","r+b");
    FILE *arq1=fopen("auxiliar.txt","a+b");
    printf("===============================================================================\n========================== EDITANDO SUPERVISOR ================================\n===============================================================================\n");
    printf("\n\nDIGITE O CODIGO DO SUPERVISOR:");
    printf("\n\n");
    scanf("%d",&codigo);
    while(fread(&s,sizeof(SUPERVISOR),1,arq)==1){
        if(codigo == s.codigo){
            printf("======================= NOVOS DADOS DO SUPERVISOR =============================");
            printf("\n\n");
            printf("- DIGITE O NOME:");
            scanf (" %[^\n]s", s.nome);
            printf("\n");
            printf("- DIGITE O CURSO:");
            scanf (" %[^\n]s", s.curso);
            printf("\n");
            printf("- DIGITE O CODIGO:");
            scanf("%d",&s.codigo);
            printf("\n\n");
            printf("- SUPERVISOR ALTERADO COM SUCESSO!!!");
            printf("\n\n\n");
            printf("PARA VOLTAR TECLE ENTER\n\n");
            system("pause>>NULL");
            fwrite(&s, sizeof(SUPERVISOR),1,arq1);
            printf("\n");
            system("cls");
    }
     else
        {
    fwrite(&s, sizeof(SUPERVISOR), 1,  arq1);
        }
        }
fclose(arq1);
fclose(arq);
system("del supervisor.txt");
system("ren auxiliar.txt supervisor.txt");
}

//ENCONTRANDO SUPERVISOR REPETIDO//
int encontrarsupervisor(int codigo){
    SUPERVISOR s;
     FILE *arq=fopen("supervisor.txt","r+b");
     while(fread(&s,sizeof(SUPERVISOR),1,arq)){
        if(codigo==s.codigo)
        {
            fclose(arq);
            return 1;
        }
     }
     fclose(arq);
     return 0;
}




    main(){
    setlocale(LC_ALL, "Portuguese");
    system("color 1f");
    int x,a,b,c,d,e,f,t,h;

            printf("\n\n");
            printf("\n\n\n\n\n\n\n\n\n                             BEM VINDO A CLINICA UEPB!!!\n\n\n\n\n\n\n\n");
            printf("\                        INICIALIZANDO O PROGRAMA, AGUARDE!!!\n\n");

        for (t = 0; t < 1; t++) {
        printf("                                 ", t);
        for (h = 0; h < 17; h++) {
            printf("#");
            Sleep(400);
        }
        for ( h = 0; h < 60; h++) {
            printf(" "); // apaga a linha anterior
        }
        system("cls");
        }


    do{

        menu();
        printf("\n");
        printf("             OPÇÃO DIGITADA:");
        scanf("%d",&x);
        //MENU ALUNO//
        system("cls");
        if(x==1)
        {
        menualuno();
        printf("\n");
        printf("             OPÇÃO DIGITADA:");
        scanf("%d",&a);
        system("cls");
        if(a==1)
        {
            cadastroaluno();
            system("cls");
        }
        if(a==3)
        {
            removeraluno();
            system("cls");
        }
        if(a==4)
        {
         editaraluno();

        }
        if(a==2)
        {
            listaraluno();
        }
        }
        //MENU PACIENTE//
        if(x==2)
        {
        menupaciente();
        printf("\n");
        printf("             OPÇÃO DIGITADA:");
        scanf("%d",&b);
        system("cls");
        if(b==1)
        {
            cadastropaciente();
            system("cls");
        }
        if(b==3)
        {
            removerpaciente();
            system("cls");
        }
        if(b==4)
        {
            editarpaciente();
            system("cls");
        }
        if(b==2)
        {
            listarpaciente();
        }
        }
        //MENU SUPERVISOR//
        if(x==3)
        {
        menusupervirsor();
        printf("\n");
        printf("             OPÇÃO DIGITADA:");
        scanf("%d",&c);
        system("cls");
        if(c==1)
        {
            cadastrosupervisor();
            system("cls");
        }
        if(c==3)
        {
            removersupervisor();
        }
        if(c==4)
        {
            editarsupervisor();
            system("cls");
        }
        if(c==2)
        {
            listarsupervisor();
        }
        }
        //MENU AGENDAMENTO//
        if(x==4)
        {
        menuagendamento();
        printf("\n");
        printf("             OPÇÃO DIGITADA:");
        scanf("%d",&d);
        system("cls");
        if(d==1)
        {
            fazeragendamento();
            system("cls");
        }
        if(d==3)
        {
            removeragendamento();
            system("cls");
        }
        if(d==2)
        {
            listaragendamento();
        }
        }
        //MENU ATENDIMENTO//
        if(x==5)
        {
        aqui10:
        menuatendimento();
        printf("\n");
        printf("             OPÇÃO DIGITADA:");
        scanf("%d",&e);
        system("cls");
        if(e==1)
        {
            fazeratendimento();
            system("cls");
        }
        if(e==3){
            removeratendimento();
            system("cls");
        }
        if(e==2)
        {
             listarporarea();
        printf("             OPÇÃO DIGITADA:");
        scanf("%d",&f);
        system("cls");
        if(f==1){
            listaratendimento();
        }
        if(f==2){
            listaratarea();
        }
        if(f==3){
            listarataluno();
            }
        if(f==4){
            listaratpaciente();
        }
        if(f==0){
            goto aqui10;
        }
        }
        }
        if(x==0)
        {
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        for (t = 0; t < 3; t++) {
        printf("                              FINALIZANDO O PROGRAMA");
        for (h = 0; h < 3; h++) {
            printf(".");
            Sleep(500);
        }
        printf("\r");
        for ( h = 0; h < 60; h++) {
            printf(" "); // apaga a linha anterior
        }
        printf("\r");
        }
        printf("                              PROGRAMA FINALIZADO!!!\n");
        printf("\n                                   TECLE ENTER\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        }
    }
    while(x!=0);
}
