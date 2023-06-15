#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c, n, a;
    cin>>n;
    vector<vector<int>>Mat(n);
    for(r=0;r<n;r++){
        for(c=0;c<n;c++){
            cin>>a;
            Mat[r].push_back(a);
        }
    }
    int S=0, R=0;
    for(r=0;r<n;r++){
        c=r;    
        S=S+Mat[r][c];
        continue;
            
            
    }
    for(r=0;r<n;r++){
        for(c=0;c<n;c++){
            if(c+r==(n-1)){
                R=R+Mat[r][c];
                
            }
        }   
        
    }

    int X=abs(S-R);
    cout<<X;
}
