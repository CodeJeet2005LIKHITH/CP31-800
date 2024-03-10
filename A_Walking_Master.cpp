// Maths Question
// Draw Coordinate system
// There will be two conditions
// Can go
// cannot go
// cannot go condition => b > d || slope < 1 => (d-b) < (c-a) You are covering from 45degree to 180 degree
#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    if(y1 > y2 || (y2-y1) < (x2-x1))cout<<-1;
    else{
        // By drawing we can obtian formula
        cout<<(x1-x2)+2*(y2-y1);
    }
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        solve();
        cout<<endl;
    }
}