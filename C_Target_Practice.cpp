#include<bits/stdc++.h>
using namespace std;
void solve(){
        int arr[10][10] = {
                {1,1,1,1,1,1,1,1,1,1},
                {1,2,2,2,2,2,2,2,2,1},
                {1,2,3,3,3,3,3,3,2,1},
                {1,2,3,4,4,4,4,3,2,1},
                {1,2,3,4,5,5,4,3,2,1},
                {1,2,3,4,5,5,4,3,2,1},
                {1,2,3,4,4,4,4,3,2,1},
                {1,2,3,3,3,3,3,3,2,1},
                {1,2,2,2,2,2,2,2,2,1},
                {1,1,1,1,1,1,1,1,1,1}
    };
    char c[10][10];
    int Score = 0;
    for(int i=0; i < 10; i++){
        for(int j=0; j < 10; j++){
            cin>>c[i][j];
            if(c[i][j] == 'X')Score += arr[i][j];
        }
    }
    cout<<Score;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}