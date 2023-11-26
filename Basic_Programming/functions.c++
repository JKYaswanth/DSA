#include<iostream>
using namespace std;

void printline(int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"Ryuki Tenkai"<<endl;
	}
}

int printsum(int a,int b,int c){
	int res;
	res=a+b+c;
	cout<<"Sum :- " << res <<endl;
	return res;
}

int maxi(int a,int b, int c){
	int max;
	if(a>b){
		if(a>c){
			max=a;
			cout<<"The maximum value :- " << max <<endl;
		}
		else{
			max=c;
			cout<<"The maximum value :- " << max <<endl;
		}
	}
	else{
		if(b>c){
			max=b;
			cout<<"The maximum value :- " << max <<endl;
		}
		else{
			max=c;
			cout<<"The maximum value :- " << max <<endl;
		}
	}
	return max;
}

void printn(int n){
	for(int i=1;i<=n;i++){
		cout<<i<<"	";
	}
	cout<<endl;
}

void prime(int n){
	if(n==1){
		cout<<"Neither Prime nor Composite"<<endl;
	}
	else if(n==2){
		cout<<"Only Prime that is Even"<<endl;
	}
	else{
		int flag=1;
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				flag=0;
				break;
			}
		}
		if(flag==0){
			cout<<n<<" is not a Prime Number.[Composite]"<<endl;
		}
		else{
			cout<<n<<" is a Prime Number."<<endl;
		}
	}
}

bool even_odd(int n){
	if(n%2==0){
		return true;
	}
	else{
		return false;
	}
}

int sumn(int n){
	int sum=0;
	for(int i=1 ; i<=n ; i++){
		sum+=i;
	}
	return sum;
}

int sum_even(int n){
	int sum=0;
	for(int i=2 ; i<=n ; i+=2){
		sum+=i;
		// cout<<i<<endl;
	}
	return sum;
}

int main(){
	// Function :- A subprograme which is linked to well defined tasks.
	// What does Functions resolve in a Programme ?
	// Ans :- 1.Makes the more readable.	2.Bugs could be resolved more easily.	3.It makes the code less Bulky/Lengthy.
	// <return type> <function name>(<input parameters>)
	// To use a function u need to call it somewhere
	// return 0 in main programme :- Indicates the succesful completetion of the main programme.
	// Function declaration :- declaring a function with return type, function name and the input parameters without providing the logic of the function.
	// Function Definition :- Function declaration with the programming logic in the body.
	// Function should be declared before calling it in a programme
	// Function call stack is used to track the functions called and their return sequence.

	// Example 1 :-
	/*int n;
	cout<<"Enter the repetion :- ";
	cin>>n;
	printline(n);*/
	
	// Example 2 :- Input 3 numbers, add them and print the result and also store it in the main
	// int a,b,c;
	// cout<<"Enter a :- ";
	// cin>>a;
	// cout<<"Enter b :- ";
	// cin>>b;
	// cout<<"Enter c :- ";
	// cin>>c;
	// int res;
	// res=printsum(a,b,c);
	// cout<<"Main Summation :- "<<res<<endl;

	// Example 3 :- program to print the maximum of 3 numbers
	// int a,b,c,max;
	// cout<< "Enter a :- ";
	// cin>>a;
	// cout<< "Enter b :- ";
	// cin>>b;
	// cout<< "Enter c :- ";
	// cin>>c;

	// max=maxi(a,b,c);
	// cout<<"The max returned to main :- "<<max<<endl;

	// Example 4 :- Count from 1 to N

	// int n;
	// cout<<"Enter N :- ";
	// cin>>n;
	// printn(n);

	// Example 5 :- Check prime or not

	// int n;
	// cout<<"Enter the number :- ";
	// cin>>n;
	
	// prime(n);

	// Example 6 :- Check even or odd
	// int n;
	// cout<<"Enter the number :- ";
	// cin>>n;

	// bool check=even_odd(n);

	// if(check){
	// 	cout<<n<<" is an Even Number."<<endl;
	// }
	// else{
	// 	cout<<n<<" is an Odd Number."<<endl;
	// }

	// Example 7 :- Sum of all upto Numbers upto 1 to N and even numbers from 1 to N
	// int n;
	// cout<<"Enter N :- ";
	// cin>>n;
	// int sum=sumn(n);
	// cout<<"Sum :- "<<sum<<endl;
	// int even=sum_even(n);
	// cout<<"Sum of Even Numbers :- "<<even<<endl;
	
	return 0;
}