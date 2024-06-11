#include <iostream>
using namespace std;
void printspan(int arr[],int n){
    for(int i=0;i<n;i++){
           int count=1;
        for(int j=i-1;j>=0&&arr[j]<=arr[i];j--){
            
            count++;
            
        }
        cout<<count<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    printspan(arr,n);

    return 0;
}