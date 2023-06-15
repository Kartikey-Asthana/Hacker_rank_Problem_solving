#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    string ans = "";
    int i,y;
    if(s[8]=='A'){
        if(s[0]=='1'&&s[1]=='2'){
            ans=ans+'0'+'0';
            for(i=2;i<8;i++){
                ans= ans + s[i];
            }   
            
        }
        else{
            for(i=0;i<8;i++){
                ans= ans + s[i];
            }
        }
        
        
    }
    else if(s[8]=='P'){
        if(s[0]=='1' && s[1]=='2'){
            for(i=0;i<8;i++){
                ans=ans+s[i];
            }
            cout<<ans;
        }
        else{
            string abc = "";
            abc = abc + s[0] +  s[1];
            y=stoi(abc);
            y+=12;
            ans = to_string(y);
            for(i=2;i<8;i++){
                ans=ans+s[i];
            }
        }       
    }
    return (ans);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
