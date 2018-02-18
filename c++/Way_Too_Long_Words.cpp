#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  string lista[n],dato;
  for (size_t i = 0; i < n; i++)
  {
    cin>>dato;
    if ((dato.size()) > 10)
    {
      cout<<dato[0]<<(dato.size()-2)<<dato[dato.size()-1]<<endl;
    }
    else
    {
      cout<<dato<<endl;
    }
  }
}


/*
#include<iostream>
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    char l[100];
    int a,len;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%s",l);
        len=strlen(l);
        if (len<=10)
        {
            printf("%s\n",l);
        }
        else
        {
            printf("%c%d%c\n",l[0],len-2,l[len-1]);
        }
    }
}
*/
