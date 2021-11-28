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
	struct info datos_profesor;
}profesor;

struct alumnado{
	char numeroCuenta[13];
	char promedio[5];
	struct info datos_estudiante; //
}estudiante;

int menu(int num);
int subMenu(int num);
int op=0;
int num=0;


//Main Function
int main(void){
	
	printf("¿Cuántos Registros Deseas?");
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
		printf("Dame número empleado:");
		fflush(stdin);
		fgets(profesor.numeroEmpleado,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(profesor.datos_profesor.nombre, 25, stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(profesor.datos_profesor.apPaterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(profesor.datos_profesor.apMaterno, 25, stdin);
		printf("\n\tID: %s \n\tNombre:%s %s %s", profesor.numeroEmpleado, profesor.datos_profesor.nombre, profesor.datos_profesor.apPaterno, profesor.datos_profesor.apMaterno);   
		fflush(stdin);

	}else if(op == 2){
		getchar();
		printf("Dame Número Cuenta: ");
		fflush(stdin);
		fgets(estudiante.numeroCuenta,13,stdin);
		printf("Dame nombre: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.nombre, 25, stdin);
		printf("Dame apellido paterno: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.apPaterno, 25, stdin);
		printf("Dame apellido materno: ");
		fflush(stdin);
		fgets(estudiante.datos_estudiante.apMaterno, 25, stdin);
		printf("\n\tID: %s \n\tNombre:%s %s %s", estudiante.numeroCuenta, estudiante.datos_estudiante.nombre, estudiante.datos_estudiante.apPaterno, estudiante.datos_estudiante.apMaterno);   
		fflush(stdin);

	}else{
		printf("Dame una opción válida\n");
		goto error;
	
	}
	menu(num-1);
	return 0;
}