//Estructuras de datos ll
//Fecha: 26/02/2022.
//Autor: Edgar Antonio Delgadillo Villegas
//Historial de modificaciones: 27/02/2022
/*Resumen de funcionalidad: Leer una matriz dinámica de m X n y la escriba poniendo las columnas
como renglones y los renglones como columnas. utilizando memoria dinamica*/

#include <iostream>
#include <windows.h>

using namespace std;

int main(void)
{
    int i,j, **matriz,nfilas, ncols;

    int **matrix=NULL;//se asigna espacio en memoria
    //El usuario definira el tamaño de la matriz
    cout<<"Escribe el numero de filas: ";
    cin>>nfilas;
    cout<<"Escribe el numero de columnas: ";
    cin>>ncols;
    cout<<"\n";
    //se asigna memoria para la filas
    matriz=(int **)malloc(nfilas*sizeof(int*));//se asigna memoria para las filas
    for(i=0; i<nfilas; i++)
    {
        matriz[i]=(int *)malloc(ncols*sizeof(int));//se asigna memoria mientras se mueve por el arreglo
        //if(matrix[i]==NULL) printf("error: "); //se comprueba que no hay errores
    }

        for(i=0; i<nfilas; i++)
        {
            for(j=0; j<ncols; j++)
            {

            matriz[i][j]=i+j;
            }
        }

        for(i=0; i<nfilas; i++)
        {
            for(j=0; j<ncols; j++)
            {
                cout<<matriz[i][j];//Imprimo numero de las matrices
                cout<<"\  ";//hace que tenga espacios el la matriz

            }
            cout<<"\n";//salto para que se vea la matriz
        }


        cout<<"\nInvertiendo la matriz";Sleep(150);
        cout<<". "; Sleep(150);
        cout<<". "; Sleep(150);
        cout<<".\n\n";

        for(j=0; j<ncols; j++)
        {
            for(i=0; i<nfilas; i++)

            {
                cout<<matriz[i][j];//Imprimo numero de las matrices
                cout<<"\  ";//hace que tenga espacios el la matriz

            }
            cout<<"\n";//salto para que se vea la matriz
        }

        for(i=0; i<nfilas; i++)
        {
            free(matriz[i]);//se libera la memoria asignada a la matriz si asi se requiere

        free(matriz);//se libera la memoria del apuntador
        }

        //invertirlo



    return 0;
}
