#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <wchar.h>
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

struct cola {
	struct alum {
		int codigo;
		struct comp
		{
			char nombre[30];
			int edad;
		} companero;
 } alumno[10];
	int counter;
} c;

char resp;

void insertar();
void buscar();
void inicializa();
int vacia();
int llena();

int main ()
{
	int opc;
	setlocale (LC_ALL, "");
    system("cls");
    inicializa();
	while (resp != 'S' && resp != 's')
    {

        printf("\n----------------------------");
        printf("\nREGISTRO DE ALUMNOS");
        printf("\n  MENÚ DE OPCIONES");
        printf("\n----------------------------");
        printf("\n1. Insertar");
        printf("\n2. Buscar");
        printf("\n3. Salir");
        printf("\n\nSelecciona la opción deseada (1-3): ");
        scanf("%d", &opc);
        switch (opc)
        {
            case 1:
                system("cls");
                printf("\n----------------------------\n");
                printf("       INSERTAR NUMERO          \n");
                printf("----------------------------\n");
                insertar();
                printf("\n\nPresiona enter para continuar...\n");
                getchar();
            break;
            case 2:

                printf("\n----------------------------\n");
                printf("         BUSCAR ALUMNO           \n");
                printf("------------------------------\n");
                buscar();
                printf("\n\nPresiona enter para continuar...\n");
                getchar();
                getchar();
            break;
            case 3:
                printf("\n¿Deseas salir (S/N)? ");
                scanf (" %c", &resp);
            break;
        }
    }
return 0;
}
////////////////////////////////////////////////////////////////////////////////
void inicializa()
{
    c.counter = 1;
}

int llena(void)
{
    if (c.counter == 11)
    {
        return 1;
    }
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
void insertar()
{
	int i;
	int estado;
    estado = llena();

    if (estado == 1)
    {
        printf("Base de datos llena!\n");
        return;
    }
else
{
    	c.alumno[c.counter].codigo = c.counter;
		printf("\nCódigo del alumno: %d", c.alumno[c.counter].codigo);
		printf("\n");
		printf("--------------------------\n");
		printf("REGISTRO DEL ALUMNO\n");
		printf("--------------------------\n");
		printf("Nombre del alumno: ");
        getchar();
		scanf ("%40[^\n]s", c.alumno[c.counter].companero.nombre);
		getchar();
		printf("Edad: ");
		scanf ("%d", &c.alumno[c.counter].companero.edad);
		c.counter++;
}
	}
////////////////////////////////////////////////////////////////////////////////
void buscar()
{
	int encontrado, estado,opc,procede,num,contador=0;
	char name[30];
	estado = vacia();
	if (estado == 1)
	{
		printf("¡Catálogo vacío!\n");
		return;
	}
	printf("\nBuscar por nombre o por edad?");
    printf("\n1-Busqueda por nombre \n2-Busqueda por edad\n");
    scanf ("%d", &opc);

    if(opc==1)
    {
 printf("\n1-Ingresar nombre del alumno a buscar:\n");
    cin>>name;
    cout<<endl;
for (int i = 1; i < 11; ++i)
	{
		if (strcmp(c.alumno[i].companero.nombre, name) == 0)
		{
		printf("\n      Codigo de alumno: %d\n", i);
		printf("\n------------------");
		printf("\nAlumno: %s", c.alumno[i].companero.nombre);
		printf("\nEdad: %d",  c.alumno[i].companero.edad);
			procede = 1;
			contador++;
		}
    }
    if (procede != 1)
    {
        printf("¡No encontrado!\n");
        return;
    }
    cout<<endl<<endl<<"Numero de coincidencias: "<<contador;
    contador=0;
	}

	else if(opc==2)
	{
	printf("\n1-Ingresar la edad del alumno o alumnos a buscar:\n");
    cin>>num;
    cout<<endl;
	for (int i = 1; i < 11; ++i)
	{
		if (c.alumno[i].companero.edad == num)
		{
		printf("\n      Codigo de alumno: %d\n", i);
		printf("\n------------------");
		printf("\nAlumno: %s", c.alumno[i].companero.nombre);
		printf("\nEdad: %d",  c.alumno[i].companero.edad);
			procede = 1;
			contador++;
		}
    }
    if (procede != 1)
    {
        printf("¡No encontrado!\n");
        return;
    }
     cout<<endl<<endl<<"Numero de coincidencias: "<<contador;
    contador=0;
	}

	else
	{
		cout<<endl<<"Opcion invalida"<<endl;
	}


    }



////////////////////////////////////////////////////////////////////////////////
int vacia(void)
{
    if (c.counter == 1)
    {
        return 1;
    }
    return 0;
}
