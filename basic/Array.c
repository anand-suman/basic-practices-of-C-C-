#include<stdio.h>


// 1. Address 
//2. Address of operator (&)
//3. value of opreter(*)
/*
 int a= 10;
 &a= memory location 2024

 *( ) address

 *(&a)=value at (2024)

    =10
    *&a= a

    * and & bahut bare dusman hai ek dusre ko khatm kar deta hai
     
     why array?
     => when ever we want to use same type of variable then the recamented to use array

     =>array collectin of same type of variable
     => array name represent address of its first element and it is the const address
     => Array name con not be Lvalue  faor assignment optreter 
     => we can nit apply inc/dec operators in contort /literals
     =>             --
     Array_name ++ ;  |
     ++Array_name  ;  |
     --Array_name  ;  | => All are invalid
     Array_name -- ;  |
                    --  
    %u not to be negative
    => array name does not rep an address with 2 operator ( &,  sizeof)
    =>a=&a[0]
    => &a => we are talking about address og whole arrays(16 Bytes)
    => address +1 = address
    => address + value = address
    => value + address = address
    => address + address = not addres not valid

======================================================================================================================================

=> if the declarationod an array has n-dimensions then
                                            a) Anywhere other then declaration is we give exactly n-dimention => element 
                                            b) if we be give the less then n-dimaention => address

         
*(a+1)=a[1] <=>  *(1+a)

*(a+2)=a[2]

*(a+i)=a[i] <=> *(i+a)
a[i]<=> i[a]



*/


// int main()
// {
//     // int a;// 1 variable
//     // int b[4];// collection of multiple variable , sab me garbage value hoga
//     // int c[4]={3,4};//collection of 4 variable but 2 place pe value or baki ke place pe 0 asign ho jaye ga
//     //int d[-2];// invalid or inliagal
//     //int d[0];// invalid or inliagal
    
//     // printf("%d",a);// garbage
//     // printf("%d",b[0]);// garbage

//     // printf("%u",a);// addres of 1st element 
//     // printf("%u",&a[0]);// addres of 1st element 
//                 // Numarical  value same but first => adress of an element of 4bype 
//                                             //second => "    "  "     "    of 16 Byte
//     // printf("%u",&a);

//     // int a[4]={10,20,30,40};
//     int a[5]={10,20,30,40,50};
//     // printf("%d\n",a[2]);
//     // printf("%d",*(a+2));

//     // printf("%d\n",a[1]);
//     // printf("%d\n",*(a+1));
//     // printf("%d\n",1[a]);
//     // printf("%d\n",*(1+a));



//     // printf("%u\n",a);//addres of 1st elements
//     // printf("%u\n",&a);//address of whole addres
//     // printf("%u\n",a+1);// address of of 2nd element
//     // printf("%u\n",&a+1);//Adddress of entire array(20 bytes)

//     return 0;
// }

//=============================================================== 2D ARRAY =============================================================================

/*
 *(a[0]+1) = a[0][1]
 *(a[0]+2) = a[0][2]
 *(a[0]+j) = a[0][j]


 *(a[i]+j) = a[j][j] <=> *(*(a+i)+j )

*/




// int main()
// {
//  int a[2][3]={1,2,3,4,5,6,};

// //  printf("%u\n",a);
// //  printf("%u\n",a[0]);  //sab same hai
// //  printf("%u\n",&a);


// //  printf("%u\n",a+1);
// //  printf("%u\n",a[0]+1);
// //  printf("%u\n",&a+1);




//     return 0;
// }


//=============================================================== POINTERS =============================================================================

/*
 Pointer is a special variable which is used to hold address of other variable

 int *p  => pointer veriable  p can hold the address of integer variable

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% COMPLEX DECLARATION %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

    () => funtion (1, L to R)
    [] => Array   (1, L to R) 
    identifier      (2, R to L)
    *               (2, R to L)
    data  type      (3)

Function Ponter

int (*p)(int , int)
p is a pointe to function that takes two integer arguments and return an integer

we can store the addres of function 

int* (*p)[4]; p is a pointer to an array of 4 int *a[4]; pointer to integer 

*/

int add(int, int);
int sub(int, int);
int mul(int, int);
void f(int (*)(int,int ),int, int);//what is this
// int main()
// {
//     // int x=10;
//     // int *p;
//     // p=&x;
//     // int x=100;
//     // int x=165;

//     // char *p=&x;

//     // printf("%u",p);
//     // // printf("\n%u",&p);
//     // printf("\n%d",*p);
//     // int a[4]={10,20,30,40};
//     // int *p;
//     // p=&a[0];
//     // printf("%d\n",*++p);
//     // // ++*p;
//     // printf("%d\n",++*p);
//     // ++p;
//     // printf("%d",*++p);

// int(*p)(int,int);
// int a=10,b=30,sum;
// p = &add;
// sum = (*p)(a,b);
// printf("%d",sum);


//     return 0;
// }
int main()
{
    int (*p)(int , int);
    int a=10,b=20;

p=add;
f(p,a,b);
p=sub;
f(p,a,b);
p=mul;
f(p,a,b);

    return 0;
}
int add(int x, int y)
{
    return x+y;
}


int sub(int x, int y)
{
    return x-y;
}


int mul(int x, int y)
{
    return x*y;
}


void f(int (*p)(int x, int y), int a, int b)
{
    printf("%d",(*p)(a,b));
}

