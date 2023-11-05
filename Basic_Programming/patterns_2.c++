#include <iostream>
using namespace std;

int main(){
	// Pattern 1 : Pyramid with sequential numbers of stars printing.
	// int row;
	// cout<<"Enter the Base :- ";
	// cin>>row;
	// cout<<endl;
	// int col=2*row;
	// int gap,j,star_count;
	// for(int i=0;i<row;i++){
	// 	gap=row-i-1;
	// 	star_count=i+1;
	// 	for(j=0;j<gap;j++){
	// 		cout<<" ";
	// 	}
	// 	for(j=0;j<star_count;j++){
	// 		cout<<"* ";
	// 	}
	// 	cout<<endl;
	// }

	//Pattern 2 :- Inverted Full Pyramid
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int star,space;

	// for(int i=0;i<n;i++){
	// 	star=n-i;
	// 	space=i;
	// 	for(int j=0;j<space;j++){
	// 		cout<<" ";
	// 	}
	// 	for(int j=0;j<star;j++){
	// 		cout<<"* ";
	// 	}
	// 	cout<<endl;
	// }

	//Pattern 3 :- Diamond Shape
	// int row;
	// cout<<"Enter the Base :- ";
	// cin>>row;
	// cout<<endl;
	// int col=2*row;
	// int gap,j,star_count;
	// for(int i=0;i<row;i++){
	// 	gap=row-i-1;
	// 	star_count=i+1;
	// 	for(j=0;j<gap;j++){
	// 		cout<<" ";
	// 	}
	// 	for(j=0;j<star_count;j++){
	// 		cout<<"* ";
	// 	}
	// 	cout<<endl;
	// }
	// int star,space;
	// for(int i=0;i<row;i++){
	// 	star=row-i;
	// 	space=i;
	// 	for(int j=0;j<space;j++){
	// 		cout<<" ";
	// 	}
	// 	for(int j=0;j<star;j++){
	// 		cout<<"* ";
	// 	}
	// 	cout<<endl;
	// }

	//Pattern 4 :- Hollow Pyramid with no base.
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int count=1;
	// for(int i=0;i<n;i++){
	// 	int space=n-i-1;
	// 	for(int j=0;j<space;j++){
	// 		cout<<" ";
	// 	}
	// 	for(int j=0;j<count;j++){
	// 		if(j==0||j==count-1){
	// 			cout<<"*";
	// 		}
	// 		else{
	// 			cout<<" ";
	// 		}
	// 	}
	// 	count+=2;
	// 	cout<<endl;
	// }

	//Pattern 5 :- Inverted Hollow Pyramid with no base.
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int count=2*(n-1)+1;
	// int space;
	// int j;
	// for(int i=n;i>0;i--){
	// 	space=n-i;
	// 	for(j=0;j<space;j++){
	// 		cout<<" ";
	// 	}
	// 	for(j=0;j<count;j++){
	// 		if(j==0||j==count-1){
	// 			cout<<"*";
	// 		}
	// 		else{
	// 			cout<<" ";
	// 		}
	// 	}
	// 	count-=2;
	// 	cout<<endl;
	// }

	//Pattern 6 :- Hollow Diamond Shape
	// int n;
	// int j;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int space,count;
	// count=1;
	// for(int i=0;i<n;i++){
	// 	space=n-i-1;
	// 	for(j=0;j<space;j++){
	// 		cout<<" ";	
	// 	}
	// 	for(j=0;j<count;j++){
	// 		if(j==0||j==count-1){
	// 			cout<<"*";
	// 		}
	// 		else{
	// 			cout<<" ";
	// 		}
	// 	}
	// 	count+=2;
	// 	cout<<endl;
	// }
	// count=2*(n-1)+1;
	// for(int i=n;i>0;i--){
	// 	space=n-i;
	// 	for(j=0;j<space;j++){
	// 		cout<<" ";
	// 	}
	// 	for(j=0;j<count;j++){
	// 		if(j==0||j==count-1){
	// 			cout<<"*";
	// 		}
	// 		else{
	// 			cout<<" ";
	// 		}
	// 	}
	// 	count-=2;
	// 	cout<<endl;
	// }

	// Pattern 7 :- Cuboid with hollow diammond inside. A.K.A Flipped Solid Diamond.
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int space=1;
	// int star=n;
	// for(int i=0;i<n;i++){
	// 	for(int j=star;j>0;j--){
	// 		cout<<"*";
	// 	}
	// 	for(int j=0;j<space;j++){
	// 		cout<<" ";
	// 	}
	// 	space+=2;
	// 	for(int j=star;j>0;j--){
	// 		cout<<"*";
	// 	}
	// 	star-=1;
	// 	cout<<endl;
	// }
	// space-=2;
	// star+=1;
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<star;j++){
	// 		cout<<"*";
	// 	}
	// 	for(int j=0;j<space;j++){
	// 		cout<<" ";
	// 	}
	// 	space-=2;
	// 	for(int j=0;j<star;j++){
	// 		cout<<"*";
	// 	}
	// 	star+=1;
	// 	cout<<endl;
	// }

	// Pattern 8 :- Pyramid with Odd Column as Row number and the even column as star.
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// for(int i=1;i<=n;i++){
	// 	for(int j=1;j<=2*i-1;j++){
	// 		if(j%2!=0){
	// 			cout<<i<<" ";
	// 		}
	// 		else{
	// 			cout<<"* ";
	// 		}
	// 	}
	// 	cout<<endl;
	// }

	// Pattern 9 :- Extension of Pattern 8 for a complete cycle.
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// for(int i=1;i<=n;i++){
	// 	for(int j=1;j<=2*i-1;j++){
	// 		if(j%2!=0){
	// 			cout<<i<<" ";
	// 		}
	// 		else{
	// 			cout<<"* ";
	// 		}
	// 	}
	// 	cout<<endl;
	// }
	// n-=1;
	// for(int i=n;i>=1;i--){
	// 	for(int j=1;j<=2*i-1;j++){
	// 		if(j%2!=0){
	// 			cout<<i<<" ";
	// 		}
	// 		else{
	// 			cout<<"* ";
	// 		}
	// 	}
	// 	cout<<endl;
	// }

	// Pattern 10 :- Inverted Hollow Pyramid
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// for(int i=n;i>0;i--){
	// 	for(int j=0;j<i;j++){
	// 		if(i==n||i==1||i==2||j==0||j==i-1){
	// 			cout<<"*";
	// 		}
	// 		else{
	// 			cout<<" ";
	// 		}
	// 	}
	// 	cout<<endl;
	//}

	// Pattern 11 :- A weird ass pattern given at time :- 1:21:00 of the Advanced Patterns.

	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// if(n==1){
	// 	cout<<"1";
	// }
	// else if (n==2){
	// 	cout<<"1"<<endl<<"12";
	// }
	// else{
	// 	cout<<"1"<<endl;
	// 	for(int i=3;i<=n;i++){
	// 		for(int j=0;j<i;j++){
	// 			if(j==0){
	// 				cout<<"1";
	// 			}
	// 			else if(j==i-1){
	// 				cout<<i-1;
	// 			}
	// 			else{
	// 				cout<<" ";
	// 			}
	// 		}
	// 		cout<<endl;
	// 	}
	// 	for(int i=0;i<n;i++){
	// 		cout<<i+1<<"";
	// 	}
	// 	cout<<endl;
	// }

	// Pattern 12 :- Alphabet Pattern 1
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	char ch='A';
	// 	int j;
	// 	for(j=0;j<=i;j++){
	// 		/*cout<<j+1<<" ";*/
	// 		cout<<ch<<" ";
	// 		ch=ch+1;
			
	// 	}
	// 	ch=ch-1;
	// 	for(;j<2*i+1;j++){
	// 		/*cout<<2*i+1-j<<" ";*/
	// 		ch=ch-1;
	// 		cout<<ch<<" ";
			
	// 	}
	// 	cout<<endl;
	// }

	// Pattern 13 :- Numeric Hollow Inverted half pyramid.
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int reset=1;
	// for(int i=n;i>0;i--){
	// 	int count=reset;
	// 	for(int j=0;j<i;j++){
	// 		if(i==n||i==1||j==0||j==i-1){
	// 			cout<<count;
	// 			count++;
	// 		}
	// 		else{
	// 			cout<<" ";
	// 			count++;
	// 		}
	// 	}
	// 	reset++;
	// 	cout<<endl;
	// }

	// Pattern 14 :- Numeric Palindrome Equialteral Pyramid
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int space;
	// int num;
	// for(int i=0;i<n;i++){
	// 	space=n-i-1;
	// 	for(int j=0;j<space;j++){
	// 		cout<<"  ";
	// 	}
	// 	num=i+1;
	// 	for(int j=0;j<num;j++){
	// 		cout<<j+1<<" ";
	// 	}
	// 	if(i!=0){
	// 		for(int j=i;j>0;j--){
	// 			cout<<j<<" ";
	// 		}
	// 	}
	// 	cout<<endl;
		
	// }

	// Pattern 15 :- Pattern H/W 2
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int star=2*n-2;
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<star;j++){
	// 		cout<<"*";
	// 	}
	// 	for(int j=0;j<2*i+1;j++){
	// 		if(j%2==0){
	// 			cout<<i+1;
	// 		}
	// 		else{
	// 			cout<<"*";
	// 		}
	// 	}
	// 	for(int j=0;j<star;j++){
	// 		cout<<"*";
	// 	}
	// 	star--;
	// 	cout<<endl;
	// }

	// Pattern 16 :- Solid Half Diamond
	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<=i;j++){
	// 		cout<<"*";
	// 	}
	// 	cout<<endl;
	// }
	// n--;
	// for(int i=n;i>0;i--){
	// 	for(int j=0;j<i;j++){
	// 		cout<<"*";
	// 	}
	// 	cout<<endl;
	// }

	// Pattern 17 :- Floyd's Triangle.

	// int n;
	// cout<<"Enter the Base :- ";
	// cin>>n;
	// int sum=1;
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<=i;j++){
	// 		cout<<sum<<" ";
	// 		sum++;
	// 	}
	// 	cout<<endl;
	// }

	// Pattern 18 :- Butterfly Pattern.
	int n;
	cout<<"Enter the Base :- ";
	cin>>n;
	int space=2*(n-1);
	for(int i=0;i<n;i++){
		int j;
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		for(j=0;j<space;j++){
			cout<<" ";
		}
		space-=2;
		for(j=0;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	n--;
	space=2;
	for(int i=n;i>0;i--){
		int j;
		for(j=0;j<i;j++){
			cout<<"*";
		}
		for(j=0;j<space;j++){
			cout<<" ";
		}
		for(j=0;j<i;j++){
			cout<<"*";
		}
		space+=2;
		cout<<endl;
	}
	return 0;
}