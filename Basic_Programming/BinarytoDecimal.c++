#include<iostream>
#include<cmath>
using namespace std;

int BinarytoDecimal(int n){
    int decimal=0;
    int i=0;
    int bit;
    while(n){
        bit=n%10;
        decimal+=bit*pow(2,i++);
        n/=10;
    }
    return decimal;
}

int BinarytoDecimal_bit(int n){
    int binary=0;
    int bit;
    int i=0;
    while(n){
        bit=n&1;
        binary+=bit*pow(2,i++);
        n=n>>1;
    }
    return binary;
}

int main(){
    int n;
    cout<<"Enter the binary number : ";
    cin>>n;
    int decimal=BinarytoDecimal(n);
    cout<<endl<<"The Decimal value : "<<decimal<<endl;
    cout<<"The Decimal value but Bitwise : "<<decimal<<endl;
    return 0;
}