#include <iostream>
using namespace std;
void previous_greater_element(int arr[],int n){
 for(int i=0;i<n;i++){
  int j;
  for( j=i-1;j>=0;j--){
   if(arr[j]>arr[i]){
   cout<<arr[j]<<" ";
   break;
    }
  }
    if(j==-1)
    cout<<"-1"<<" ";
  
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
 previous_greater_element(arr,n);

    return 0;
}