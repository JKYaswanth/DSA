#include<iostream>
using namespace std;

int uq_element(int array[],int size){
    int uq=0;
    for(int i=0;i<size;i++){
        uq^=array[i];
    }
    return uq;
}

void print_pairs(int array[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            cout<<"("<<array[i]<<","<<array[j]<<")"<<"\t";
        }
        cout<<endl;
    }
}

void print_pairs_unique(int array[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            cout<<"("<<array[i]<<","<<array[j]<<")"<<"\t";
        }
        cout<<endl;
    }
}

void print_triples(int array[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=j;k<size;k++){
                cout<<"("<<array[i]<<" "<<array[j]<<" "<<array[k]<<")\t";
            }
            cout<<endl;
        }
    }
}

void sort01(int array[],int size){
    int count_0=0;
    for(int i=0;i<size;i++){
        if(array[i]==0){
            count_0+=1;
        }
    }
    for(int i=0;i<count_0;i++){
        array[i]=0;
    }
    for(int i=count_0;i<size;i++){
        array[i]=1;
    }
}

void print_array(int array[],int n){
    cout<<"{ ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<"}"<<endl;
}

void shift_array(int array[],int size){
    int temp,temp_1;
    int i;
    for(i=1;i<size;i++){
        if(i==1){
            temp=array[i];
            array[i]=array[i-1];
        }
        else{
            temp_1=array[i];
            array[i]=temp;
            temp=temp_1;
        }
    }
    array[0]=temp_1;
}

void shift_array_times(int array[],int size,int time){
    for(int i=0;i<time;i++){
        shift_array(array,size);
    }
}

int main(){

    // int array[]={2,10,11,10,2,13,15,13,15};
    // int size=9;
    //Example 1 :- Get the unique element in the provided array

    // int unique=uq_element(array,size);
    // cout<<"The Unique element in the array :- "<<unique;

    //Example 2:- Print all the pairs in the array
    // int array[]={10,20,30};
    // int size=3;

    // print_pairs(array,size);
    // cout<<endl;
    // print_pairs_unique(array,size);

    //Example 3 :- Print all the triplets in the array

    // int array[]={1,2,3,4,5};
    // int size=5;
    // print_triples(array,size);

    //Example 4 :- Sort all O's and 1's

    // int array[]={0,1,0,1,1,0,0,0,0};
    // int size=9;
    // sort01(array,size);
    // cout<<endl;
    // print_array(array,size);

    //Example 5 :- Sort all 0's and 1's using two pointer approach

    // int array[]={0,1,0,1,1,0,0,0,0};
    // int size=9;
    // sort_2_pointer(array,size);
    // cout<<endl;
    // print_array(array,size);

    //Example 6 :- Shift the array to Right

    int array[]={10,20,30,40,50,60};
    int size=6;

    shift_array_times(array,size,2);
    cout<<endl;
    print_array(array,size);

    return 0;
}