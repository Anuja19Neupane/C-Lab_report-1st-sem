// WAP to illustrate the concept of global and static variables.


// global variable

#include <stdio.h>

int hello_i_am_global_variable=10;

int modify_variables()
{
    int hello_i_am_local_variable=23; 
    // can be used in this function only, cuz it is declared inside this function block

    int hello_i_am_static_variable=45; // initialized only once


    // result check garna ko lagi gareko
    hello_i_am_global_variable+=5;
    hello_i_am_local_variable+=5;
    hello_i_am_static_variable+=5;
}

int main()
{
     printf("Initial global variable: %d\n", hello_i_am_global_variable);

    modify_variables();// suruma ekpalta function call gareko
    modify_variables(); 
            // 10+5=15 print hunuparney ho tara feri function call gareko xa so 10+5+5=20 print hunxa

    printf("Final global variable: %d\n", hello_i_am_global_variable);

   // hello_i_am_local_variable ra hello_i_am_static_variable lai yaha print nei garna mildaina
   // cuz they are declared and defined in the function block

    return 0;
}