// Learnings from this problem
// Giving Attention to the Constraints
// Learnt about s.find()
#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,m;
        cin>>n>>m;
        string s,t;
        cin>>s>>t;
        int found = 0;
        for(int i=0; i <= 5; i++){
            if(s.find(t) != string::npos){
                cout<<i<<endl;
                found = 1;
                break;
            }
            s = s.append(s);
        }
        if(!found)cout<<-1<<endl;
    }
}
