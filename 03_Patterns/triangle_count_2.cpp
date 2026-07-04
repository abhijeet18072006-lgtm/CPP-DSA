#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number";
    cin>>n;
    int row=1;
    int count = 1;
    while(row<=n){
        int col=1;
        int value=row;
        while(col<=row){
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}