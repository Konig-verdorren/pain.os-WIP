#include <stdio.h>
#include <string.h>

struct urto {
    int umem;
    int ucpu;
    int ugpu
}urt = {
    .umem = 770,
    .ucpu = 771,
    .ugpu = 772,
};
struct irto {
    int imem;
    int icpu;
    int igpu
}irt = {
    .imem = 0,
    .icpu = 0,
    .igpu = 0
};

int rescalc(){
    
    printf("|resclac: A\n");
    printf("|_umem:%d%s%d%s%d",urt.umem,"/ucpu:",urt.ucpu,"/ugpu:",urt.ugpu);
    printf("\n|_imem:%d%s%d%s%d",irt.imem,"/icpu:",irt.icpu,"/igpu:",irt.igpu);
    printf("\n______________\n");
    return 0;
}