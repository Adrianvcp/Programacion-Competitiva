#include <bits/stdc++.h>

using namespace std;

int main()
{
  string dato;
  cin>>dato;
  int tam = dato.size() - 1;
  int a = 0;
  while (tam != 0 )
  {
    if(isupper(dato[tam]) == 256) tam--;
    else
    {
      a= 1;
      cout<<dato;
      break;
    }
  }


  if (a == 0)
  {
    for (size_t i = 1; i < dato.size(); i++) {
      dato[i] = char(tolower(dato[i]));
    }
    dato[0] = char(toupper(dato[0]));
    cout<<dato;
  }

  return 0;
}
