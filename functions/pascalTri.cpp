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
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}