#include <iostream>
using namespace std;

int OToD(int n){
    int ans=0, last, x=1;
    while(n>0){
        last = n%10;
        ans += last*x;
        x *= 8;
        n = n/10;
    }
    return ans;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    
    cout<<OToD(n)<<endl;
    return 0;
}