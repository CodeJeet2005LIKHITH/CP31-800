
#include<bits/stdc++.h>
using namespace std;

bool unsorted(int arr[],int n){
    for(int i=0; i < n-1; i++){
        if(arr[i] > arr[i+1])return true;
    }
    return false;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i < n; i++)cin>>arr[i];
        
        if(unsorted(arr,n)){
            
            cout<<0<<endl;
        }
        else{
            int mini = INT_MAX;
            int one = 0;
            int two = 0;
            for(int i=1; i < n; i++){
                if(mini > arr[i]-arr[i-1]){
                    mini = arr[i]-arr[i-1];
                    two = arr[i];
                    one = arr[i-1];
                }
            }
            /*
            int count = 0;
            while(one <= two){
                count++;
                one++;
                two--;
            }
            cout<<count<<endl;

            =>Replacing this with a formula
            */

           cout<<mini/2+1<<endl;
        }
        

    }
    

}

