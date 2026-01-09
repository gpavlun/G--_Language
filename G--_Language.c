#include "Command_Calls.h"
#include "Integer_Ops.h"
#include "Character_Ops.h"
#include "Input_Output.h"

extern int cmp_value;
extern int modulo;

#define byte unsigned char

void fset(byte Lbytes, byte LHS[Lbytes], byte Rbytes, byte RHS[Rbytes]);

void main(void){    
    put_str("\n=================\n");
    put_str(" welcome to G--! \n");
    put_str("=================\n\n");

    /*
    This code is 10 * 2 using predefined data
    blocks and type casting. this is a proof of
    concept, as I am going to remove the type
    casting from everywhere in the code to
    create to make G-- an untyped language
    where everything is void
    */

    byte integer[4];
    byte number[8];
    integer[0] = 5;
    fset(8,number,8,&(integer[0]));
    put_c((*number) + 0x30);

    // print the result using our integer printing function
}


void fset(byte Lbytes, byte LHS[Lbytes], byte Rbytes, byte RHS[Rbytes]){
    
    zero_byte_iteration_loop: 
    Lbytes ? 0 : ({goto set_byte_iteration_loop;});     
        Lbytes--;
    
        zero_loop:
        LHS[Lbytes] ? 0 : ({goto zbil_next;});         
            LHS[Lbytes]--;   
        goto zero_loop;  
        
        zbil_next:
    goto zero_byte_iteration_loop;

    set_byte_iteration_loop:
    Rbytes ? 0 : ({goto end;});
        Rbytes--;

        set_loop:
        RHS[Rbytes] ? 0 : ({goto sbil_next;});
            RHS[Rbytes]--;
            LHS[Rbytes]++;
            Rbytes++;
        goto set_loop;
        
        sbil_next:
    goto set_byte_iteration_loop;

    end:
}