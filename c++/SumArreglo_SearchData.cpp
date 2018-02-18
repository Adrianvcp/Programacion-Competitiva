#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,s;
  scanf("%d %d ", &n, &s);
  int arreglo[n];
  vector<int> arrData[50];

  for (size_t i = 0; i < n; i++)
  {
    scanf("%d", &arreglo[i]);
  }
  //busco la suma
  int sum = 0;
  int cant = 0;

  for (size_t i = 0; i < n; i++)
  {
        //Primer Dato lo pongo en la suma
        sum = arreglo[i];
        for (size_t j = i+1; j < n; j++)
        {
          sum = sum + arreglo[j];
          if (sum == s)
          {
            cout<<i+1<<","<<j+1<<endl;
          }
          else if(sum > s)
          {
            break;
          }
        }
  }
}
