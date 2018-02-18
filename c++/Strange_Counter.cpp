#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long tim;cin>>tim;
  long long n = log(((tim*2)+4)/3)/ log(2);
  long long cd = 3*pow(2,n-1);
  lon pi =(-4+(3*pow(2,n))) /2;
  int res = cd - (tim - pi);
  cout<<res;
}
