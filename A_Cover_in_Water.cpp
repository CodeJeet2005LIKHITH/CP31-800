#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    // no water .
    // water __
    // if _ . _ in middle there is no need to pour water  // Assume You have unlimited water supply
    // in that block , you can take water and fill others
    // We got the Intution  if any were you find three consecutive  . . . At max you only need two buckets of water to fill any number of gaps
    // if you dont find then you need fill every gap
    while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool ans = false;
        int count = 0;
        for(int i=0; i < n; i++){
            if( i < n-2 && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                ans = true;
                break;
            }
            else if(s[i] == '.')count++;
        }
        if(ans)cout<<2<<endl;
        else cout<<count<<endl;
    }

}