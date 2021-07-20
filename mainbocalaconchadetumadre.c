#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	int i, menu, preglote, pregped; //enteros normales//
	int numlamp[10],numempl[10],stock[10],cantped[10],numclient[10]; //enteros vectores //
	float precio[10], com[10]; //flotantes vectores//
	
	for(i=0;i<10;i++){ //Inicialización de vectores//
		numlamp[i];
		precio[i];
		stock[i];
		numempl[i];
		com[i];
		cantped[i];
		numclient[i];
	}
	//TODO ESTO DEBE IR AL FINAL DEL CICLO WHILE//
	printf("Buen dia, digite algunas de las siguientes opciones:\n1.Menu de Administracion\n2.Menu de Pedidos\n0.Salir\n");
	scanf("%d",&menu); //Pregunta menu numero 1//
	if(menu > 2 || menu < 0){
		printf("Opcion incorrecta, intente nuevamente.");
		return 0;}
	if(menu == 0){printf("Hasta luego!"); return 0;}
	//TODO ESTO DEBE IR AL FINAL DEL CICLO WHILE//
	while(menu != 0){	
	
			switch(menu){ //Switch de todas las opciones//
			
				case 1: //Caso 1 del switch principal - LOTES 1 Y 2//
					printf("Digite la opcion a la cual desea acceder:\n1.Lote 1\n2.Lote 2\n3.Visualizar Lote 1\n4.Visualizar Lote 2\n");
					scanf("%d",&preglote);
					switch(preglote){
						case 1: //Caso 1 del switch de lotes - LOTE 1// 
							printf("Ingrese el numero de lampara: ");
							scanf("%d",&numlamp[i]);
							printf("Ingrese el precio de la lampara %d: ",numlamp[i]);
							scanf("%f",&precio[i]);
							printf("Ingrese el stock actual de la lampara %d: ",numlamp[i]);
							scanf("%d",&stock[i]);
							break;
						case 2: //Caso 2 del switch de lotes - LOTE 2//	
							printf("Ingrese el numero de empleado: ");
							scanf("%d",&numempl[i]);
							printf("Ingrese la cantidad de comisión que gana el empleado %d: ",numempl[i]);
							scanf("%f",&com[i]);
							break;
						case 3: //Caso 3 del switch de lotes - VISUALIZAR LOTE 1//
							printf("Ingrese el numero de lampara sobre el cual desea información: ");
							scanf("%d",&numlamp[i]);
							printf("El precio de la lampara %d es de %f$",numlamp[i],precio[i]);
							printf("El stock de la lampara %d es de %d unidades",numlamp[i],stock[i]);
							break;
						case 4: //Caso 4 del switch de lotes - VISUALIZAR LOTE 2//
							printf("Ingrese el numero del empleado: ");
							scanf("%d",&numempl[i]);
							printf("La comisión que gana el empleado %d es de %.2f por pedido.",numempl[i],com[i]);
							printf("La cantidad de pedidos que ha atendido el empleado %d hasta ahora es de: %d",numempl[i],cantped[i]);
							break;
					}
				break;	
    			//DIVISIÓN DE CASOS DEL SWITCH PRINCIPAL//
				case 2:
					printf("Digite la opcion a la cual desea acceder:\n1.Ingresar Pedido\n2.Visualizar Pedido");
					scanf("%d",&pregped);
					switch(pregped){
						case 1://Caso 1 del switch de pedidos - INGRESAR PEDIDO //
						printf("Ingrese el numero de empleado: ");
						scanf("%d",&numempl[i]);
						printf("Ingrese el numero de cliente: ");
						scanf("%d",&numclient[i]);
						printf("Ingrese la lampara que desea pedir el cliente: ");
						scanf("%d",&numlamp[i]);
					}
				
				break;	
			}
	}		
	return 0;
}
