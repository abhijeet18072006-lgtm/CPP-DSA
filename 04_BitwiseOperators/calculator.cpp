#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<"Enter the operation you want to perform"<<endl;
    char opr;
    cin>>opr;
    switch(opr){
        case '-': cout<<a-b<<endl;
            break;
        case '+': cout<<a+b<<endl;
            break;
        case '*': cout<<a*b<<endl;
            break;
        case '/': cout<<a/b<<endl;
            break;
        case '%': cout<<a%b<<endl;
            break;
        default: cout<<"Please enter a valid operation "<<endl;
            break;
    }
    return 0;
}