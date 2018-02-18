#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dato;
    while ( scanf("%d",&dato) != EOF)
    {
        if(dato % 4 == 0)
        {
            if (dato % 100 != 0)
            {
                cout<<"This is leap year."<<endl;
                if (dato%15== 0) cout<<"This is huluculu festival year."<<endl;
                if (dato%55== 0) cout<<"This is Bulukulu festival year."<<endl;
            }
            else
            {   
                if(dato%400 == 0)
                {
                    cout<<"This is leap year."<<endl;
                    if (dato%15== 0) cout<<"This is huluculu festival year."<<endl;
                    if (dato%55== 0) cout<<"This is Bulukulu festival year."<<endl;
                }
                else
                {
                    if (dato%15== 0) cout<<"This is huluculu festival year."<<endl;
                    else cout<<"This is an ordinary year."<<endl;
                }
                
            }
        }
        else
        {
            if (dato%15== 0) cout<<"This is huluculu festival year."<<endl;
            else cout<<"This is an ordinary year."<<endl;
        }
        cout<<endl;
    }
    
}