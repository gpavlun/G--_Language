#include "Command_Calls.h"
#include "Integer_Ops.h"
#include "Character_Ops.h"
#include "Input_Output.h"

#include "evil.h"
#include "ByteSets.h"
#include "compare.h"

extern int cmp_value;
extern int modulo;
extern int cmp_store;


gоtо

welcome

zbyte integer[4];
zbyte address[PTR_Length];

byte t1;
init_0(t1)
set(t1,0x0A);

byte t2;
init_0(t2)
set(t2,10);


put_byte(&t1);nl
put_byte(&t2);nl





//JumpIfZero(inc) label $

//set1(integer[0]);set2(integer[1]);set3(integer[2]);set4(integer[3]);

//put_c(cfix(integer[3]));put_c(cfix(integer[2]));put_c(cfix(integer[1]));put_c(cfix(integer[0]));


gotо







void setinthex(char *dest,char* d3,char* d2,char* d1,char* d0){

    setbyte(*dest,d3);
    setbyte(*(dest++),d2);
    setbyte(*(dest++),d1);
    setbyte(*(dest++),d0);
}
void setbyte(char *dst, char *src){
    zero_loop:
    *dst ? 0 : ({goto z_next;});         
        (*dst)--;   
    goto zero_loop;
    z_next:
    
    set_loop:
    *src ? 0 : ({goto s_next;});
        (*dst)++;
        (*src)--;
    goto set_loop;
    s_next:
}




void fset(char *dest,char size,char src){

}




















/*
Allows you to set a pointer equal to the address of something else.
assumes a ptr to be 8 bytes long. In the event that this is not the
case, use lngset to specify a set of specific size
*/
void SetPtr(byte LHS[PTR_Length],byte RHS[PTR_Length]){
    static byte Lbytes;
    static byte Rbytes;
    iset(&Lbytes,PTR_Length);
    iset(&Rbytes,PTR_Length);

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

/*
Allows you to set any variable equal to
any other variable. This is much faster 
than using set
*/
void lngSet(byte Lbytes, byte LHS[Lbytes], byte Rbytes, byte RHS[Rbytes]){
    
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