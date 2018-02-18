#include <bits/stdc++.h>

using namespace std;
/*
int main()
{
  int n, arreglo[n][3], arr[3] = {0,0,0};
  cin>>n;


  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < 3; j++)
    {
      cin>>arreglo[i][j];
    }
  }


  for (size_t i = 0; i < n; i++)
  {
    for (size_t j = 0; j < 3; j++)
    {
      arr[j] = arr[j] + arreglo[i][j];
    }
  }

  if(arr[0] == 0 && arr[1] == 0 && arr[2] == 0) cout<<"YES";
  else cout<<"NO";

  return 0;
}
*/


//Segunda Forma

int main()
{
  int n,x,y,z,sumx=0,sumy=0,sumz=0;
  cin>>n;

  for (size_t i = 0; i < n; i++)
  {
      cin>>x>>y>>z;
      sumx = sumx + x;
      sumy = sumy + y;
      sumz = sumz + z;
  }
  cout<<sumx<<" "<<sumy<<" "<<sumz;
  if (sumx == 0 && sumy==0 && sumz == 0) cout<<"YES";else cout<<"NO";



}
