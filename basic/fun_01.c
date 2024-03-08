#include<stdio.h>

int main()
{
    /*function apne aap me ek program hai like aise samjh skta hu,
    like ek machine jisak ek special task karta hai
    
    fun(int);// compiler assuming that the return type of the funtion is integr bydefolt
    int main()
    {
        int x; 
        x=fun(10);
        printf("%d", x);
        return 0;

        double fun(int y) // it will give the error bcz bydefolt compiler stor the funtion return type is integer but we difind the funtion return type in double
        {
            double temp= 12.43;
            return temp*y;
        }
    }
============================================ Srorage class =============================

1.=> scope:- part of program/code in which a variable can be accessed (visibility of variable)


2.=> Ligetime:- Duration (Active/alive)

3.=> Degault value:- what is the value of variable id we don't initialize it.

4.=> storage Area:- where a variable is stored


 
+++++++++++++++++++++++++++ AUTO +++++++++++++++++++++++++++++++++++++++++++++++++++
       1.=> SCOPE :- "block in which they are declared".
       2.=> LIGETIME:- "block in which they are declared"
       3.=> DEGAULT VALUE:- "garbage"
       4.=> STPRAGE AREA:- "stack" 
    => main scope variables are accessible to sub-scope variables.
    => sub-scope variables are not accessible to main scope variavbles.
    => local/auto variables are created automatically wheb we eter the block in whivh they are declared and destructed automatrically when we exit the block.


++++++++++++++++++++++++ REGISTER +++++++++++++++++++++++++++++++++++++++++++++++++++
        **not in use, bahut problem hai baba idhar
            kabhi idhar toh kabhi udahr ( kab iss ko register grant hua ya nhi pata anhi chalta);
        **ye low level ke language me hota hai, high level me nhi
        * As same as auto
        * storage area : cpu register/ stack
       1.=> SCOPE :- "block in which they are declared".
       2.=> LIGETIME:- "block in which they are declared"
       3.=> DEGAULT VALUE:- "garbage"
       4.=> STPRAGE AREA:- "stack"        
    
+++++++++++++++++++++++++++ STATIC +++++++++++++++++++++++++++++++++++++++++++++++++++
       1.=> SCOPE :- "block in which they are declared".
       2.=> LIGETIME:- "Program"
       3.=> DEGAULT VALUE:- "0"
       4.=> STPRAGE AREA:- "static area (date segnemet)" 
    => The value persist between diggent funtion call.
    => No redeclarations.
    => They are created only once in the program.
   
+++++++++++++++++++++++++++ GLOBAL(EXTERN) +++++++++++++++++++++++++++++++++++++++++++++++++++
       1.=> SCOPE :- "though out the program".
       2.=> LIGETIME:- "Throug out the program"
       3.=> DEGAULT VALUE:- "0"
       4.=> STPRAGE AREA:- "stack area" 
   
=> static variable must be initialized bt literals.
=> extern is etarnal file scop hota hai (Extrnal likege)

=> goble veriable tha assigrment valide nhi hai

=> goble or static same nhi hai yadd rakhna







   
   
   
   
   
   
   
   
   
   
   
   
   
   
    */

}

// int mul(int x, int y)  run tiem error dega
// {
//     return x*y;
// }