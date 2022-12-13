#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    arr[n] = -1;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<'1'<<endl;
        return 0;
    }

    int mx = -1;
    int day=0;
    for(int i=0;i<n;i++){
        if(arr[i]>mx && arr[i]>arr[i+1]){
            day++;
        }
        mx = max(mx,arr[i]);
    }

    cout<<day<<endl;

    return 0;
}