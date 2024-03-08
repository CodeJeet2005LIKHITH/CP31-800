#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        // Intution : important Sentence "After Vanya's it should be divisible by 3"
        // Let us take n = 3
        // Vanya's hasn't taken any move so divisbility not applies, she will do +1 => 3+1 = 4
        // Voya's move 4-1 = 3
        // Vanya's turn ; even now divisibilty apply nahi hoga bcz vanya ne move nahi liya so vanya will do +1
        // We can see a loop here when we have a number which is divisible by 3
        if(n%3)cout<<"First"<<endl;
        else cout<<"Second"<<endl; 
    }
}