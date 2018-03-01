#include <bits/stdc++.h>

using namespace std;

void breakingRecords(vector <int> score) {
    // Complete this function
    int mayor = *score.begin(),menor = *score.begin();
    int cantMa=0,cantMe = 0;

    for(auto it = score.begin(); it != score.end() ;++it)
    {
        if (max(mayor,*it) != mayor )
        {
            mayor = *it;
            cantMa++;
        }
        if (min(menor,*it) != menor )
        {
            menor = *it;
            cantMe++;
        }
    }
    cout<<cantMa<<" "<<cantMe;
}

int main() {
    int n;
    cin >> n;
    vector<int> score(n);
    for(int score_i = 0; score_i < n; score_i++){
       cin >> score[score_i];
    }
    breakingRecords(score);


    return 0;
}