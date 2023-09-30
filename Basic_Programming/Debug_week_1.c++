// Debug_Problem_1
// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }
// Solution_1 :- Change the || of the comparison to &&

// Debug_Problem_2
/*
Pattern
1
23
345
4567
*/
/*#include<iostream>
using namespace std;

int main(){
    int n;
		cout<<"Enter the Base :- ";
		cin>>n;
		cout<<"\n";
	
    int i=1;
    while(i<=n){
        int j = i,count = 1;
        while(count<=i){
            cout<<j;
            j = j + 1;
            count = count + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}*/
/*Solution :- 1.Take input for n,
2.change the inner while range till equal to i*/

// Debug_Problem_3
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
/*
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j = i,count = 2*n,gaps=(n-i),k=1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        int m = 1,ch = count - 2*gaps;
        while(m<ch){
            cout<<"*";
            m = m + 1;
        }
        k = 1;
        while(k<=gaps){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
*/
/*Solution :- 1. Change the count to 2*n to print the odd number stars on the screen

2. Run the loops for the gap till the gap value.*/

// Debug_Problem_4
/*
Pattern
N = 4
1
22
333
4444
*/
/*
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
	cout<<"\n";
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
	        cout<<i;
        }
    cout<<endl;
    }
}
*/
/*Solution :- 1. Change the termination of the inner loop from n to i.

2. Run both loops till the termination equates to the limit.*/

// Debug_Problem_5

/*
Pattern
N = 4
1
21
321
4321
*/
/*
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
	cout<<endl;
    for(i=1;i<=n;i++){
       int p=i;
        for(j=1;j<=i;j++){
          cout<<p;
          p--;
        }
        cout<<endl;
        
    }
}
*/

/*
Solution :- 1. Run the outer loop till n
2. Assign i to p
3. Run the inner loop till i
*/ 

// Debug_Problem_6
/*
Pattern
N = 5
E
DE
CDE
BCDE
ABCDE
*/
/*
#include<iostream>
using namespace std;

int main() {
    int i,j,n;;
    cin>>n;
	cout<<endl;
    for(i=n;i>0;i--){
        char p='@'+i;
        for(j=0;j<=n-i;j++){
            cout<<p;
            p++;  
        }
        cout<<endl;
    }
}
*/

/*
Solution :- 1. Start the outer loop from n till 1{not until 0}
2. Change p to '@'+1
3. Start the inner loop from 0 till n-i
*/

// Debug_Problem_7

/*
Pattern
N = 4
   1
  232
 34543
4567654
*/
/*
#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
	cout<<endl;
    int i=1;
    int n = 2*no;
    while(i<=(no)){
        int gaps = n-2*i+1,k=1;
        int j = i;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n - gaps + 1, z = (ch+1)/2;
        while(z>=1){
            cout<<j;
            j = j + 1;
            z = z - 1;
        }
        j = j - 1;
        z = (ch-1)/2;
        while(z>=1){
            j = j - 1;
            cout<<j;
            z = z - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}
*/

/*
Solution :- 1. Changed in second loop to z-1
2. Changed second inner loop terminating condition till 1
3. Changed inner loop to j+1
*/ 

// Debug_Problem_8

/*
Pattern
N = 5
  *
 ***
*****
 ***
  *
*/
#include <iostream>
using namespace std;

void printPatt(int n){
     int i=1;
    while(i<=(n)){
        int gaps = n-2*i+1,k=1;
        if(i>(n+1)/2){
            int no = (n+1)/2;
            gaps = 2*(i%no);
        }
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        int ch = n -gaps;
        while(ch>=1){
            cout<<"*";
            ch = ch - 1;
        }
        k = 1;
        while(k<=gaps/2){
            cout<<" ";
            k = k + 1;
        }
        cout<<"\n";
        i = i + 1;
    }
}

int main(){
	int n;
	cout<<"Enter the n : ";
	cin>>n;
	printPatt(n);
	return 0;
}

// void printPatt(int n){
//     int i=1;
//     while(i<=(n)){
//         int gaps = n-2*i+1,k=1;
//         if(i>(n+1)/2){
//             int no = (n+1)/2;
//             gaps = 2*(i%no);
//         }
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps;
//         while(ch>=1){
//             cout<<"*";
//             ch = ch - 1;
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

/*Solution :- 1. Enter the preprocessor directives and the required header files
2. Enter the int main function and input the value n and call the function.
3. Not Able to solve.
*/ 

// Result :- 9/10 :[