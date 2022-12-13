#include <iostream>

using namespace std;

int linear(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    
    cout<<"size :"<<endl;
    int n;
    cin>>n;
    
    int arr[n];

    cout<<"Input elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"input key"<<endl;
    int key;
    cin>>key;

    cout<<linear(arr,n,key);
    return 0;
}