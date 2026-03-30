#include<iostream>
using namespace std;
int main(){
    string s="Read";
    int len=s.size();
    s[len-1] ='l';
    cout<<s[len-1];
    return 0 ;
}
