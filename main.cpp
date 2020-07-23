#include <iostream>
using namespace std;

void ingresar(int a[],int n);
void imprimir(int a[],int n);
void burbuja(int a[],int n);



int main()
{

    int arreglo[100];
    int n;
    cout<<"INGRESE EL TAMANIO:";
    cin>>n;
    ingresar(arreglo,n);
    cout<<endl;
    imprimir(arreglo,n);
    cout<<endl;
    burbuja(arreglo,n);
    cout<<endl;
    imprimir(arreglo,n);

    return 0;
}



//ESTA ES UNA FUNCIÓN PARA INGRESAR DATOS EN EL ARREGLO
void ingresar(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Ingrese el elemeneto al arreglo:"<<i+1<<endl;
        cin>>a[i];
    }

}

//ESTA ES UNA FUNCIÓN PARA IMPRIMIR LOS DATOS DEL ARREGLO
void imprimir(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}



void burbuja(int a[],int n)
{
    int i,j,aux;

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                aux=a[i];

                a[i]=a[j];

                a[j]=aux;
            }
        }
    }


}