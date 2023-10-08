#include <iostream>
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void quicksort (int a[],int izq,int der, long datos[]);
void mostrar_arreglo (int g[],int n);
int qs(int a[],int izq,int der, long datos[]);


int main() {


int g[8]={8,3,6,4,2,5,7,1},n, opc,l=0;
long datos[]={0,0};
	cout <<"Ingrese n"<<endl;
        cin>>n;
do
	{
		cout <<"Menu de opciones"<<endl;
		cout <<"2-Mostrar arreglo"<<endl;
		cout <<"3-ordenar arreglos y mostrar tabla comparativa"<<endl;
		cout <<"Elige una opcion"<<endl;
		cin>>opc;
		
        
		switch(opc)
		{
		
		case 2:
		mostrar_arreglo (g,n);
		fflush (stdin);
		cout <<endl;
		break;
		case 3:
        cout <<"----------------------------------------------------------------------------"<<endl;
		cout <<"Tabla comparativa                                                          |"<<endl;
		cout <<"----------------------------------------------------------------------------"<<endl;
		cout <<"Metodo de ordenamiento|No de pasadas|No de intercambios|Tiempo de ejecucion|"<<endl;
		
        cout <<"----------------------------------------------------------------------------"<<endl;
        cout <<"quicksort          |";
       
        quicksort (g,l,n-1,datos);
       
 		cout<<datos[0]<<"           |"<<datos[1]<<"                ";
        fflush (stdin);
		cout <<endl<<"----------------------------------------------------------------------------"<<endl;
        
	}
	}while(opc!=0);





	return 0;
}









void mostrar_arreglo (int g[],int n)
{

	cout<<"Arreglo quicksort:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<g[x]<<"],";

	}
	cout<<endl;
	


}

int qs(int a[],int izq,int der,long datos[])
	{
	    int i,pivote,valor_pivote,aux;
	    pivote=izq;
	    valor_pivote = a[pivote];
	    for(i=izq+1; i<=der; i++)
	    {
		if(a[i] < valor_pivote){
			pivote++;
			aux=a[i];
			a[i]=a[pivote];
			a[pivote]=aux;
		}
	}
		datos[1]++;
		aux=a[izq];
		a[izq]=a[pivote];
		a[pivote]=aux;
		return pivote;
	}
	    

	void quicksort(int a[],int izq,int der, long datos[])
	{
	    int pivote;
	    if(izq<der){
				datos[0]++;
				pivote=qs(a,izq,der,datos);
    			quicksort(a,izq,pivote-1, datos);
    			quicksort(a,pivote+1,der, datos);
		}
	}
