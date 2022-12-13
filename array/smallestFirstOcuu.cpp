#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int in = -1;
    int ans = INT_MAX;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                in = i+1;
                ans = min(ans,in);
            }
        }
    }
    
    cout<<ans<<endl;
    
    return 0;
}