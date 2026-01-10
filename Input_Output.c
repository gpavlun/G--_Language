/*
input and output functions for the command lline
*/

#include "Character_Ops.h"
#include "Command_Calls.h"
// necessary to use err()
#include "Integer_Ops.h"
#include "Input_Output.h"
#include "ByteSets.h"
#include "evil.h"

extern int cmp_value;
extern int modulo;



void put_byte(byte *value){
    
    byte c;
    init_0(c)

    byte b;
    init_0(b)

    byte shift;
    init_0(shift)
    set(shift,4);

    cmp(((*value)>>4)&0x0F,0x0);
    cmp_value ? 0 : ({goto l0;});
    cmp(((*value)>>4)&0x0F,0x1);
    cmp_value ? 0 : ({goto l1;});
    cmp(((*value)>>4)&0x0F,0x2);
    cmp_value ? 0 : ({goto l2;});
    cmp(((*value)>>4)&0x0F,0x3);
    cmp_value ? 0 : ({goto l3;});
    cmp(((*value)>>4)&0x0F,0x4);
    cmp_value ? 0 : ({goto l4;});
    cmp(((*value)>>4)&0x0F,0x5);
    cmp_value ? 0 : ({goto l5;});
    cmp(((*value)>>4)&0x0F,0x6);
    cmp_value ? 0 : ({goto l6;});
    cmp(((*value)>>4)&0x0F,0x7);
    cmp_value ? 0 : ({goto l7;});
    cmp(((*value)>>4)&0x0F,0x8);
    cmp_value ? 0 : ({goto l8;});
    cmp(((*value)>>4)&0x0F,0x9);
    cmp_value ? 0 : ({goto l9;});
    cmp(((*value)>>4)&0x0F,0xA);
    cmp_value ? 0 : ({goto lA;});
    cmp(((*value)>>4)&0x0F,0xB);
    cmp_value ? 0 : ({goto lB;});
    cmp(((*value)>>4)&0x0F,0xC);
    cmp_value ? 0 : ({goto lC;});
    cmp(((*value)>>4)&0x0F,0xD);
    cmp_value ? 0 : ({goto lD;});
    cmp(((*value)>>4)&0x0F,0xE);
    cmp_value ? 0 : ({goto lE;});
    cmp(((*value)>>4)&0x0F,0xF);
    cmp_value ? 0 : ({goto lF;});
    l0:
    set(c ,30);goto ASM1;
    l1:
    set(c ,31);goto ASM1;
    l2:
    set(c ,32);goto ASM1;
    l3:
    set(c ,33);goto ASM1;
    l4:
    set(c, 34);goto ASM1;
    l5:
    set(c ,35);goto ASM1;   
    l6:
    set(c ,36);goto ASM1;
    l7:
    set(c ,37);goto ASM1;
    l8:
    set(c ,38);goto ASM1;
    l9:
    set(c ,39);goto ASM1; 
    lA:
    set(c ,41);goto ASM1;
    lB:
    set(c ,42);goto ASM1;
    lC:
    set(c ,43);goto ASM1;
    lD:
    set(c ,44);goto ASM1;
    lE:
    set(c, 45);goto ASM1;
    lF:
    set(c ,46);goto ASM1;
    ASM1:
    asm(
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "mov %0, %%rsi\n"
        "mov $1, %%rdx\n"
        "syscall\n"
        :
        : "r"(&c)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );

    cmp(((*value))&0x0F,0x0);
    cmp_value ? 0 : ({goto ll0;});
    cmp(((*value))&0x0F,0x1);
    cmp_value ? 0 : ({goto ll1;});
    cmp(((*value))&0x0F,0x2);
    cmp_value ? 0 : ({goto ll2;});
    cmp(((*value))&0x0F,0x3);
    cmp_value ? 0 : ({goto ll3;});
    cmp(((*value))&0x0F,0x4);
    cmp_value ? 0 : ({goto ll4;});
    cmp(((*value))&0x0F,0x5);
    cmp_value ? 0 : ({goto ll5;});
    cmp(((*value))&0x0F,0x6);
    cmp_value ? 0 : ({goto ll6;});
    cmp(((*value))&0x0F,0x7);
    cmp_value ? 0 : ({goto ll7;});
    cmp(((*value))&0x0F,0x8);
    cmp_value ? 0 : ({goto ll8;});
    cmp(((*value))&0x0F,0x9);
    cmp_value ? 0 : ({goto ll9;});
    cmp(((*value))&0x0F,0xA);
    cmp_value ? 0 : ({goto llA;});
    cmp(((*value))&0x0F,0xB);
    cmp_value ? 0 : ({goto llB;});
    cmp(((*value))&0x0F,0xC);
    cmp_value ? 0 : ({goto llC;});
    cmp(((*value))&0x0F,0xD);
    cmp_value ? 0 : ({goto llD;});
    cmp(((*value))&0x0F,0xE);
    cmp_value ? 0 : ({goto llE;});
    cmp(((*value))&0x0F,0xF);
    cmp_value ? 0 : ({goto llF;});
    ll0:
    set(b ,30);goto ASM2;
    ll1:
    set(b ,31);goto ASM2;
    ll2:
    set(b ,32);goto ASM2;
    ll3:
    set(b ,33);goto ASM2;
    ll4:
    set(b, 34);goto ASM2;
    ll5:
    set(b ,35);goto ASM2;   
    ll6:
    set(b ,36);goto ASM2;
    ll7:
    set(b ,37);goto ASM2;
    ll8:
    set(b ,38);goto ASM2;
    ll9:
    set(b ,39);goto ASM2; 
    llA:
    set(b ,41);goto ASM2;
    llB:
    set(b ,42);goto ASM2;
    llC:
    set(b ,43);goto ASM2;
    llD:
    set(b ,44);goto ASM2;
    llE:
    set(b, 45);goto ASM2;
    llF:
    set(b ,46);goto ASM2;
    ASM2:
    asm(
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "mov %0, %%rsi\n"
        "mov $1, %%rdx\n"
        "syscall\n"
        :
        : "r"(&b)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );





end:
}

/*
function put_c
prints a single character to the commandline
*/
void put_c(int value){
    char c;
    setc(&c,value);
    asm(
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "mov %0, %%rsi\n"
        "mov $1, %%rdx\n"
        "syscall\n"
        :
        : "r"(&c)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );
}
/*
function: put_int
writes an entire integer to the command lline in hexadecimal
*/
void put_int(int value){
    char integer[8];
    char negative;
    static int index;
    static int shift;
    iset(&index,8);
    setc(&negative,0);
    neg(value);
    cmp_value ? 1 : ({goto start;});
    setc(&negative,1);
    inv(value,&value);
    put_c(0x2D);
start:
    put_c('0');
    put_c('x');

    lloop:
    index--;
    mul(index,4,&shift);
    setc(&(integer[index]),(value>>shift)&0xF);
    i2a(integer[index],&(integer[index]));
    put_c(integer[index]);
    index ? ({goto lloop;}) : 1;
}
/*
function: put_int
writes an entire integer to the command lline in hexadecimal
*/
void put_lng(int value){
    char integer[16];
    char negative;
    static int index;
    static int shift;
    iset(&index,16);
    setc(&negative,0);
    neg(value);
    cmp_value ? 1 : ({goto start;});
    setc(&negative,1);
    inv(value,&value);
    put_c(0x2D);
start:
    put_c('0');
    put_c('x');
loop:
    index--;
    mul(index,4,&shift);
    setc(&(integer[index]),(value>>shift)&0xF);
    i2a(integer[index],&(integer[index]));
    put_c(integer[index]);
    index ? ({goto loop;}) : 1;
}

/*
function: put_int
writes a string to the command lline
*/
void put_str(char *string){
loop:
    put_c(*string);
    string++;
    cmp(*string,'\0');
    cmp_value ? ({goto loop;}) : 1;
}  
/*
function: get_c
gets a value from the command lline
*/
void get_c(char *dest){
    asm(
        "movq $0, %%rax\n"
        "movq $0, %%rdi\n"
        "movq %0, %%rsi\n"
        "movq $2, %%rdx\n"
        "syscall\n"
        :
        : "r"(dest)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );
    cmp(dest[0],'\n');
    cmp_value ? 1 : ({goto end;});
    cmp(dest[1],'\n');
    cmp_value ? 1 : ({goto end;});    
    err();
    end:
}
/*
function: get_str
reads string from command lline
*/
void get_str(char *dest,int size){
        size++;
        asm(
        "movq $0, %%rax\n"
        "movq $0, %%rdi\n"
        "movq %0, %%rsi\n"
        "movq $6, %%rdx\n"
        "syscall\n"
        "movq %%rax, %%rbx\n"
        : "=ri"(dest): "ri"(&size)
        : "%rax", "%rdi", "%rsi", "%rdx"
    );
// lloop:
//     cmp(size,0);
//     cmp_value ? 1 : err();
//     size--;
//     cmp(*dest,'\n');
//     dest++;
//     cmp_value ? ({goto lloop;}) : 1;

}
