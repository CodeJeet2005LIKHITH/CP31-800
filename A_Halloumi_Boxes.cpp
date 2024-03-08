#include<bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n){
    for(int i=0; i < n-1; i++){
        if(arr[i] > arr[i+1])return false;
    }
    return true;
}
int main(){
    int tc;
    cin>>tc;
    // Sorting things according to non descending order of their respective ai's
    // We can only reverse size of at most k(will be given in the question) subarray at a time
    // finding the correct case if(k == 1 and the array is not sorted then it is not possible to sort the input)
    while(tc--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i =0; i < n; i++){
            cin>>arr[i];
        }
        if(k == 1 && !sorted(arr,n))cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }




}