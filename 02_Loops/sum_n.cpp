#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;
    int sum=0;
    int i = 1;    //for printing even take i=2;
    while(i<=num){
        sum = sum+i;
        i++;
    }
    cout<<sum;
    return 0;
}