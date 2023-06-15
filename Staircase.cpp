#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ,r ,c ;
    cin>>n;
    for(r=0;r<n;r++){
        for(c=1;c<=n;c++){
            if(c>=n-r){
                cout<<"#";
            }
            else{
                cout<<" ";
            }
        
        }
        cout<<"\n";
    }
}
