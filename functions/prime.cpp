#include<iostream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    for(int div=2;div<=sqrt(num);div++){
          if(num%div==0){
              return false;
          }
    }
    return true;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    
    return 0;
}