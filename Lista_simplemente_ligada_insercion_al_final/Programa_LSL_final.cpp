#include <iostream>
#include <stdlib.h>
/////////////////CARLO PINEDO SUAREZ/////////////////////////
/////////////////////19310163///////////////////////////////
using namespace std;
struct nodo{
       int nro;        // en este caso es un numero entero
       struct nodo *sgte;
};

typedef struct nodo *Tlista;
void insertarInicio(Tlista &lista, int valor);
void insertarFinal(Tlista &lista, int valor);
int insertarAntesDespues();
void insertarElemento(Tlista &lista, int valor, int pos);
void buscar(Tlista lista, int valor);
void reportarLista(Tlista lista);

int main()
{
    Tlista lista = NULL;
    int opc=0;
    int _dato;  
    int pos;    

    do
    {
        cout << "MENU DE LA LISTA"<<endl;
    cout << "1. INSERTAR AL INICIO DE LA LISTA"<<endl;
    cout << "2. INSERTAR AL FINAL DE LA LISTA"<<endl;
    cout<<  "3. INSERTAR EN UNA POSICION"<<endl;
    cout << "4. MOSTRAR LA LISTA"<<endl;
    cout << "5. BUSCAR NUMERO EN LISTA"<<endl;
    cout << "6. SALIR"<<endl;

    cout<<"\n INGRESE OPCION: ";
        
		cin>> opc;

        switch(opc)
        {
            case 1:
			cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
            insertarInicio(lista, _dato);
            break;
			case 2:
			cout<< "\n NUMERO A INSERTAR: "; cin>> _dato;
            insertarFinal(lista, _dato );
            break;
			case 3:
			cout<< "\n NUMERO A INSERTAR: ";cin>> _dato;
            cout<< " Posicion : ";       cin>> pos;
        	insertarElemento(lista, _dato, pos);
            break;
   			case 4:
			cout << "\n\n MOSTRANDO LISTA\n\n";
    		reportarLista(lista);
            break;
			case 5:
			cout<<"\n Valor a buscar: "; cin>> _dato;
    		buscar(lista, _dato);
            break;
			}

        cout<<endl;
        system("pause");
		system("cls");

    }while(opc!=6);


   system("pause");
   return 0;
}

void insertarInicio(Tlista &lista, int valor)
{
	if (valor>=0){

    Tlista q;
    q = new(struct nodo);
    q->nro = valor;
    q->sgte = lista;
    lista  = q;

	}
	else
	{
	cout<<"\t El valor no es positivo, por lo tanto no se guardara           "<<endl;
	}
}

void insertarFinal(Tlista &lista, int valor)
{
	if (valor>=0){
    Tlista t, q = new(struct nodo);

    q->nro  = valor;
    q->sgte = NULL;

    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }

}
else{
	cout<<"\t El valor no es positivo, por lo tanto no se guardara           "<<endl;
}

}



int insertarAntesDespues()
{
    int _op, band;
    cout<<endl;
    cout<<"\t 1. Antes de la posicion           "<<endl;
    cout<<"\t 2. Despues de la posicion         "<<endl;

    cout<<"\n\t Opcion : "; cin>> _op;

    if(_op==1)
        band = -1;
    else
        band = 0;

    return band;
}

void insertarElemento(Tlista &lista, int valor, int pos)
{
    Tlista q, t;
    int i;
    q = new(struct nodo);
    q->nro = valor;

    if(pos==1)
    {
        q->sgte = lista;
        lista = q;
    }
    else
    {
        int x = insertarAntesDespues();
        t = lista;

        for(i=1; t!=NULL; i++)
        {
            if(i==pos+x)
            {
                q->sgte = t->sgte;
                t->sgte = q;
                return;
            }
            t = t->sgte;
        }
    }
    cout<<"   Error...Posicion no encontrada..!"<<endl;
}

void buscar(Tlista lista, int valor)
{
    Tlista q = lista;
    int i = 1, band = 0;

    while(q!=NULL)
    {
        if(q->nro==valor)
        {
            cout<<endl<<" Encontrado en la posicion "<< i <<endl;
            band = 1;
        }
        q = q->sgte;
        i++;
    }

    if(band==0)
        cout<<"\n\n Numero no encontrado..!"<< endl;
}

void reportarLista(Tlista lista)
{
     int i = 0;

     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << endl;
          lista = lista->sgte;
          i++;
     }
}


