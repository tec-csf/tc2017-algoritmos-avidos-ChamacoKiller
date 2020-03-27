/*
--Problema Fontanero--
 --Rubén Hernández Rivas A01024669--
  --Marzo 2020--
*/

#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

//Función para implementar BubbleSort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    //Ultimos valores i en lugar
    for (j = 0; j < n-i-1; j++)
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
}


int  main() {
  int lugares = 0;
  int tiempo[lugares];
  int totalT = 0;
  int total = 0;

  cout<<"Lugares va a visitar el plomero:"<<endl;
  cin>>lugares;

  for (int i = 0; i < lugares; i++) {
    cout<<"Tiempo ["<<i+1<<"] : "<<endl;
    cin>>tiempo[i];
  }

  bubbleSort(tiempo,lugares);

  cout<<"Tiempos ordenados: "<<endl;

  for (int j = 0; j < lugares; j++) {

    totalT = tiempo [j]+totalT;
    cout<<"Tiempo tardado para: "<<j+1 << " "<<totalT<< " minutos"<<endl;
    if (j==lugares) {
      totalT += tiempo [j];
      cout<<"Tiempo tardado: "<<"lugar: "<<lugares << " "<<totalT<< " minutos"<<endl;
    }
  }


}
