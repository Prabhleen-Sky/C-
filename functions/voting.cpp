#include<iostream>
using namespace std;

void eligible(int age){
    if(age<18){
        cout<<"not eligible for voting";
    }else{
        cout<<"Yes, can vote";
    }
}

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int age;
    cin>>age;
    eligible(age);
    return 0;
}