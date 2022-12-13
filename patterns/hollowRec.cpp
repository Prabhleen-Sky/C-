#include <iostream>
using namespace std;
int main (){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col){
                cout<<'*';
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}