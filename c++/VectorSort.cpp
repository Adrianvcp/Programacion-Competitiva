#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;cin>>n;
    vector<int>dato;

    for(int i = 0; i < n; i++)
    {
        cin>>a;
        dato.push_back(a);
    }
    sort(dato.begin(),dato.end());
    for(auto it:dato)
    {
        cout<<it;
    }
}