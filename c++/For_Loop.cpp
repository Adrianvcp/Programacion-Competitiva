#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a,b;
  string arreg[9]= {"one","two","three","four","five","six","seven","eight","nine"};
  do {
    /* code */
    scanf("%d\n%d",&a,&b);
  } while(a>=b);

  for (int i = a; i < b+1; i++)
  {
    if (i > 9)
    {
      if( i % 2 == 1) cout<<"odd\n";
      else cout<<"even\n";
    }
    else
    {
      cout<<arreg[i-1]<<endl;
    }
  }
}
