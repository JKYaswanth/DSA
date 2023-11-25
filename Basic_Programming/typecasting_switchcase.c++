#include<iostream>
using namespace std;

int main(){
	// Typecasting :- To change one Datatype to another without changing the core values.

	// Implicit Typecasting :- Automatically converted by the compiler itself.{Promotes one type to a larger type to maintain precisison}

	// Explicit Typecasting :- aka Manual Type Conversion, casting operator is used.

	// Simple calculator using switch case
	float a,b;
	cout<<"Enter two numbers :- ";
	cin>>a>>b;
	float ans=0;
	int op;
	cout<<"Enter the operation code you want to perform :- ";
	cin>>op;

	switch(op){
		case 0:
			ans = a+b;
			break;

		case 1:
			ans=a-b;
			break;

		case -1:
			ans=b-a;
			break;

		case 2:
			ans=a*b;
			break;

		case 3:
			ans=a/b;
			break;

		case -3:
			ans=b/a;
			break;

		default:
			cout<<"Invalid Operation Code";
			return 0;
	}
	cout<<"The Answer :- "<<ans;
	return 0;
}