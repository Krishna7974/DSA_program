#include<iostream>
using namespace std;

// int main()
// {
    // int a,b;
    // char x;
    // cout<<"enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"enter the value of b: "<<endl;
    // cin>>b;
    // cout<<"enter the operator: "<<endl;
    // cin>>x;
    // switch(x){
    //     case '+':cout<<a+b<<endl;
    //              break;
    //     case '-':cout<<a-b<<endl;
    //              break;
    //     case '*':cout<<a*b<<endl;
    //              break;
    //     case '/':cout<<a/b<<endl;
    //              break;
    //     default: cout<<"Invalid operator"<<endl;
    // }

//    int amount;
//    cin>>amount;
//    int rs100,rs50,rs20,rs1;
//    switch(1){
//         case 1: rs100=amount/100;
//                 amount%=100;
//                 cout<<"100 notes: "<<rs100<<endl;

//         case 2: rs50=amount/50;
//                 amount%=50;
//                 cout<<"50 notes: "<<rs50<<endl;

//         case 3: rs20=amount/20;
//                 amount%=20;
//                 cout<<"20 notes: "<<rs20<<endl;

//         case 4: rs1=amount/1;
//                amount%=1;
//                cout<<"1 notes: "<<rs1<<endl;

//    }
   
// }

int even(int x){
    
    if(x%2==0)
        cout<<"even";
    else
        cout<<"odd";
}

int main(){
    int x;
    cin>>x;
    even(x);
}

