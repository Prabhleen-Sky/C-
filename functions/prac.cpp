#include<iostream>
using namespace std;

int max(int a, int b, int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}

int min(int a, int b, int c){
    if(a<b){
        if(a<c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b<c){
            return b;
        }else{
            return c;
        }
    }
}

int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    cout<<"max "<<max(n1,n2,n3)<<endl;
    cout<<"min "<<min(n1,n2,n3)<<endl;
    return 0;
}