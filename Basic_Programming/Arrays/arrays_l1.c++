//What is an Array

/*List of Similar items
Collection of elements
Data Structure
Continous Memory block*/

/*int arr[100] :- integer type continous memmory of size 4*100 bytes, this is a static array declaration*/

//int a=5 :- a block in the memmory which contains the value and symbol table maps the variable name to the address where the value 5 is stored.

//int a[100] :- 100 blocks of continous memmory, which is accessed by base address of the a in the symbol table.

#include<iostream>
#include<limits.h> 
// the limits.h has the definitions for the INT_MIN and INT_MAX which is -2^31 and 2^31-1
using namespace std;

void print_array(int array[],int n){
    cout<<"{ ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<"}"<<endl;
}

bool linear_search(int array[],int size,int key){
    for(int i=0;i<size;i++){
        if(array[i]==key){
            return true;
        }
    }
    return false;
}

int min_num(int array[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(min>array[i]){
            min=array[i];
        }
    }
    return min;
}

void rev_arr(int array[],int size){
    int left=0;
    int right=size-1;

    while(left<right){
        swap(array[left],array[right]);
        left++;
        right--;
    }
}

void ext_array(int array[],int size){
    int left=0;
    int right=size-1;

    while(left<=right){
        if(left==right){
            cout<<array[left]<<endl;
        }else{
            cout<<array[left]<<" "<<array[right]<<endl;
            left++;
            right--;
        }
        
    }
}

int main(){

    // int arr[100];
    // cout<<"Address of arr : "<<&arr<<endl;
    /*Whether I use &arr or arr it will give me the same hexa decimal value*/

    // int a=5;
    // cout<<"Size of the declared int :- "<<sizeof(a)<<endl;

    // int arr2[100];
    // cout<<"Size of the declared int array :- "<<sizeof(arr2)<<endl;

    //The sizeof keyword helps to find the total bytes used by a declared variable.

    /*Types of array initialization.
    1. undefined size but defined array :- int arr[]={1,2,3,4,5}
    
    2. Defined size and defined array :- int arr[5]={1,2,3,4,5}
    
    the above one could have less elements but not greater elements. */

    // Variable array size input can throw errors _Solution _ Dynamic Arrays.

    // types of indexing - 0 or 1 based indexing

    // int arr[]={1,2,3,4,5};
    // cout<<arr[1]<<endl;

    // int arr[5]={1,2,3,4,5};
    // int n=5;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<endl;
    // }

    // what is the meaning of arr[i]??
    // value at (base address + data type*i)

    //Example 1 :- Take array input and double each entry by 2

    // int arr[10];
    // for(int i=0;i<10;i++){
    //     cin>>arr[i];
    // }
    // cout<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<endl;
    // }
    // for(int i=0;i<10;i++){
    //     arr[i]*=2;
    // }
    // cout<<endl;
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<endl;
    // }



    // Example 2 :- To print the sum of an array

    // int sum =0;
    // int array[5];
    // for(int i=0;i<5;i++){
    //     cin>>array[i];
    //     sum+=array[i];
    // }

    // cout<<endl<<"The Array :- { ";
    // for(int i=0;i<5;i++){
    //     cout<<array[i]<<" ";
    // }
    // cout<<"} "<<endl;
    // cout<<"Sum of the array :-"<<sum<<endl;

    // Example 3 :- Linear Search

    // int array[10]={1,2,3,4,5,6,7,8,9,10};
    // int key;
    // int flag=0;
    // cout<<"Enter the Key to be searched in the array :- ";
    // cin>>key;
    // for(int i=0;i<10;i++){
    //     if(array[i]==key){
    //         cout<<"Key found in the Index :- "<<i<<endl;
    //         flag=1;
    //         break;
    //     }
        
    // }
    // if(flag==0){
    //     cout<<"Key Not Found"<<endl;
    // }

    // Array and functions :- pass array name and the size of the array

    int array[]={87,65,7,72,8,22,95,6,20,6,49};

    //array print function main programme :-

    // int n;
    // cout<<"Enter a Number below 10 : ";
    // cin>>n;

    // if(n>10){
    //     cout<<"Size Overload"<<endl;
    // }
    // else{
    //     print_array(array,n);
    // }

    // array linear search main programme :-

    // int size=10;
    // int key;
    // cout<<"Enter the key to be searched :- ";
    // cin>>key;
    // bool opt=linear_search(array,size,key);
    // if(opt==true){
    //     cout<<"The Key is present in the Array"<<endl;
    // }else{
    //     cout<<"The Key is not present in the Array"<<endl;
    // }

    // Find the min number in the array :- always initialize the variable to contain the min number as INT_MAX since every number in the array should be less than this. Vice versa for the max number in the array.

    // int size=12;
    // int min=min_num(array,size);
    // cout<<"The min number in the array :- "<<min<<endl;

    //Reverse the array without creating a new array
    // int size=11;
    // cout<<"The Array before the reversal :- ";
    // print_array(array,size);
    // rev_arr(array,size);
    // cout<<"The Array after the reversal :- ";
    // print_array(array,size);

    //Extreme print in an array
    int size=11;

    cout<<"The Original array :- ";
    print_array(array,size);
    cout<<endl;
    cout<<"The Extremes :- "<<endl;
    ext_array(array,size);

    return 0;
}