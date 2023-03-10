#include<iostream>
#include<stdio.h>
using namespace std;
#define N 5

void transpose(int A[][N], int B[][N])
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
}
  

int main()
{
   
     int A[N][N];
    std::cout<<"enter elements of the matrix \n";
     for(int i = 0 ; i<N;i++)
     {
        for(int j=0;j<N;j++)
        {
            std::cin>>A[i][j];
        }
     }
      cout << "inital matrix is \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << " " << A[i][j];
  
        cout << "\n";
    }
  
    int B[N][N];
  
    transpose(A, B);
  
    cout << "final matrix is \n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cout << " " << B[i][j];
  
        cout << "\n";
    }
    return 0;
}