#include <iostream>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;
    cin>>n;
   
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
           if(j==1||j==i){
             cout<<"*";
           }else{
               cout<<" ";
           }
       }
       for(int j=1;j<=(2*n-2*i);j++){
           cout<<" ";
       }
       for(int j=1;j<=i;j++){
           if(j==1||j==i){
             cout<<"*";
           }else{
               cout<<" ";
           }
       }
       cout<<endl;
   }
   for(int i=n;i>0;i--){
       for(int j=1;j<=i;j++){
           if(j==1||j==i){
             cout<<"*";
           }else{
               cout<<" ";
           }
           
       }
       for(int j=1;j<=(2*n-2*i);j++){
           cout<<" ";
       }
       for(int j=1;j<=i;j++){
           if(j==1||j==i){
             cout<<"*";
           }else{
               cout<<" ";
           }
       }
       cout<<endl;
   }
   return 0;
    
}