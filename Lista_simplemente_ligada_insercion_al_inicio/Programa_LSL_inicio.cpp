#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

struct nodo {
  int edad;
  char nombre[30];
  struct nodo *siguiente;
};
typedef nodo *NODO;

void inicializar(NODO &LISTA);
void inserta_inicio(char n[],int x, NODO &LISTA);
void elimina_inicio(NODO &LISTA);
void mostrar(NODO LISTA);
void buscarElementoporedad(int x,NODO LISTA);
void buscarElementopornombre(char n[],NODO LISTA);
void igualar_cadenas(char cadena1[],char cadena2[],int tamanio);

int main() {
  NODO LISTA;
  int opc, x;
  char n[30];
  //Se inicializa la LISTA primeramente
  inicializar(LISTA);
  do{
    cout << "MENU DE LA LISTA"<<endl;
    cout << "1. INSERTAR AL INICIO DE LA LISTA"<<endl;
    cout << "2. ELIMINAR AL INICIO DE LA LISTA"<<endl;
    cout << "3. MOSTRAR LA LISTA"<<endl;
    cout << "4. BUSCAR ELEMENTO POR EDAD"<<endl;
    cout << "5. BUSCAR ELEMENTO POR NOMBRE"<<endl;
    cout << "0. SALIR"<<endl;
    cout << "ELIGE UNA OPCION: ";
    cin>>opc;
    switch(opc)
    {
      case 1:
			  cout << "Ingrese la edad: "<<endl;
              cin>>x;
              cout << "Ingrese el nombre: "<<endl;
              cin>>n;
              inserta_inicio(n,x, LISTA);
          break;
      case 2: elimina_inicio(LISTA);
          break;
      case 3: mostrar(LISTA);
          break;
      case 4:
			cout << "Ingrese la edad: "<<endl;
              cin>>x;
			  buscarElementoporedad(x,LISTA);
          break;
          case 5:
			cout << "Ingrese el nombre: "<<endl;
              cin>>n;
     buscarElementopornombre(n,LISTA);
			  break;
    }
  }while (opc!=0);
}


void inicializar(NODO &LISTA)
{
  LISTA=NULL;
}

int vacia(NODO LISTA)
{
  if (LISTA==NULL)
    return 1;

  return 0;
}

void inserta_inicio(char n[],int x, NODO &LISTA)
{
  NODO N;
  if (vacia(LISTA))
  {
    LISTA=new nodo;
    LISTA->edad=x;
    igualar_cadenas(LISTA->nombre,n,30);
    LISTA->siguiente=NULL;
  }
  else
  {
    N=new nodo;
    N->edad=x;
    igualar_cadenas(N->nombre,n,30);
    N->siguiente=LISTA;
    LISTA=N;
  }
}

void elimina_inicio(NODO &LISTA)
{
  NODO E;
  if (vacia(LISTA))
  {
    cout<<"La LISTA se encuentra VACIA ..."<<endl;
  }
  else
  {
    E=LISTA;
    LISTA=LISTA->siguiente;
    delete E;
  }
}
void mostrar(NODO LISTA)
{
  NODO A;
  if (vacia(LISTA))
  {
    cout<<"La LISTA se encuentra VACIA ..."<<endl;
  }
  else
  {
    A=LISTA;
    cout<<"DATO  ----  ESPACIO ---- SIGUIENTE"<<endl;
    while (A!=NULL)
    {
      cout<<A->edad<<" "<<A->nombre<<" ---- "<<A<<"  ----  "<<A->siguiente<<endl;
      A=A->siguiente;
    }
  }
}

void buscarElementoporedad(int x,NODO LISTA)
{
    NODO q = LISTA;
    int i = 1, band = 0;

    while(q!=NULL)
    {
        if(q->edad==x)
        {
            cout<<endl<<"Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->siguiente;
        i++;
    }

    if(band==0)
        cout<<endl<<"Numero no encontrado..!"<< endl;
}

void buscarElementopornombre(char n[],NODO LISTA)
{
    NODO q = LISTA;
    int i = 1, band = 0;

    while(q!=NULL)
    {
        if(strcmp(q->nombre,n)==0)
        {
            cout<<endl<<"Encontrada en posicion "<< i <<endl;
            band = 1;
        }
        q = q->siguiente;
        i++;
    }

    if(band==0)
        cout<<endl<<"Numero no encontrado..!"<< endl;
}

void igualar_cadenas(char cadena1[],char cadena2[],int tamanio)
{
	for(int i=0;i<tamanio;i++){
    	cadena1[i]=cadena2[i];
	}
}
