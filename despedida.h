#ifndef despedida_h
#define despedida_h
#include <stdio.h>

void despedida(){
    int i;
	system("cls");
	Letrero();
	printf("\n     ======================================================================\n");
	printf("\t\t\t\t    Muchas Gracias\n");
    printf("\t\t\t\t          Por \n");
    printf("\t\t\t\t         Usar\n");
    printf("\n     ======================================================================\n");
    printf("\t\t\t                  el \n");
    printf("\t\t\t\t       software \n");
	printf("     ======================================================================\n");

	i = 0;
	putchar('\n');
	for (; i < 80; i++) {
		putchar('_');
	}
}

#endif