#include <bits/stdc++.h>

using namespace std;

struct Student
{
  int year;
  string firstname;
  string last;
  int standart;
};

int main()
{
  Student st;
  cin>>st.year>>st.firstname>>st.last>>st.standart;

  cout<<st.year<<" "<<st.firstname<<" "<<st.last<<" "<<st.standart;
  return 0;
}
