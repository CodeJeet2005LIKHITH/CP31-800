#include<bits/stdc++.h>
using namespace std;
bool unsorted(vector<long long>&arr){
    for(long long i=1; i < arr.size(); i++){
        if(arr[i-1] > arr[i])return true;
    }
    return false;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        long long n = 0;
        cin>>n;
        vector<long long>arr(n,0);
        for(int i=0; i < arr.size();i++)cin>>arr[i];
        if(unsorted(arr)){
            cout<<0<<endl;
        }   
        else{
            sort(arr.rbegin(),arr.rend());
            long long ans = (arr[0]-arr[1])/2 + 1;
            cout<<ans<<endl;
        }

    }
}
// #include<bits/stdc++.h>
// using namespace std;
/*
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
            int count = 0;
            while(one <= two){
                count++;
                one++;
                two--;
            }
            cout<<count<<endl;
        }
        

    }
    

}
* Giving TLE beacuse constraints are upto 10^9/ 
*/
