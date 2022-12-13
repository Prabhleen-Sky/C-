#include <iostream>
#include <climits>
using namespace std;
int main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxN = INT_MIN, minN = INT_MAX;
    for(int i=0;i<n;i++){
        maxN =max(maxN,arr[i]);
        minN = min(minN,arr[i]);
    }

    cout<<"max "<<maxN<<" min "<<minN;
    return 0;
}