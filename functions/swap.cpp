#include<iostream>
using namespace std;

void swap(int a,int b){
     int c = a;
     a = b;
     b = c;
     cout<<"After swaping Ist "<<a<<" 2nd "<<b<<endl;
     return;
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b;
    cin>>a>>b;
    cout<<"Ist "<<a<<" 2nd "<<b<<endl;
    swap(a,b);
    return 0;
}