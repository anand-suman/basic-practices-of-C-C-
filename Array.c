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

         





*/


int main()
{
    int a;// 1 variable
    int b[4];// collection of multiple variable , sab me garbage value hoga
    int c[4]={3,4};//collection of 4 variable but 2 place pe value or baki ke place pe 0 asign ho jaye ga
    //int d[-2];// invalid or inliagal
    //int d[0];// invalid or inliagal
    
    // printf("%d",a);// garbage
    // printf("%d",b[0]);// garbage

    // printf("%u",a);// addres of 1st element 
    // printf("%u",&a[0]);// addres of 1st element 
                // Numarical  value same but first => adress of an element of 4bype 
                                            //second => "    "  "     "    of 16 Byte
    // printf("%u",&a);
return 0;
}