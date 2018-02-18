#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long cC,cO;cin>>cC>>cO;
  long long x,usas,n;

  if (cO -1 == 1)
  {
    x = 1;
    usas = 0;
  }
  else
  {
    x = cO - 2; //x = 5
    usas = (cO-1)-x; // 1
  }

  cout<<x<<endl; // 5
  cout<<cC<<endl; // 4

  if (cC- x > 0)
  {
    cout<<((cC - usas) - 3)%2<<endl;
    if (((cC - usas) - 3) %  2 == 0)cout<<"YES";
    else cout<<"NO";
  }

  else cout<<"NO";
}
