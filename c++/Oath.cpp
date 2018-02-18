#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long n,cant=0;cin>>n;
  long long arr[n];
  for (size_t i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  sort(arr, arr + n);
  if (n<3) cout<<"0";
  else
  {
    for(int i = 1;i < n-1; i++)
    {
      if(arr[i] > arr[0]  &&  arr[i] < arr[n-1])
      cant++;
    }
    cout<<cant;
  }
 }
