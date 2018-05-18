#include <bits/stdc++.h>

using namespace std;
/*
char* punterito(string a)
{
  char arreglov[a.size()];
  char *p = &arreglov[0];
  for (size_t i = 0; i < a.size(); i++)
  {
    arreglov[i] = a[i];
  }
  return p;
}

int main()
{
  string dat;
  cin>>dat;
  char *p = punterito(dat);


  for (size_t i = 0; i < dat.size(); i++) {
    cout<<*p + i <<endl;
  }

  return 0;
}
*/

int main()
{



  //JAJAJAok
  int mayus = 0,men = 0   ;
  string dat    ;
  cin>>dat    ;
  for (size_t i = 0; i < dat.size(); i++) {
    if (isupper(dat[i])) mayus++    ;
    else men++    ;
  }
  if (mayus>men) {
    for (size_t i = 0; i < dat.size(); i++) {
      dat[i] = toupper(dat[i])    ;
    }
  }
  else{
    for (size_t i = 0; i < dat.size(); i++) {
      dat[i] = tolower(dat[i])    ;
    }
  }

  cout<<dat;

}
