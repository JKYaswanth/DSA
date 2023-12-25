// Functions homework
#include <cmath>
#include <iostream>
using namespace std;

float area_circle(int r) { return M_PI * r * r; }
int factt(int n) {
  if (n == 1) {
    return 1;
  } else {
    return n * factt(n - 1);
  }
}

bool prime(int n) {
  int flag = 0;
  if (n == 1) {
    return false;
  } else {
    for (int i = 2; i <= n / 2; i++) {
      if (n % i == 0) {
        return false;
        flag = 1;
        break;
      }
    }
    if (flag == 0) {
      return true;
    }
  }
}

void prime_n(int n) {
  for (int i = 1; i <= n; i++) {
    if (prime(i)) {
      cout << i << "	";
    }
  }
}

void print_digits(int n) {
  int rem;
  while (n) {
    rem = n % 10;
    n /= 10;
    cout << rem << "	";
  }
}

float km_to_miles(int n) { return n * 0.621371; }

int count_set_bits(int n) {
  int num = 0;
  while (n) {
    if (n & 1) {
      num++;
    }
    n = n >> 1;
  }
  return num;
}

bool even_odd_bitwise(int n) {
  if (n & 1) {
    return false;

  } else {
    return true;
  }
}

// int dec_to_bin(int n){
// 	int int_dec=int(n);	//integer part of float n
// 	int bin=0;

// 	// Conversion of integer part of float n to binary form
// 	while(int_dec){
// 		int rem=int_dec%2;
// 		if(rem){
// 			bin=bin*10+1;
// 		}
// 		else{
// 			bin=bin*10;
// 		}
// 		int_dec/=2;
// 	}
// 	return bin;

// }

int dec_to_bin(int n) {
  int bin = 0;
  int base = 1;

  // Conversion of integer n to binary form
  while (n > 0) {
    int rem = n % 2;
    bin += rem * base;
    base *= 10;
    n /= 2;
  }
  return bin;
}

int main() {

  // Problem 1 :- Area of the Cirlce
  // int r;
  // cout << "Enter the radius of the circle : ";
  // cin >> r;

  // float area = area_circle(r);
  // cout << "Area of the circle is : " << area;

  // Problem 2 :- Factorial of Number
  // int n;
  // cout << "Enter the number : ";
  // cin >> n;

  // int fact = factt(n);

  // cout << "The Factorial :- " << fact;

  // Problem 3 :- Primes from 1 to N
  // int n;
  // cout << "Enter the number : ";
  // cin >> n;

  // prime_n(n);

  // Problem 4 :- Prints the digits in the number
  // int n;
  // cout << "Enter the number : ";
  // cin >> n;
  // print_digits(n);

  // Problem 5 :- KM to miles
  // int n;
  // cout << "Enter the Distance in KM : ";
  // cin >> n;
  // float miles = km_to_miles(n);
  // cout << "Distance in Miles : " << miles;

  // Problem 6 :- temperature conversion is very easy, we just need to input
  // what are the conversion attributes.

  // Problem 7 :- Count all set bits in a number.
  // int n;
  // cout << "Enter the number : ";
  // cin >> n;

  // int set_bits = count_set_bits(n);
  // cout << "The Number of set bits in the number is : " << set_bits;

  // Problem 8 :- Check if a number is Even/Odd using bit-wise

  // int n;
  // cout << "Enter the number : ";
  // cin >> n;

  // if(even_odd_bitwise(n)){
  // 	cout << "The number is even";
  // }
  // else{
  // 	cout<<"The number is odd";
  // }

  // Problem 9 :- Binary representation of a number.

  int n;
  cout << "Enter the number : ";
  cin >> n;

  int bin = dec_to_bin(n);
  cout << "The binary representation of the number is : " << bin;

  return 0;
}