#include<bits/stdc++.h>
using namespace std;
void solve2(int a,int b,int c){
    int rep = a/b;
    vector<int>res;
    for(int i=0; i < rep; i++)res.push_back(b);
    if(a%b != 0)res.push_back(a%b);
    cout<<res.size()<<endl;
    for(int i=0; i < res.size(); i++)cout<<res[i]<<" ";
}
void solve1(){
    int a,b,c;
    cin>>a>>b>>c;
    // Checking wether you can do it or not

    if((b == 1 && c == 1) || a%b == c){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        vector<int>res;
        cout<<a<<endl;
        for(int i=0; i < a; i++){
            res.push_back(1);
        }
        for(auto it:res)cout<<it;
    }
    
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve1();
        cout<<endl;
    }
}