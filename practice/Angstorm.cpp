#include <iostream>
#include <math.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n;
    cin>>n;
    int num=n;
    int sum=0;
    while(n>0){
        int rem=n%10;
        sum += round(pow(rem,3));
        n = n/10;
    }
    if(sum==num){
        cout<<"Armstorng";
    }else{
        cout<<"Not armstrong";
    }
    return 0;
}