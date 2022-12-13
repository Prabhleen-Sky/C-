#include <iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int ro,col;
    cin>>ro>>col;
    
    for(int i =0;i<ro;i++){
        for(int j=0;j<col;j++){
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
    return 0;
}