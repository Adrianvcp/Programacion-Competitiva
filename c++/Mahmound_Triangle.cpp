#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,a,b,c,v=0;cin>>n;
  int arr[n];
  for (size_t i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  sort(arr,arr+n);

  for (size_t i = 0; i < n-2; i++)
  {
    a = arr[i];
    b = arr[i + 1];
    c = arr[i + 2];
    //cout<<a<<"-"<<b<<"-"<<c<<endl;
    if(a + b> c && a+c>b && b+c>a)
    {
      cout<<"YES";
      v = 1;
      break;
    }
  }

  if(v==0)cout<<"NO";

}
