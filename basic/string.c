#include<stdio.h>
/*
    sequence of charecter terminated by NULL character
    string address ka khel hai
matlab string addres hi hai
we can update indivible vaule of array and string, but we can not reintionalize the array and string.

    => indivisible elment can updated 
        arr[1]="u";
    
    => completely new string can not be assigned to array
        arr= " Neeraj"

    => Read/write in case of array
    but in case pointer ye read only area me store hota hai matlab ye hua ki pointer se content change nhi kar sakte
    but idhar pointer se string ko reinitionlize kiya ja skta hai
      

    => To avoid any problem : size of array must atleast 1 size more than the no of symblols in string.

agar hum log int arr[4]={1,2} intilize karte hai toh baki ke jagah me 0 aa jant hai

but agar char ke case me aisa ho ho to null asign hota hai but yha v ek locha hai agar char arr[5] {'a','n','a','n','d'} inisilize kare toh char array ke trah hot hai iss me null asign nhi hota





*/



int main()
{
    char arr[10] = "Anand"
    printf("%s",arr);
    char arr[20] = "Anand";
    char arr2[20] = "Anand""suman""Adii";
    // char arr3[20] = "Anand\
    //                 bhaiya \
    //                 jay hao";
    // printf("%s",arr);                
    // printf("%s",arr2);                
    // printf("%s",arr3); 
    char *p="Anand_2";
    char arr4[]="Anand";
    // printf("%s",p);               
    // printf("%d",sizeof(p)); 
    // printf("%s",arr4); //Anand
    // printf("%s",arr4 +1); //nand
    // printf("hello");
    // printf("\n");
    // printf("hello"+1);
    // printf("%c",*("hello"+1));//charecter of 2nd element
    // printf("%c","hello"[1]);// charecter of 2nd element
    // printf(&"hello"[1]);//address of 'e' in "Hello"
            char name[3][10]={"Amit","Rashi","Balaswami"};
            // printf("%s",name[1]);
            // printf(*name+1);
            // printf(**name);
    // char *ptr1 ="Anand";
    // char *ptr2 ="Kumar";
    // char *ptr3 ="Suman";
    char* ptra[3] ={"Anand","Kumar","Suman"};
    // printf("%s",ptra[1]+1);
    ptra[0]="Aditi";
    printf("%s",ptra[1]);

    return 0;
}