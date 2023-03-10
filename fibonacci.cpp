#include<stdio.h>
#include<iostream>

int fibonacci(int n){
    int ans=0;
   if(n<=1)
   {
    ans=n;
   }
    ans = fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int main(){
    int n;
    std::cin>>n;
    fibonacci(n);
}