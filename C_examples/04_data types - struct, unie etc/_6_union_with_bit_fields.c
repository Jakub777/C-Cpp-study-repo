#include <stdio.h>
#include <stdlib.h>
#include <my_lib.h>
#include <string.h>
#include <stdint.h>

// #pragma pack(1) 
    typedef union
    {
        struct
        {
            uint32_t serialNo       : 9;
            uint32_t productionDate : 5;
            uint32_t moduleAddress  : 7;
            uint32_t localAddress   : 4;
            uint32_t protocolNo     : 4;
            uint32_t reserved       : 3;
        }bits;

        uint32_t data;
    }MsgHead;

int main(int argc, char const *argv[])
{
    MsgHead my_head = {0};
    my_head.bits.serialNo =       0b111101001;
    my_head.bits.productionDate = 0b11110;
    my_head.bits.moduleAddress =  0;
    my_head.bits.localAddress =   0;
    my_head.bits.protocolNo =     0;
    my_head.bits.reserved =       0b10;
    
    printf("asd\n");
    printf("suma bitow : %d\n", 9+5+7+4+4+3);
    print_bits(sizeof(MsgHead), &my_head);
    return 0;
}
// no pragma data : 572539393