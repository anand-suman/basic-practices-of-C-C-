// jab v koi funtion khud ke term me defind hota hai use hum recursion kahte hai
/*
 if the input size in samll no resursion id needed , we can answer directly.
 if the input size in large or hard to solve then we can't answer directly, that means we go for the recursion

while writing the code for recusion if n is the of n{ allways assume that ew know the answer of small soze problem}
------------------------------------------------------------------------------------------------------------------

a^b
b>=0
a>0

================================ recursion tree ============================================================================
void fun(int n)
    {
       
        if(n<=0)
        {
            return;
        }
        else
        {
            //fun(n-1);
           printf("%d\n",n);// recersive call
            fun(n-1);
        }
    }
                                    f(4)
                                   /     \    
                                fun(3)    pf(4)
                                /    \
                          fun(2)   pf(3)
                        /     \
                   fun(1)    pf(2)
                   /    \
             fun(0)    pf(1)


             trace this tree from top to bottom and left to right            
 

*/

#include<stdio.h>
 void fun(int n) 
    {
       
        if(n<=0)
        {
            return;
        }
        else
        {
            fun(n-1);
           printf("%d\n",n);// recersive call
            fun(n-1);
        }
    }
//  int power(int a,int b)
//     {
       
//         if(b==0)
//         {
//             return 1;
//         }
//         else
//         {
//             return (a*power(a,b-1));// recersive call
//         }
//     }
//  void print(int n)
//     {
//         if(n==1)
//         {
//             printf("Anand ");
//         }
//         else
//         {
//             printf("Anand ");
//             print(n-1);// recersive call
//         }
//     }
int main()
{
    //exam 01
   int n;
   //print(20);
   //exam 02
    // n=power(5,4);
    // printf("%d", n);
    fun(3);

    return 0;
}