#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,dat=0;
  scanf("%d",&n);
  int arr[n];
  int invrtarr[n];
  //Lleno
  for (size_t i = 0; i < n; i++)
  {
    scanf("%d",&dat);
    arr[i] = dat;
  }
  //Invierto
  for (size_t i = 0; i < n; i++)
  {
    invrtarr[i] = arr[n-1-i];
  }
  //muestro
  for (size_t  i= 0;i < n; i++)
  {
    printf("%d ",invrtarr[i]);
  }
}
