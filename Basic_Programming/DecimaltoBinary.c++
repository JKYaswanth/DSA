#include<iostream>
#include<cmath>
using namespace std;

double DecimaltoBinary(int n){
    double binary=0;
    double i=0;
    double bit;
    while(n>0){
        bit=n%2;
        binary+=bit*pow(10.0,i);
        // cout<<"bin : "<<bit<<"and binary : "<<binary<<"when i : "<<i<<endl;
        n/=2;
        i++;
    }
    return binary;
}
double DecimaltoBinary_bitwise(int n){
    double binary=0;
    double i=0;
    double bit;
    while(n>0){
        bit=n&1;
        binary+=bit*pow(10,i++);
        n=n>>1;
    }
    return binary;
}
int main(){
    int n;
    cout<<endl<<"Enter the Decimal Number : ";
    cin>>n;
    cout<<endl;
    int bin=DecimaltoBinary(n);
    cout<<"The Binary value of "<<n<<" : "<<bin<<endl;
    int bin_bit=DecimaltoBinary_bitwise(n);
    cout<<"The Binary value of "<<n<<" bitwise : "<<bin_bit<<endl;
    // cout<<pow(10,2);
    return 0;
}