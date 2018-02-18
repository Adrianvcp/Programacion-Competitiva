#include <bits/stdc++.h>

using namespace std;

int main()
{
  int a;

  string arreglito[9] = {"one","two","three","four","five","six","seven","eight","nine"};

  do
  {
    scanf("%d",&a);
  } while(a<1);

  if (a>9)
  {
    printf("Greater than 9");
  }
  else
  {
    cout<<arreglito[a-1];
  }
  return 0;
}
