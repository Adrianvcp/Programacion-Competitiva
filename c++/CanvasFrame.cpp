#include<bits/stdc++.h>
using namespace std;


int main()
{
  int n,valor,cant=0;
  cin>>n;
  int arre[n];
  for (size_t i = 0; i < n; i++) {
    cin>> arre[i];
  }

  for (size_t i = 0; i < n; i++)
  {
    valor = arre[i];
    if (valor != 0)
    {
      //cout<<"Buscando Par para:"<<valor<<endl;
      for (size_t j = i + 1; j < n; j++)
      {
        if(arre[j] == valor)
        {
          //cout<<"Encontramos su pinche par  Pos:"<<j<<" Numero:"<<arre[j]<<endl;
          arre[j] =0;
          arre[i] =0;
          cant++;
          //cout<<"Nuevos Valores"<<arre[i]<<"-"<<arre[j];
          break;
        }
      }
    }
  }
  cout<<cant/2;
}
