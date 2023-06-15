#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, r, a;
    cin>>n;
    vector<int>Candles;
    for(r=0;r<n;r++){
        cin>>a;
        Candles.push_back(a);
    }
    int max=Candles[0];
    for(r=1;r<n;r++){
        if(max<Candles[r]){
            max=Candles[r];
        }
    }
    int C=0;
    for(r=0;r<n;r++){
        if(Candles[r] == max){
            C++;
        }
    }
    cout<<C;
}
