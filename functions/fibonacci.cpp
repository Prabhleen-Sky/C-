#include<iostream>
#include <math.h>
using namespace std;

void fibonacci(int n){
    int a=0, b=1,c;
    for(int i=1; i<=n;i++){
            cout<<a<<" ";
            c = a+b;
            a = b;
            b = c;
    }
    return;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    
    fibonacci(n);
    
    return 0;
}