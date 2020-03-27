// Problema Mochila
//  Rubén Hernández Rivas A01024669
//   Marzo 2020
//
#include <iostream>
using namespace std;

int main()
{
//Declaración e input de variables
 int objetos,maximo;
 int comparacion=-1,mejor=0;
 cout<<"Ingresa cantidad de objetos: "<<endl;
 cin>>objetos;
 cout<<"Ingresa peso maximo: "<<endl;
 cin>>maximo;
 objetos=objetos+1;
 maximo=maximo+1;
 int Mochila[objetos][maximo];
 int peso[objetos+1];
 int ben[objetos+1];
 peso[0]=0;
 ben[0]=0;

//Peso & Beneficio
    for(int i=1; i<objetos; ++i){
     cout<<"Ingresa --Peso ["<<i<<"]-- : "<<endl;
     cin>>peso[i];
 }

  for(int j=1; j<objetos; ++j){
     cout<<"Ingresa --Beneficio ["<<j<<"]-- : "<<endl;
     cin>>ben[j];
 }

//Matriz de mochila
 for(int i=0; i<maximo; i++){
     Mochila[0][i]=0;
     if(i < objetos){
         Mochila[i][0]=0;
     }
 }

//Comparación y llenado de la mochila
 for(int i=1;i<=objetos-1;++i){
    for(int j=1;j<=maximo-1;++j){
        if(j-peso[i]<0){
                Mochila[i][j]=Mochila[i-1][j];
        }
        else{
        Mochila[i][j]= max(Mochila[i-1][j], Mochila[i-1][j-peso[i]] + ben[i]);
        }
    }
 }

//Comparaciion y Mejor
 for(int i=0; i<objetos; ++i){
    for(int j=0; j<maximo; ++j){
        //cout<<Mochila[i][j]<<" ";
        if(Mochila[i][j] > comparacion){
            comparacion = Mochila[i][j];
            mejor = Mochila[i][j];
        }
    }
  }
  cout<<"\n";
  cout<<"El mayor beneficio es: "<<mejor<<endl;
}
