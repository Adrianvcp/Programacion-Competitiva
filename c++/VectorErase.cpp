#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;cin>>n;
    vector<int> datoVector;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        datoVector.push_back(a);
    }
    int x;cin>>x;
    datoVector.erase(datoVector.begin() + x-1);

    for(auto it:datoVector)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cin>>a>>n;
    datoVector.erase(datoVector.begin() + a-1,datoVector.end() + n-1);
    
    cout<<datoVector.size();
    for(auto it:datoVector)
    {
        cout<<it<<" ";
    }
}