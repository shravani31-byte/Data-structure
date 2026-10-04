#include<iostream>
using namespace std;
void Insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
           while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the number of elements in array:";cin>>n;
    int arr[n]={};
    cout<<"Enter the element of the array:";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    Insertion_sort(arr,n);
    cout<<"Sorted array is:";
    for(int i=0;i<=n-1;i++){
        cout<< arr[i]<<" ";

    }

}