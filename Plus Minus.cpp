#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i,a;
    cin>>n;
    vector<int>arr;
    float c1=0.0, c2=0.0, c3=0.0;
    for(i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            c1++;
        }
        else if(arr[i]<0){
            c3++;
        }
        else{
            c2++;
        }
    }
    cout<<(c1/n)<<"\n"<<(c3/n)<<"\n"<<(c2/n);
}
