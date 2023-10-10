#include<iostream>
using namespace std;
int main(){
    // check the input is upper, lower or digit
    // char a;
    // cin>>a;
    // if(a>='a' && a<='z'){
    //     cout<<a<<" is a lower case charactor"<<endl;
    // }
    // else if(a>='A' && a<='Z'){
    //     cout<<a<<" is a upper case charactor"<<endl;
    // }
    // else if(a>='0' && a<='9'){
    //     cout<<a<<" is a digit"<<endl;
    // }
    // else{
    //     cout<<"invalid charactor";
    // }

    //sum of n numbers
    // int a,i=1,sum=0;
    // cin>>a;
    // while(i<=a){
    //     sum+=i;
    //     i++;
    // }
    // cout<<sum;

    //sum of even numbers
    // int a,sum=0,i=2;
    // cin>>a;
    // while (i<=a)
    // {
    //     if(i%2==0){
    //         sum+=i;
    //     }
    //     i++;
    // }
    // cout<<sum;


    //prime number
    // int i=2,n,x=0;
    // cin>>n;
    // while(i<n){
    //     if(n%i==0){
    //         x++;
    //     }
    //     i++;
    // }
    // if(x==0)
    // cout<<"Prime";
    // else
    // cout<<"Not Prime";



    //pattern 1
    // int n,i=0;
    // cin>>n;
    // while(i<n){
    //     int j=0;
    //     while(j<n){
    //         cout<<"*";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }


    //pattern 2
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=0;
        while(j<n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }


}