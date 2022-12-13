#include <iostream>
using namespace std;
int main (){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=i;
        int j;
        for(j=1;j<=n-i;j++){
            cout<<" "<<" ";
        }
        for(;j<=n;j++){
            cout<<k<<" ";
            k--;
        }
        k=2;
         for(;j<=n+i-1;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}