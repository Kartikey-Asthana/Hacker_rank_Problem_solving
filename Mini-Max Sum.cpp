#include <bits/stdc++.h>
using namespace std;

void Swap(long*k,long*j){
    *k=*k+*j;
    *j=*k-*j;
    *k=*k-*j;
    
}

int main(){
    int i;
    long n, Ma=0, Mi=0;
    vector<long>A;
    for(i=0;i<5;i++){
        cin>>n;
        A.push_back(n);
    }
    
    for(i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(A[i]>A[j]){
                Swap(&A[i],&A[j]);
            }
        }
    }
    for(i=0;i<4;i++){
        Mi+=A[i];
    }
    for(i=1;i<5;i++){
        Ma+=A[i];
    }
    cout<<Mi<<" "<<Ma;
}
