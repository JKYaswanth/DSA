#include<iostream>
#include<limits.h>
using namespace std;

void input_matrix(int mat[][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<"Row : "<<i<<" Col : "<<j<<" :- "; 
            cin>>mat[i][j];
        }
        cout<<endl;
    }
}

void output_matrix(int mat[][10],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool search_matrix(int mat[][10],int row,int col,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

int max_matrix(int mat[][10],int row,int col){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]>max){
                max=mat[i][j];
            }
        }
    }
    return max;
}

int min_matrix(int mat[][10],int row,int col){
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]<min){
                min=mat[i][j];
            }
        }
    }
    return min;
}

void row_sum(int mat[][10],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=mat[i][j];
        }
        cout<<"Sum of Row "<<i+1<<" :- "<<sum<<endl;
        sum=0;
    }
}

void col_sum(int mat[][10],int row,int col){
    int sum=0;
    for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            sum+=mat[j][i];
        }
        cout<<"Sum of Column "<<i+1<<" :- "<<sum<<endl;
        sum=0;
    }
}

int diag_sum(int mat[][10],int row,int col){
    int sum=0;
    for(int i=0;i<row;i++){
        sum+=mat[i][i];
    }
    return sum;
}

int rev_diag(int mat[][10],int row,int col){
    int diag=col-1;
    int sum=0;
    for(int i=0;i<row;i++){
        int c=diag-i;
        sum+=mat[i][c];
    }
    return sum;
}

void transpose(int mat[][10],int& row,int& col){

    //Explanation :- The upper half triangle of the square is traversed

    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
            swap(mat[j][i],mat[i][j]);
        }
    }
    swap(row,col);
}

int main(){

    //int arr[i][j] :- i - number of rows, j - number of columns

    //In the background, it is still stored as a contingous memmory in the system.

    //Mapping Formula :- c*i+j :- c : total number of columns in the 2D array
    //This will show the position of the block in the continous allocation

    //during the declaration int arr[][j] is legal
    //but int arr[][] or int arr[i][] is illegal, since the column numbers are required for the mapping to the memmory :- this also applies to the intialization during functions.

    // int arr[2][2]={
    //     {1,1},
    //     {2,2}
    // };

    //Two types of access :-  Row wise and Column wise access

    // Example :- Below input,output and search in the 2D array
    
    // int i,j;
    // cout<<"Enter Row and Column :- ";
    // cin>>i>>j;
    // int mat[10][10];
    // input_matrix(mat,i,j);
    // output_matrix(mat,i,j);
    // int key;
    // cout<<endl<<"Enter the Key to be searched :- ";
    // cin>>key;
    // if(search_matrix(mat,i,j,key)){
    //     cout<<key<<" is found in the matrix"<<endl;
    // }else{
    //     cout<<key<<" is not found in the matrix"<<endl;
    // }

    //Example :- To find min and max in the Matrix
    // int mat[10][10];
    // int i,j;
    // cout<<"Enter the number of Row and Column :- ";
    // cin>>i>>j;
    // input_matrix(mat,i,j);
    // output_matrix(mat,i,j);
    // int max=max_matrix(mat,i,j);
    // int min=min_matrix(mat,i,j);
    // cout<<"The Max Number in the Matrix :- "<<max<<endl;
    // cout<<"The Min Number in the Matrix :- "<<min<<endl;

    //Example :- To find the sum of Row,Column and Diagonal

    // int mat[10][10]={
    //     {2,4,6},
    //     {8,3,5},
    //     {7,9,1}
    // };
    // int i=3,j=3;
    // output_matrix(mat,i,j);
    // cout<<endl;
    // row_sum(mat,i,j);
    // cout<<endl;
    // col_sum(mat,i,j);
    // cout<<endl;
    // int d_sum=diag_sum(mat,i,j);
    // cout<<"The Diagonal Sum :- "<<d_sum<<endl;
    // int rev_sum=rev_diag(mat,i,j);
    // cout<<"The Reverse Diagonal Sum :- "<<rev_sum<<endl;

    //Example :- Transpose a Matrix without creating a new matrix.{Square}

    int mat[10][10]={
        {2,4,6,8},
        {8,3,5,7},
        {7,9,1,10}
    };
    int i=3,j=4;
    cout<<"Matrix before Transpose :- "<<endl;
    output_matrix(mat,i,j);
    cout<<endl;
    transpose(mat,i,j);
    cout<<"Matrix after Transpose :- "<<endl;
    output_matrix(mat,i,j);
    cout<<endl;


    return 0;
}