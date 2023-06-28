

// pass by value 
#include<stdio.h>
void swap(int a,int b){
   int t; 
   t=a; 
   a=b;
   b=t; 
} // b = a – b;
//a = a – b;
void main(){
   void swap(int,int);
   int a,b;
   printf("enter 2 numbers");
   scanf("%d%d",&a,&b);
   printf("Before swapping a=%d b=%d",a,b);
   swap(a,b);
   printf("after swapping a=%d, b=%d",a,b);
}

