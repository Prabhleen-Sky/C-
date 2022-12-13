#include <iostream>
using namespace std;

int HToD(int n){
    int ans =0, last, base=1;
    while(n>0){
        last = n%10;
        ans += last*base;
        base *= 16;
        n =n/10;
    }
    return ans;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    
    cout<<HToD(n)<<endl;
    return 0;
}