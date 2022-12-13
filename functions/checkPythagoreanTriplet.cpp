#include<iostream>
using namespace std;

void isTriplet(int a, int b, int c){
    int big = max(a,max(b,c));
    int sum = a*a + b*b + c*c - big*big;
    if(sum == (big*big)){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}

int main(){
    
    int a, b, c;
    cin>>a>>b>>c;
    isTriplet(a,b,c);
    return 0;
}