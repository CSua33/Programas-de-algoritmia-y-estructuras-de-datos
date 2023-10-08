#include <iostream>
#include<time.h>
#include<stdlib.h>
#include <stdio.h>
using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void burbuja (int a[], int n);
void burbujamejorada (int a[], int n);
void burbujabandera (int a[], int n);
void seleccion (int a[], int n);
void insercion (int a[], int n);
void shell (int a[], int n);
void quicksort (int a[], int n);
void mSort(int *A,int n);
void llene_arreglo (int a[],int b[],int c[],int d[],int e[], int f[],int g[],int h[],int n);
void mostrar_arreglo (int a[],int b[],int c[],int d[],int e[],int f[],int g[],int h[], int n);
void qs(int lista[],int limite_izq,int limite_der);
void merge(int *izq,int nIzq,int *der,int nDer,int *A);
void secuencial (int f[], int n);
void binaria (int f[], int n);
void elegir_vector_sec(int a[],int b[],int c[],int d[],int e[],int f[],int g[],int h[],int n);
void elegir_vector_bin(int a[],int b[],int c[],int d[],int e[],int f[],int g[],int h[],int n);

int main() {
clock_t c1,c2,c3,c4,c5,c6,c7,c8;

int a[50000],b[50000],c[50000],d[50000],e[50000],f[50000],g[50000],h[50000], n, opc;

do
	{
		cout <<"Menu de opciones"<<endl;
		cout <<"1-Llenar arreglo"<<endl;
		cout <<"2-Mostrar arreglo"<<endl;
		cout <<"3-Metodo burbuja"<<endl;
		cout <<"4-Metodo burbuja mejorada"<<endl;
		cout <<"5-Metodo burbuja bandera"<<endl;
		cout <<"6-Metodo seleccion"<<endl;
		cout <<"7-Metodo insercion"<<endl;
		cout <<"8-Metodo shell"<<endl;
		cout <<"9-Metodo quicksort"<<endl;
		cout <<"10-Metodo Mezcla"<<endl;
		cout <<"11-Busqueda secuencial"<<endl;
		cout <<"12-Busqueda binaria"<<endl;
		cout <<"Elige una opcion"<<endl;
		cin>>opc;

		switch(opc)
		{
		case 1:
		cout <<"cuantos elementos quieres?"<<endl;
		cin >>n;
		llene_arreglo (a,b,c,d,e,f,g,h,n);
		fflush (stdin);
		break;
		case 2:
		mostrar_arreglo (a,b,c,d,e,f,g,h,n);
		fflush (stdin);
		cout <<endl;
		break;
		case 3:
  		c1 = clock();
		burbuja (a, n);
		c1 = clock()-c1;
		printf( "Numero de segundos transcurridos: %f s\n", (c1)/(double)CLOCKS_PER_SEC );
		fflush (stdin);
        break;
		case 4:
        c2 = clock();
		burbujamejorada (b, n);
		c2 = clock()-c2;
		printf( "Numero de segundos transcurridos: %f s\n", (c2)/(double)CLOCKS_PER_SEC );
		fflush (stdin);
		break;
		case 5:
		c3 = clock();
		burbujabandera (c, n);
		c3 = clock()-c3;
		printf( "Numero de segundos transcurridos: %f s\n", (c3)/(double)CLOCKS_PER_SEC );
		fflush (stdin);
		break;
		case 6:
		c4 = clock();
		seleccion (d, n);
		c4 = clock()-c4;
		printf( "Numero de segundos transcurridos: %f s\n", (c4)/(double)CLOCKS_PER_SEC );
		fflush (stdin);
		break;
		case 7:
		c5 = clock();
		insercion (e, n);
		c5 = clock()-c5;
		printf( "Numero de segundos transcurridos: %f s\n", (c5)/(double)CLOCKS_PER_SEC );
		fflush (stdin);
		break;
		case 8:
        c6 = clock();
        shell (f, n);
        c6 = clock()-c6;
		printf( "Numero de segundos transcurridos: %f s\n", (c6)/(double)CLOCKS_PER_SEC );
        fflush (stdin);
        break;
        case 9:
        c7 = clock();
        quicksort (g, n);
        c7 = clock()-c7;
		printf( "Numero de segundos transcurridos: %f s\n", (c7)/(double)CLOCKS_PER_SEC );
        fflush (stdin);
		break;
		case 10:
        c8 = clock();
        mSort (h, n);
        c8 = clock()-c8;
		printf( "Numero de segundos transcurridos: %f s\n", (c8)/(double)CLOCKS_PER_SEC );
        fflush (stdin);
		break;
		case 11:
        elegir_vector_sec(a,b,c,d,e,f,g,h,n);
        cout <<endl;
		break;
		case 12:
        elegir_vector_bin(a,b,c,d,e,f,g,h,n);
        cout <<endl;
		break;


	}
	}while(opc!=0);





	return 0;
}




void llene_arreglo (int a[],int b[],int c[],int d[],int e[],int f[],int g[],int h[], int n)
{
	int x;
	srand(time(NULL));
	for(x=0;x<n;x++)
	{
		a[x]=rand()%50001;
		b[x]=a[x];
		c[x]=a[x];
		d[x]=a[x];
		e[x]=a[x];
		f[x]=a[x];
		g[x]=a[x];
		h[x]=a[x];

	}


}

void mostrar_arreglo (int a[],int b[],int c[],int d[],int e[],int f[],int g[],int h[], int n)
{
	cout<<"Arreglo burbuja:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<a[x]<<"],";

	}
	cout<<endl;
	cout<<"Arreglo burbuja mejorada:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<b[x]<<"],";

	}
	cout<<endl;
	cout<<"Arreglo burbuja bandera:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<c[x]<<"],";

	}
	cout<<endl;
	cout<<"Arreglo seleccion:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<d[x]<<"],";

	}
	cout<<endl;
	cout<<"Arreglo insercion:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<e[x]<<"],";

	}
	cout<<endl;
	cout<<"Arreglo shell:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<f[x]<<"],";

	}
	cout<<endl;
	cout<<"Arreglo quicksort:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<g[x]<<"],";

	}
	cout<<endl;
	cout<<"Arreglo Mezcla:"<<endl;
	for(int x=0;x<n;x++)
	{
	cout<<"["<<h[x]<<"],";

	}
	cout<<endl;


}

void burbuja (int a[], int n)
{
int i, k, aux;
for ( i=1; i<=n; i++)
{
for (k=0; k<n-1; k++)
{
	if(a[k]>a[k+1])
	{

aux=a[k];
a[k]=a[k+1];
a[k+1]=aux;
}
}
}

}

void burbujamejorada (int a[], int n)
{
int i, k, aux;
for ( i=1; i<=n; i++)
{
for(k=0; k<n-i; k++)
{
	if(a[k]>a[k+1])
	{
aux=a[k];
a[k]=a[k+1];
a[k+1]=aux;

}
}
}

}



void burbujabandera (int a[], int n)
{
int band, k, aux ;
band =0;
while(!band)
{
band=1;
for (k=0; k<n-1; k++)
{
	if(a[k]>a[k+1])
	{
aux=a[k];
a[k]=a[k+1];
a[k+1]=aux;
band=0;
}
}
}
}

void seleccion (int a[], int n)
{
int k, menor, i, j;
for(i=0; i<n-1; i++)
{
k= i;
menor=a[i];
for (j=i+1;j<n; j++)
{
if (a[j]<menor)
{
menor=a[j];
k=j;
}
}
a[k]=a[i];
a[i]=menor;
}
}


void insercion (int a[], int n)
{
int temp, i, j;
for(i=0; i<n; i++)
{
temp= a[i];
j=i-1;

while (j>=0 && a[j]>temp)
{
a[j+1]=a[j];
j--;
}
a[j+1]=temp;

}
}

void shell(int a[] , int n)
{
    int ints,i,aux;
    bool band;
    ints=n;
    while(ints>1)
    {
        ints=(ints/2);
        band=true;
        while(band==true)
        {
            band=false;
            i=0;
            while((i+ints+1)<=n)
                {
                    if(a[i]>a[i+ints])
                    {
                        aux=a[i];
                        a[i]=a[i+ints];
                        a[i+ints]=aux;
                        band=true;
                    }
                i++;
                }
        }
 }
}

void qs(int lista[],int limite_izq,int limite_der)
	{
	    int izq,der,temporal,pivote;
	    izq=limite_izq;
	    der = limite_der;
	    pivote = lista[(izq+der)/2];
	    do{
	        while(lista[izq]<pivote && izq<limite_der)izq++;
	        while(pivote<lista[der] && der > limite_izq)der--;
	        if(izq <=der)
	        {
	            temporal= lista[izq];
	            lista[izq]=lista[der];
	            lista[der]=temporal;
	            izq++;
	            der--;
	        }

	    }
		while(izq<=der);
	    if(limite_izq<der){qs(lista,limite_izq,der);}
	    if(limite_der>izq){qs(lista,izq,limite_der);}
	}

	void quicksort(int a[],int n)
	{
	    qs(a,0,n-1);
	}

void merge(int *izq,int nIzq,int *der,int nDer,int *A)
{
 int i=0,j=0,k=0;
 while( ( i < nIzq ) && ( j < nDer ) )
 {
  if( izq[i] <= der[j])
  {
   A[k] = izq[i];
   i++;
  }
  else
  {
   A[k] = der[j];
   j++;
  }
  k++;
 }
 while(i < nIzq)
 {
  A[k] = izq[i];
  i++;k++;
 }
 while(j < nDer)
 {
  A[k] = der[j];
  j++;k++;
 }
}

void mSort(int *A,int n)
{
 if(n==1){return;}
 int mitad = n / 2;
 int *izq = new int[mitad];
 int *der = new int[n-mitad];
 for(int i=0;i<mitad;i++)
  izq[i] = A[i];
 for(int i=mitad;i<n;i++)
  der[i-mitad] = A[i];
 mSort(izq, mitad);
 mSort(der, n-mitad);
 merge(izq, mitad, der, n-mitad, A);
}

void secuencial (int f[], int n)
{
	
	int i,dato;
	char band = 'F';
cout<<"Ingrese elemento a buscar ";
cin>>dato;

	//Busqueda Secuencial
	i=0;
	while((band == 'F') && (i<n)){
		if(f[i] == dato){
			band = 'V';
		}
		i++;
	}

	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V'){
		cout<<"El numero a sido encontrado en la pos: "<<i-1<<endl;
	}


}

void elegir_vector_sec(int a[],int b[],int c[],int d[],int e[],int f[],int g[],int h[],int n)
{
	char x;
	cout<<"Ingrese el arreglo en el que se realizara la busqueda"<<endl;
	cout <<"a-Metodo burbuja"<<endl;
	cout <<"b-Metodo burbuja mejorada"<<endl;
	cout <<"c-Metodo burbuja bandera"<<endl;
	cout <<"d-Metodo seleccion"<<endl;
	cout <<"e-Metodo insercion"<<endl;
	cout <<"f-Metodo shell"<<endl;
	cout <<"g-Metodo quicksort"<<endl;
	cout <<"h-Metodo Mezcla"<<endl;
	cin>>x;
	switch(x)
		{
		case 'a':
		secuencial (a,n);
		fflush (stdin);
		break;
		case 'b':
		secuencial (b,n);
		fflush (stdin);
		break;
		case 'c':
		secuencial (c,n);
		fflush (stdin);
		break;
		case 'd':
		secuencial (d,n);
		fflush (stdin);
		break;
		case 'e':
		secuencial (e,n);
		fflush (stdin);
		break;
		case 'f':
		secuencial (f,n);
		fflush (stdin);
		break;
		case 'g':
		secuencial (g,n);
		fflush (stdin);
		break;
		case 'h':
		secuencial (h,n);
		fflush (stdin);
		break;
	
}
	}


void binaria (int f[], int n)
{

	int inf,sup,mitad,dato,i;
	char band='F';
cout<<"Ingrese elemento a buscar ";
cin>>dato;

	//Algoritmo de la Busqueda Binaria
	inf=0;
	sup=n;
	i=0;
	while((inf<=sup)&&(i<n)){
		mitad = (inf+sup)/2;
		if(f[mitad] == dato){
			band='V';
			break;
		}
		if(f[mitad]>dato){
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		if(f[mitad]<dato){
			inf = mitad;
			mitad = (inf+sup)/2;
		}
		i++;
	}

	if(band == 'V'){
		cout<<"El numero se encontro en la pos: "<<mitad<<endl;
	}
	else{
		cout<<"El numero NO se encontro o el arreglo no esta ordenado";
	}
}

void elegir_vector_bin(int a[],int b[],int c[],int d[],int e[],int f[],int g[],int h[],int n)
{
	char x;
	cout<<"Ingrese el arreglo en el que se realizara la busqueda"<<endl;
	cout <<"a-Metodo burbuja"<<endl;
	cout <<"b-Metodo burbuja mejorada"<<endl;
	cout <<"c-Metodo burbuja bandera"<<endl;
	cout <<"d-Metodo seleccion"<<endl;
	cout <<"e-Metodo insercion"<<endl;
	cout <<"f-Metodo shell"<<endl;
	cout <<"g-Metodo quicksort"<<endl;
	cout <<"h-Metodo Mezcla"<<endl;
	cin>>x;
	switch(x)
		{
		case 'a':
		binaria (a,n);
		fflush (stdin);
		break;
		case 'b':
		binaria  (b,n);
		fflush (stdin);
		break;
		case 'c':
		binaria  (c,n);
		fflush (stdin);
		break;
		case 'd':
		binaria  (d,n);
		fflush (stdin);
		break;
		case 'e':
		binaria  (e,n);
		fflush (stdin);
		break;
		case 'f':
		binaria  (f,n);
		fflush (stdin);
		break;
		case 'g':
		binaria  (g,n);
		fflush (stdin);
		break;
		case 'h':
		binaria  (h,n);
		fflush (stdin);
		break;

}
	}
