#include <stdio.h>

#include "letrero.h"
#include "instruccion.h"
#include "funcion.h"
#include "despedida.h"


void instruccion();
void Letrero();
void funcion();
void despedida();

int main(){
    int opc = 0;

    do{
        system("cls");
        Letrero();
        printf("\n\t\t\t\tOpciones\n");
        printf("\nPor favor lea primero las instrucciones para asber como se usa el programa\n");
        printf("\n\t\t\t\t[1]Instrucciones\n");
        printf("\n\t\t\t\t[2]Primer tipo de funcion\n");
        printf("\n\t\t\t\t[3]Salir\n");
        scanf("%d",&opc);
        switch (opc){
            case 1:
                instruccion();
                break;
            case 2:
                funcion();
                break;
            case 3:
                despedida();
                break;
            
            default:
                printf("\n\tEleccion no recconocida");
                break;
            }
        system("pause>nul");
    }
    while(opc != 2);
    return 0;
}
