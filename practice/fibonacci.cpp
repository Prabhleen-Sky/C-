#include<iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    if(n==1){
        cout<<'0'<<endl;
    }else if(n==2){
        cout<<"0 1"<<endl;
    }else{
        int a=0, b=1,i=3,c;
         cout<<a<<" "<<b<<" ";
        while(i<=n){
            c = a+b;
            cout<<c<<" ";
            a = b;
            b = c;
            i++;
        }
     
    }
    return 0;
}
