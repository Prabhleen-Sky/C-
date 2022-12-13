#include<iostream>
#include <math.h>
using namespace std;

void factorial(int n){
    int fac=1;
    for(int i=2;i<=n;i++){
         fac = fac*i;
    }
    cout<<"factorial of "<<n<<" is "<<fac<<endl;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,a;
    cin>>n>>a;
    
    factorial(n);
    factorial(a);
    return 0;
}