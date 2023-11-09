#include<iostream>
using namespace std;

int main(){
	// Bitwise operations.
	/*1. Bitwise AND & 
 		2. Bitwise OR |
	 	3. Bitwise Negation ~
	  :- 2's compliment is used to store Negative values {32 or 64 bit}*/
	int a=5;
	int b=1;
	// cout<<(~b)<<endl;

	// Left and Right shift Operators
	// Left :- << ; Right :- >>
	// During the Right shift of a negative value due to the loss of a MSB, the resulting output must be a large number but the compiler handles the situation correctly and gives the correct output.

	// But in the case of Unsigned Integers, there is no luxury like this.The output will be a large number.

	// If shifted with a negative value the output will be a random garbage value.
	// There will only be a warning and a garbage value {No Error will be displayed}
	// int n=100;
	// cout<<(n>>1)<<endl;

	// Pre and Post Increment and Decrement
	// int n=10;
	// cout<<((++n)*(n++))<<endl;

	// Break :- Break the continous flow of the loop.
	// Continue :- Skip the current iteration of the loop.
	// Loop contents - continue - updation - condition...{Code segment below the continue will never be reached.}
	// if(true){
	// 	cout<<"inside if number 1"<<endl;
	// 	int a =202;
	// 	if(true){
	// 		cout<<"inside if number 2"<<endl;
	// 		cout<<a<<endl;
	// 	}
	// }

	// Variable Scoping :- Global and Local Variables.
	// Q :- why using global variables is considered to be a bad practice
	// Ans :- Non-const global variables are evil because their value can be changed by any function. Using global variables reduces the modularity and flexibility of the program. It is suggested not to use global variables in the program. Instead of using global variables, use local variables in the program.
	// Local variables are evil because their value can be changed by any function.

	// BODMAS Rule :- Not available in the computer, So it uses Operator Precedence table.

	// Practical Arithmetic calculations are to be done with proper amount of brackets to avoid any ambiguity.
	
	return 0;
}