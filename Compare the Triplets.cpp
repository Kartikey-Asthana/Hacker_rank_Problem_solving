#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    vector<int>S;
    vector<int>D;
    for(i=0;i<3;i++){
        cin>>n;
        S.push_back(n);
    }
    for(i=0;i<3;i++){
        cin>>n;
        D.push_back(n);
    }
    int A=0 , B=0 ;
    for(i=0;i<3;i++){
        if(S[i]>D[i]){
            A++;
        }
        else if(S[i]<D[i]){
            B++;
        }
    }
    cout<<A<<" "<<B;
}
