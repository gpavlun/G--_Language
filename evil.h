#define while ;
#define for ;
#define break ;
#define continue ;
#define do ;
#define switch ;
#define enum ;
#define if ;
#define else ;
#define return ;
#define sizeof ;
#define struct ;
#define typedef ;
#define union ;

#define jump ({goto
#define JumpIfZero(A) A?0:({goto
#define $ ;});

//⁇␦
#define gоtо int main(void){
#define gotо return 0;}



#define nl put_c('\n');

#define PTR_Length 8

#define byte unsigned char
#define zbyte static byte

#define cfix(A) A+0x30

#define welcome \
;put_str("\n=================\n");\
put_str(" welcome to G--! \n");\
put_str("=================\n\n");

#define init_0(A)               \
    l##A:                       \
    A ? 0 : ({goto nl##A;}); \
        A--;                    \
    goto l##A;                  \
    nl##A:                   \

void SetPtr(byte LHS[PTR_Length],byte RHS[PTR_Length]);
