
// #include<iostream>
// using namespace std;

//Debug Problem 1 :- Area of the Rectangle

// #include<iostream>
// using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	double area = width * height;   //The Data type of the area was changed to 'double' to service the floating point as per the height and width
// 	cout << area << endl;
// 	return 0;
// }

// Debug Problem 2 :- Convert Binary to Decimal.
//The Logic was inverted in the digit and the n divison
// #include<iostream>
// using namespace std;

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n%10; //This line is supposed to give the LSB
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n/10; //This line removes the LSB from the number
//     }
//     cout<<sum;
//     return 0;
// }

// Debug Problem 3 :-Print all the prime numbers that lie in the range 2 to N (both inclusive)

// #include<iostream>
// using namespace std;

// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<i/2;j++){ //Do not loop till the half of the number which will result in errors.
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }

// Debug Problem 4 :- Print reverse of a number.
// No Errors Found in this code snippet.

// #include<iostream>
// using namespace std;

// int main() {
// 	int n,a=0;
// 	cin>>n;
//     int z = n,digits=0;
//     while(z!=0){
//         z = z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k = n%10,z=digits-1;
//         while(z--){
//             k = k*10;
//         }
//         a = a + k;
//         digits--;
//         n = n/10;
//     }
//     cout<<a;
//     return 0;
// }

// Debug Problem 5 :- Return true if the number is member of fibonacci series else false.

// Main code snippet created

// bool checkMember(int n){    //the return type change from void to bool
//     int f1 = 1, f2 = 1;
//     if(n==0 && n==1){
//         return false;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return false;
//             }
//             else if(temp>n){
//                 return true;
//             }
//         }
//     }
// }

// //The inversion of the bool values,. i..e, true to false.

// int main(){
//     int n;
//     cout<<"Enter the number :- ";
//     cin>>n;
    

//     if(checkMember(n)){
//         cout<<"Number "<<n<<" is on the Fibonacci Series\n\n";
//     }
//     else{
//         cout<<"Number "<<n<<" is not on the Fibonacci Series\n\n";
//     }

//     return 0;
// }

// Debug Problem 6 :-Correct the code for printing the pattern.
//No Errors Found

// #include<iostream>
// using namespace std;

// /*
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
// */

// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-1;
//     while(i<n){
//         int k=0,gaps=n-1-i;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
//     return 0;
// }

// Debug Problem 7 :-Correct the code for printing the pattern.
/*

//Solution :- The code was not for the given programme hence I made my own programme

Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-1;
//     while(i<n){
//         int k=1,gaps=n-i;
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }

// my code :- 

// #include<iostream>
// using namespace std;

// int main(){

//     int i=0,j,gaps,n,k;

//     cout<<"Enter the Base number :- ";
//     cin>>n;
//     k=n;

//     while(k>0){
//         /*Straight Number Line*/
//         for(i=0;i<k;i++){
//             cout<<i+1;
//         }
//         /*Gaps with the stars*/
//         for(i=0;i<n-k;i++){
//             cout<<"**";
//         }
//         /*Reverse Number line*/
//         for(i=k;i>0;i--){
//             cout<<i;
//         }
//         k--;
//         cout<<"\n";
//     }
//     return 0;
// }

//Debug Problem 8 :- Debug the code. Find the second largest in the code

// #include<iostream>
// using namespace std;
// #include <climits>


// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
// 	    if(max<arr[i]){
// 	      max=arr[i];
//       }
//      }
//      int second = INT_MIN;
//      for(int i=0;i<n;i++){
// 	     if(max>arr[i] && arr[i]>second){
// 	       second = arr[i];
//        }
//      }
//      cout<<second;
// 		 return 0;
// }

//Debug Problem 9 :- Debug the code. To recreate the given pattern.

// Solution :- reverse the loop iterations to decrement{both inner and outer loop}

// #include<iostream>
// using namespace std;

// /*
// Pattern for N = 4
// 4444
// 333
// 22
// 1
// */

// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=n;i>=1;i--){
//         for(j=i;j>=1;j--){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }
