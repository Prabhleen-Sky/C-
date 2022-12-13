#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int fac=1;
    for(int i=1;i<=n;i++){
        fac = fac*i;    
    }
    cout<<fac;
    return 0;
}
