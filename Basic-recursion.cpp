// #include<iostream>
// using namespace std;
// void f(int i, int n){
//     if(i>n){
//         return;
//     }
//     cout<<"Shravani";<<endl;
//     f(i=i+1,n);
// }
// int main(){
//     int n;
//     int i=1;
//     cout<<"Enter the number of times name should be printed:";cin>>n;
//     f(i,n);
// }

// #include<iostream>
// using namespace std;
// void f(int i, int n){
//     if(n<i){
//         return;
//     }
//     cout<<n<<endl;
//     f(i,n=n-1);
    
// }
// int main(){
//     int i=1;
//     int n;
//     cout<<"Enter the number till you want to print:";cin>>n;
//     f(i,n);
// }

// recursive function for sum of n numbers
#include<iostream>
using namespace std;
void f(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    f(i-1,sum+i);
}
int main(){
    int i=0;
    int sum=0;
    cout<<"Enter the number to print sum:";cin>> i;
    f(i,sum);
}