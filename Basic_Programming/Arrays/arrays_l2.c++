#include<iostream>
using namespace std;

int main(){

    int n =5;
    int k=n;
    int &j=n;

    cout<<"The values of n,k,j before the changes :- "<<n<<k<<j<<endl;

    n=6;

    cout<<"The values of n,k,j after the changes :- "<<n<<k<<j<<endl;

    //Here the n and k are standard static variables on the other hand j is a reference variable.

    //int &t=6 is illegal, since it should be an allias to the original variable

    // hence if a function, is calling void function(int n) :- call by value and void function(int &n) :- call by reference

    return 0;
}
