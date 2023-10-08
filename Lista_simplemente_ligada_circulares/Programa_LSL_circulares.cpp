#include <iostream>
#include <stdlib.h>
/////////////////CARLO PINEDO SUAREZ/////////////////////////
/////////////////////19310163///////////////////////////////
using namespace std;

struct nodo{
  int dato;
  struct nodo *siguiente;
};

typedef nodo *NODO;

void inicializar(NODO &LISTA) {
	LISTA = NULL;
}

int vacia(NODO LISTA) {
	if (LISTA==NULL)
		return 1;
	return 0;
}

void insertar_inicio(int x, NODO &LISTA)
{
	NODO N, R,Q; //Se declaran las variables N y R, de tipo NODO (apuntador)
	if (vacia(LISTA)) //Determina si la LISTA esta vacia, y crea el primer elemento de la lista
	{
		LISTA = new nodo;
		LISTA->dato = x;
		LISTA->siguiente = LISTA; //Este es el unico cambio que se presenta en esta parte del caso 1.
	}
	else{//en caso contrario crea un nuevo elemento y lo inserta al inicio de la LISTA Circular
	/////////////////////////////////////////////////////
	Q = LISTA;
	while(Q->siguiente!=LISTA)
    {
        if(Q->dato==x)
        {
            break;
        }
        Q = Q->siguiente;
    }
if(Q->dato!=x)
        {
	////////////////////////////////////////////////
    R = LISTA;
		while (R->siguiente!=LISTA)
			R=R->siguiente;

		N = new nodo;
		N->dato = x;
		R->siguiente = N;
		N->siguiente = LISTA;
		LISTA = N;
	}
	else{ cout<<endl<<"El numero que ingreso ya existe en la lista "<<endl;}
	}
	}



void elimina_inicio( NODO &LISTA)
{
	NODO E, R; //Se declaran las variables N y R, de tipo NODO (apuntador)
	if (vacia(LISTA)) //Determina si la LISTA esta vacia, no se puede eliminar elementos
	{
		cout<<"La LISTA se encuentra VACIA, no puedes eliminar"<<endl;
	}
	else //en caso contrario elimina el elemento que se encuentra al inicio de la LISTA
	{
if (LISTA->siguiente==LISTA) //Si solo es un solo elemento en la LISTA
		{
			delete LISTA;
			LISTA=NULL;
		}
		else
		{
			R=LISTA;
			while (R->siguiente!=LISTA)
				R=R->siguiente;
			E = LISTA;
			LISTA = LISTA->siguiente;
			R->siguiente = LISTA;
			delete E;
		}
	}
}

void mostrar(NODO LISTA)
{
	NODO A; //Se declara la variable N, de tipo NODO (apuntador)
	if (vacia(LISTA)) //Determina si la LISTA esta vacia
	{
		cout<<"La Lista se encuentra VACIA..."<<endl;
	}
	else //en caso contrario se realiza el recorrido por toda la LISTA y se utiliza la variable A
	{
		A=LISTA;
		cout<<"DATO      --   ESPACIO        --    SIGUIENTE "<<endl;
		while (A->siguiente!=LISTA)
		{
			cout<<A->dato<<"   --- "<< A<<"   --- "<< A->siguiente<<"    --- "<<endl;
			A=A->siguiente;
		}
    cout<<A->dato<<"   --- "<< A<<"   --- "<< A->siguiente;
	}
}


int main() {
  NODO LISTA;
  int opc, x;
  //Se inicializa la LISTA primeramente
  inicializar(LISTA);
  do{
    cout <<endl;
    cout << "MENU DE LA LISTA"<<endl;
    cout << "1. INSERTAR AL INICIO DE LA LISTA"<<endl;
    cout << "2. ELIMINAR AL INICIO DE LA LISTA"<<endl;
    cout << "3. MOSTRAR LA LISTA"<<endl;
    cout << "0. SALIR"<<endl;
    cout << "ELIGE UNA OPCION: ";
    cin>>opc;
    switch(opc)
    {
      case 1: cout << "Ingresa el valor a insertar: ";
              cin>>x;
              insertar_inicio(x, LISTA);
          break;
      case 2: elimina_inicio(LISTA);
          break;
      case 3: mostrar(LISTA);
          break;
    }
  }while (opc!=0);
}


    
