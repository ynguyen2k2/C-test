//Constant Pointers
// if a constant pointer is pointing to some variable, 
//then it cannot point to any other pointer.
#include <stdio.h>  
int main()  
{  
    int a=1;  
    int b=2;  
    int *const ptr;  
    ptr=&a;  
    ptr=&b;  
    printf("Value of ptr is :%d",*ptr);  
    return 0;  
}  

//Pointer to Constant
//The address of these pointers can be changed, 
//but the value of the variable that the pointer
//points cannot be changed.
#include <stdio.h>  
int main()  
{  
    int a=100;  
    int b=200;  
    const int* ptr;  
    ptr=&a;  
    ptr=&b;  
    printf("Value of ptr is :%u",ptr);  
    return 0;  
}  
