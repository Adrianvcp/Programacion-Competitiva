#include<bits/stdc++.h>
using namespace std;

int main(){
  string dato;
  string palabra = "";
  cin>>dato;
  for (size_t i = 0; i < dato.size(); i++){
    dato[i] = tolower(dato[i]);
    if(dato[i] != 'a' && dato[i] != 'o' && dato[i] != 'y' && dato[i] != 'e' && dato[i] != 'u' && dato[i] != 'i'){
      palabra = palabra + dato[i];
    }
  }
  dato = "";
  for (size_t i = 0; i < palabra.size(); i++) {
    dato = dato + '.' + palabra[i];
  }
  cout<<dato;
  return 0;
}
