// C Program to illustrate the static variable lifetime
#include <stdio.h>
  
// function with static variable
int fun()
{
    static int count = 0; // declaration with static 
    count++;
    return count;
}
  
int main()
{
    printf("%d ", fun()); // result : 1 
    printf("%d ", fun()); // result : 2
    return 0;
}


// 

// C program to illustrate the default value of static
// declaration variables with static
#include <stdio.h>
  
int main()
{
    static int x; // x =0 
    int y; // undefine
    printf("%d \n%d", x, y);
}













