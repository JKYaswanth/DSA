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
    vector<int>v;
    int n;
    cout<<"Enter the size of the array :- ";
    cin>>n;
    input_vector(v,n);
    print_vector_2(v);
    return 0;
}