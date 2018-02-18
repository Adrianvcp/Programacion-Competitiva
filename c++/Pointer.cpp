#include <bits/stdc++.h>

using namespace std;

void update(int *a,int *b)
{
  int sum = *a + *b;
  int diff = abs(*a - *b);
  printf("%d\n%d",sum, diff);

}

int main()
{
  int a,b;
  scanf("%d\n%d",&a,&b);
  update(&pa,&pb);
}
