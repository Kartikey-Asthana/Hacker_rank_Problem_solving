#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, r;
    cin>>n;
    vector<long>B;
    long a,C=0;
    for(r=0;r<n;r++){
        cin>>a;
        B.push_back(a);
    }
    for(r=0;r<n;r++){
        C=C+B[r];
    }
    cout<<C;
    
    
}
