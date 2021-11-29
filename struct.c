#include <stdio.h>
#include <string.h>

//Declaraciones Structs y Funciones
struct info{
	char nombre[25];
	char apPaterno[25];
	char apMaterno[25];
	char direccion[25];
};

struct academico{
	char numeroEmpleado[13];
	struct info datos_profesor[10];
}profesor[10];

struct alumnado{
	char numeroCuenta[13];
	char promedio[5];
	struct info datos_estudiante[10]; //
}estudiante[10];

int menu(int num);
int subMenu(int num);
int op=0;
int num=0;
int i=0;

//Main Function
int main(void){
	
	printf("¿Cuántos Registros Deseas?: ");
	scanf("%d", &num);

	menu(num);
	
	return 0;
}



//Implementación de Funciones
int menu(int num){
	num==0?printf("Registro Completo\n"):
	subMenu(num);
	return 0;
}

int subMenu(int num){
	error: 
	puts("¿Qué deseas capturar?");
	puts("1.-Profesorado");
	puts("2.-Alumnado");
	fflush(stdin);
	scanf("%d", &op);

	if(op == 1){
		getchar();
		printf("\n--------------------------------------\n");
		for (i=0; i<num; i++){
			printf("\nDame número empleado:");
			fflush(stdin);
			fgets(profesor[i].numeroEmpleado,13,stdin);
			printf("Dame nombre: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor[i].nombre, 25, stdin);
			printf("Dame apellido paterno: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor[i].apPaterno, 25, stdin);
			printf("Dame apellido materno: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor[i].apMaterno, 25, stdin);
			//printf("\n\tID: %s \n\tNombre:%s %s %s", profesor[i].numeroEmpleado, profesor[i].datos_profesor[i].nombre, profesor[i].datos_profesor[i].apPaterno, profesor[i].datos_profesor[i].apMaterno);   
			fflush(stdin);
		}
		printf("\n--------------------------------------\n");
	}else if(op == 2){
		getchar();
		printf("Dame Número Cuenta: ");
		fflush(stdin);
		fgets(estudiante[i].numeroCuenta,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(estudiante[i].datos_estudiante[i].nombre, 25, stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(estudiante[i].datos_estudiante[i].apPaterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(estudiante[i].datos_estudiante[i].apMaterno, 25, stdin);
		printf("\n\tID: %s \n\tNombre:%s %s %s", estudiante[i].numeroCuenta, estudiante[i].datos_estudiante[i].nombre, estudiante[i].datos_estudiante[i].apPaterno, estudiante[i].datos_estudiante[i].apMaterno);   
		fflush(stdin);

	}else{
		printf("Dame una opción válida\n");
		goto error;
	
	}
	//menu(num-1);
	printf("\n--------------------------------------\n");
	printf("Imprimiendo Profesores\n");
	for (int i=0; i<num; i++){
		printf("\n\tID: %s \tNombre:%s \tApellido Paterno: %s \tApellido Materno: %s", profesor[i].numeroEmpleado, profesor[i].datos_profesor[i].nombre, profesor[i].datos_profesor[i].apPaterno, profesor[i].datos_profesor[i].apMaterno);   
	}
	printf("\n--------------------------------------\n");
	return 0;
}
