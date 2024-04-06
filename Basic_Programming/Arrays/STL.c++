#include <iostream>
#include <vector>
//The header file <vector> required for the vector usage
using namespace std;

void print_array(int array[],int n){
    cout<<"{ ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<"}"<<endl;
}

void print_vector(vector<int>v){
    cout<<"{ ";
    for(int i=0;i<v.size();i++){    //v.size :- gives the size of the vector
        cout<<v[i]<<" ";
    }
    cout<<"}"<<endl;
}

void print_vector_2(vector<int>v){
    cout<<"{ ";
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<"}"<<endl;
}

void input_vector(vector<int>&v,int n){ //For the input of the vector in a function &v should be used

    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
}

void print_2d_vector(vector<vector<int>>&v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    //STL(Standard Template Library):- Provides a collection of template functions that offer common data structures and algorithms to make programming more efficient and convenient.

    //Vector is a Dynamic array.

    //Features of Vector
    /*1.Contingous Memory
    2.Dynamic Sizing
    3.Automatic Reallocation
    4.Size and Capacity
    5.Array Like Access
    */

   //Static array declaration :- int array[10]

   //Run time array declaration :- 
    // int n;
    // cin>>n;
    // int *arr=new int[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // print_array(arr,n);

    //Extra elements could not be added to the array, after the complete insertion, since there are no spaces allocated for the array.

    // vector<int>v;   //Vector declaration
    // v.push_back(1); //v.push_back(1) :- to input into the array
    // v.push_back(2);
    // v.push_back(3);
    // cout<<endl;
    // print_vector(v);
    // v.pop_back();   //v.pop_back() :- to pop the latest input number.
    // print_vector(v);

    //Working :- When the vector's size and the capicity equals, the capacity of the vector in the memmory doubles

    //Example :- Shows the increment of size and capacity with each input

    // int n;
    // vector<int>v;
    // while(1){
    //     cin>>n;
    //     v.push_back(n);
    //     cout<<"Size :- "<<v.size()<<" Capacity :- "<<v.capacity()<<endl;
    // }

    //Example :- Input in to the vector, multiple times and print the vector

    // int n;
    // vector<int> v;
    // while(1){
    //     cout<<"Enter the Size :- ";
    //     cin>>n;
    //     input_vector(v,n);
    //     print_vector(v);
    // }


    //v.at() :- used to access the elements in the vector
    //v.clear() :- clear the vector from the vector
    
    //Types of vector initializations
    //1. Standard initialization :- vector<int> v
    //2. Defining size and default values :- vector<int>v(5,-1);
    //3.1 Defining pre defined vector :- vector<int>v={1,2,3,4,5};
    //3.2 Defining pre defined vector :- vector<int>v{1,2,3,4,5} :- Only works in the latest compiler of C++
    //4. Copying one vector to the other :- vector<int>v1={1,2,3,4,5}
    //vector<int>v(v1);

    //Example printing vector :- Method 2
    // vector<int>v;
    // int n;
    // cout<<"Enter the size of the array :- ";
    // cin>>n;
    // input_vector(v,n);
    // print_vector_2(v);
    // return 0;

    //v.empty :- gives a boolean value such that the array is empty or full

    //2D vector :- vector<vector<int>> v

    //realistic 2D array declaration :- vector<vector<int>>v(5,vector<int>(10,0));

    //Explanation :- 2D array with the name v with 5 row and 10 column with each entry as 0

    //Example :- 2D array declarationa and traversal

    // vector<vector<int>>v(5,vector<int>(10,0));
    // for(int i=0;i<v.size();i++){
    //     for(int j=0;j<v[i].size();j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //Example :- Jagged 2D array

    vector<vector<int>>v;

    vector<int>v1(5,1);
    vector<int>v2(10,2);
    vector<int>v3(8,3);
    vector<int>v4(6,4);
    vector<int>v5(2,5);

    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v4);
    v.push_back(v5);

    print_2d_vector(v);

    return 0;
}