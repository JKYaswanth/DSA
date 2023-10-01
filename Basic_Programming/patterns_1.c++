#include <iostream>
using namespace std;

int main() {

  // Pattern Example 1 :- Create complete square
  // int n;
  // cout<<"Enter the Number of Rows :- ";
  // cin>>n;
  // for(int i=0;i<n;i++){
  // 	for(int j=0;j<n;j++){
  // 		cout<<"* ";
  // 	}
  // 	cout<<endl;
  // }

  // Pattern Example 2 :- Create Complete Rectangle
  // int n, m;
  // cout << "Enter height and Width :- ";
  // cin >> n >> m;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern Example 3 :- Create a hollow rectangle
  // int n, m;
  // cout << "Enter height and width :- ";
  // cin >> n >> m;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < m; j++) {
  //     if (i == 0 || i == n - 1) {
  //       cout << "* ";
  //     } else {
  //       if (j == 0 || j == m - 1) {
  //         cout << "* ";
  //       } else {
  //         cout << "  ";
  //       }
  //     }
  //   }
  //   cout << endl;
  // }

  // Pattern Example 4 :- Create right half triangle.
  // int base;
  // cout << "Enter the base length :- ";
  // cin >> base;
  // for (int i = 1; i <= base; i++) {
  //   for (int j = 0; j < i; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern Example 5 :- Inverted right half triangle
  // int base;
  // cout << "Enter the base length :- ";
  // cin >> base;
  // for (int i = base; i >= 0; i--) {
  //   for (int j = 0; j < i; j++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }

  // Pattern Example 6 :- Create right half triangle with numbers in place of
  // star.
  // int base;
  // cout << "Enter the base length :- ";
  // cin >> base;
  // for (int i = 0; i <= base; i++) {
  //   for (int j = 0; j < i; j++) {
  //     cout << j + 1 << " ";
  //   }
  //   cout << endl;
  // }

  // Pattern Example 7 :- Create Inverted numeric half pyramid
  // int base;
  // cout << "Enter the base length :- ";
  // cin >> base;
  // for (int i = base; i >= 0; i--) {
  //   for (int j = 0; j < i; j++) {
  //     cout << j + 1 << " ";
  //   }
  //   cout << endl;
  // }

  // Pattern Example 8 :- Hollow inverted triangle
  // int base;
  // cout << "Enter the base length :- ";
  // cin >> base;
  // for (int i = base; i >= 0; i--) {
  //   for (int j = 0; j < i; j++) {
  //     if(i==base){
	// 			cout<<"* ";
	// 		}
	// 		else if(i==0){
	// 			cout<<"* ";
	// 		}
	// 		else if(j==0||j==i-1){
	// 			cout<<"* ";
	// 		}
	// 		else{
	// 			cout<<"  ";
	// 		}
  //   }
  //   cout << endl;
  // }

  // Pattern Example 9 :- Solid Pyramid

/*
	int n;
	int star_count;
	cout<<"Enter n :- ";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		int gap=n-i-1;
		int gap_2=gap+(2*i+1);
		for(int j=0;j<2*n-1;j++){
			if(j<gap){
				cout<<"  ";
			}
			else if (j>=gap_2){
				cout<<"  ";
			}
			else{
				cout<<"* ";
			}
		}
		cout<<endl;
	}

	*/

	// Pattern Example 10 :- Hollow Pyramid
/*
	int n;
	int star_count;
	cout<<"Enter n :- ";
	cin>>n;
	cout<<endl;
	for(int i=0;i<n;i++){
		int gap=n-i-1;
		int gap_2=gap+(2*i+1);
		for(int j=0;j<2*n-1;j++){
			if(j<gap){
				cout<<"  ";
			}
			else if (j>=gap_2){
				cout<<"  ";
			}
			else if(j==gap||j==gap_2-1||i==n-1){
				cout<<"* ";
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}

*/
  return 0;
}