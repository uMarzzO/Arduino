#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int op;
float  vIn, vLed, iLed, R;
	
int main () {
	setlocale(LC_ALL, "Portuguese_Brazil");
		
	do{
		
	system("cls");
	
	vIn  = 0.0;
	vLed = 0.0;
	iLed = 0.0;
	R    = 0.0;
	
	printf("\n LED CALC Resistors v1.0 \n");
	printf("\n Autor: Bruno Marzano\n");
	printf("\n Ig: @umarzzo\n");
	
	printf("\n\n Digite o valor de VIn (V): ");
	scanf("%f", &vIn);
	
	printf(" Digite o valor de VLed (V): ");
	scanf("%f", &vLed);
	
	printf(" Digite o valor de ILed (mA): ");
	scanf("%f", &iLed);
	printf("\n");
	
	R = (vIn-vLed)/(iLed/1000);
	
	printf(" VIn : %.2f\n", vIn);
	printf(" VLed: %.2f\n", vLed);
	printf(" ILed: %.3f\n\n", iLed);
	printf(" Resistor: %.2f Ohms\n\n", R);
	
	printf(" Digite 1 (um) para realizar outra operação, e 0 (zero) para sair: ");
	scanf("%d", &op);
	
	}while (op == 1);
	
	return 0;
}
