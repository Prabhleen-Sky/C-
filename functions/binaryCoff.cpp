#include<iostream>
#include <math.h>
using namespace std;

int factorial(int n){
    int fac=1;
    for(int i=2;i<=n;i++){
         fac = fac*i;
    }
    return fac;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,r;
    cin>>n>>r;
    
    int res = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<res<<endl;
    return 0;
}