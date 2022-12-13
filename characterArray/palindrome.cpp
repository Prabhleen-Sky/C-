#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter length of word"<<endl;
    cin>>n;
    
    char arr[n+1];
    cout<<"enter ur word"<<endl;
    cin>>arr;
    
    bool flag=true;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            flag=false;
            break;
        }
    }

    if(flag){
        cout<<arr<<" is palindrome"<<endl;
    }else{
        cout<<arr<<" is not palindrome"<<endl;
    }

   return 0;
}