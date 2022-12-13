#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;

    for(int div=2; div<n;div++){
        if(n%div==0){
            cout<<div<<" ";
        }
    }
    return 0;
}
