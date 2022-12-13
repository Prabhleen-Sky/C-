#include <iostream>
using namespace std;
int main (){

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<k;
            k--;
        }
        k=2;
         for(int j=n+2-i;j<=n;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
    return 0;
}