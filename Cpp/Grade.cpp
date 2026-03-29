// Ask user marks and print corresponding grade.
#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Please enter your marks here : ";
    cin>> marks;
    if (marks < 25) {
        cout<<"F";
    }
    else if (marks <= 44) {
        cout<<"E";
    }
    else if (marks <= 49 ){
        cout<<"D";
    }
    else if (marks <= 59 ){
        cout<<"C";
    }
    else if (marks <= 79 ){
        cout<<"B";
    }
    else if (marks <= 100 ){
    }
    else {
        cout<<" Invalid ";
    }
    return 0 ;
}