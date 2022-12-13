#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    int s;
    cin>>s;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sm=0;
    for(int i=0;i<n;i++){
        sm = 0;
        for(int j=i;j<n;j++){
            sm+=arr[j];
            if(sm==s){
                cout<<i+1<<" "<<j+1<<endl;
                return 0;
            }
        }
    }
    cout<<"-1";
    
    return 0;
}