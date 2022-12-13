#include<iostream>
using namespace std;
void isAlphabet(char ch){
    if((65<=ch && ch<=90) || (97<=ch && ch<=113)){
        cout<<"an alphabet";
    }else{
        cout<<"not an alphabet";
    }
    return;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char c;
    cin>>c;
    isAlphabet(c);
    return 0;
}