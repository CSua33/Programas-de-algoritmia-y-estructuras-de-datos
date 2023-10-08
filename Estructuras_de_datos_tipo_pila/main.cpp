

#include <iostream>
using namespace std;

class nodo {
   public:
    nodo(int v, nodo *sig = NULL)
    {
       valor = v;
       siguiente = sig;
    }

   private:
    int valor;
    nodo *siguiente;

   friend class pila;
};

typedef nodo *pnodo;

class pila {
   public:
    pila() : ultimo(NULL) {}
    ~pila();

    void Push(int v);
    int Pop();
	void mostrar();
   private:
    pnodo ultimo;
};

pila::~pila()
{
   pnodo aux;

   while(ultimo) {
      aux = ultimo;
      ultimo = ultimo->siguiente;
      delete aux;
   }
}

void pila::Push(int v)
{
   pnodo nuevo;

   /* Crear un nodo nuevo */
   nuevo = new nodo(v, ultimo);
   /* Ahora, el comienzo de nuestra pila es en nuevo nodo */
   ultimo = nuevo;
    cout << "Nuevo numero guardado " << v << endl;

}

int pila::Pop()
{

   pnodo nodo; /* variable auxiliar para manipular nodo */
   int v,a;      /* variable auxiliar para retorno */

   if(!ultimo) return 0; /* Si no hay nodos en la pila retornamos 0 */
   /* Nodo apunta al primer elemento de la pila */
   nodo = ultimo;
   /* Asignamos a pila toda la pila menos el primer elemento */
   ultimo = nodo->siguiente;
   /* Guardamos el valor de retorno */
   v = nodo->valor;
   /* Borrar el nodo */
   delete nodo;
	
   cout << "Numero fuera de la lista:" << v << endl;
   //////////////////////////////////////////////

    ///////////////////////////////////////////////
   return v;
}


int main()
{
   pila Pila;

   
   ///////////////////////////////////////////
     int opc, x;



  cout << "CARLO PINEDO SUAREZ 19310163"<<endl<<endl;
  do{
    cout << "MENU DE LA LISTA"<<endl;
    cout << "1. INSERTAR NUMERO"<<endl;////////LA INSERCION SERA AL INICIO
    cout << "2. ELIMINAR AL INICIO DE LA LISTA"<<endl;
    cout << "0. SALIR"<<endl;
    cout << "ELIGE UNA OPCION: ";
    cin>>opc;
    switch(opc)
    {
      case 1:
			cout << "Ingrese la numero: "<<endl;
            cin>>x;
			Pila.Push(x);
		
          break;
      case 2: Pila.Pop();
     
          break;
          
    }
  }while (opc!=0);
   
   
   ///////////////////////////////////////////////

   cin.get();
   return 0;
}

