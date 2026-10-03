#include<iostream>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0;i<=n-2;++i){
      int min =i;
         for(int j=0;j<=n-1;++j){
           if(arr[j]<arr[min]){
             swap(arr[min],arr[j]);
           }
      }
    }
}
int main(){
   int n;
   cout<<"Enter the number of element in arr:"; cin>>n;
   cout<<"Enter the arr:";
   int arr[n]={};
   for(int i=0;i<=n;i++) cin >> arr[i];
   cout<<arr;
   return 0;
   
}