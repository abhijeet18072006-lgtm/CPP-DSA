#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int i=1;
    char ch;
    while(i<=n){
        int col=1;
        while(col<=i){
            char ch = ('A'+i+col-2);
            cout<<ch;
            col++;
        }
        cout<<endl;
        i++;
    }
}