#include<bits/stdc++.h>
using namespace std;
int main()
{
   
    int n;cin>>n;
    while( n != 0 )
    {
        string numero = "";
        string aux = "";
        long long dato = 0,datovoltis = 0,p1= 0,p2 = 0,suma = 0,cant = 0,cont = 0;
        cin>>numero;
        do
        {
            dato = atoi(numero.c_str());
            reverse(numero.begin(),numero.end());
            datovoltis = atoi(numero.c_str());
            suma = dato + datovoltis;
            numero = to_string(suma);
            //cout<<"entero:"<<suma<<" string:"<<numero<<endl;
            cant = pow(10,numero.size() / 2);
            //cout<<"cantidad:"<<cant<<endl;
            if (numero.size() % 2 == 0)
            {
                p1 = suma / cant;
                p2 = suma % cant;
            }
            else
            {
                p1 = suma / (cant*10);
                p2 = suma % cant;
            }
            aux = to_string(p2);
            reverse(aux.begin(),aux.end());
            p2 = atoi(aux.c_str());
            //cout<<p1<<"---"<<p2<<endl;
            cont++;
        }
        while( p1 - p2 != 0);
        cout<<cont<<" "<<suma<<endl;
        n--;
    }
}