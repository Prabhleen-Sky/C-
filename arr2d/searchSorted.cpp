#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    
    cout<<"Input ele of arr"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int ele;
    cin>>ele;
    
    int r=0, c=m-1;
    bool found=false;
    while(r<n && c>=0){
        if(arr[r][c]==ele){
            found=true;
        }
        if(arr[r][c]>ele){
            c--;
        }
        else{
            r++;
        }
    }
    
    if(found){
        cout<<"found";
    }else{
        cout<<"not found";
    }
   
    return 0;
}