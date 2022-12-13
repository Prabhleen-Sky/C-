# include <iostream>
using namespace std;

int main(){
    
    int n;
    cout<<"enter length of word"<<endl;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cout<<"enter sentence"<<endl;
    cin.getline(arr,n);
    cin.ignore();

    int max=0,currLength=0,i=0;
    int st=0, mxst=0;

    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currLength>max){
                max=currLength;
                mxst=st;
            }
            currLength=0;
            st=i+1;
        }else{
             currLength++;
        }
 
        if(arr[i]=='\0')
           break;
           
        i++;
    }

    cout<<max<<endl;
    for(int i=0;i<max;i++){
        cout<<arr[i+ mxst];
    }

    return 0;
}