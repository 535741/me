#include <stdio.h>
#include <stdint.h>
#include <sys/utsname.h>
#include <cpuid.h>
#include <stdlib.h>

int main(void){
    uint32_t brand[12];
    __get_cpuid(0x80000002, brand+0x0, brand+0x1, brand+0x2, brand+0x3);
    __get_cpuid(0x80000003, brand+0x4, brand+0x5, brand+0x6, brand+0x7);
    __get_cpuid(0x80000004, brand+0x8, brand+0x9, brand+0xa, brand+0xb);

    struct utsname sysinfo;
    uname(&sysinfo);

    printf("\e[1;32m                    'c.\n");
    printf("                 ,xNMM.\n");
    printf("               .OMMMMo \n");
    printf("               OMMM0,  \n");
    printf("     .;loddo:' loolloddol;.\n");
    printf("   cKMMMMMMMMMMNWMMMMMMMMMM0:        %s\n", getenv("USER"));
    printf("\e[1;33m .KMMMMMMMMMMMMMMMMMMMMMMMWd.        %s\n", sysinfo.nodename);
    printf(" XMMMMMMMMMMMMMMMMMMMMMMMX.          \e[1;31m%s %s\n", sysinfo.sysname, sysinfo.machine);
    printf(";MMMMMMMMMMMMMMMMMMMMMMMM:           \e[1;31m%s\n", sysinfo.release);
    printf(":MMMMMMMMMMMMMMMMMMMMMMMM:           \e[1;35m%s\n", getenv("SHELL"));
    printf("\e[1;31m.MMMMMMMMMMMMMMMMMMMMMMMMX.          \e[1;34m%s\n", getenv("TERM"));
    printf("\e[1;31m kMMMMMMMMMMMMMMMMMMMMMMMMWd.        \e[1;36m%s\n", brand);
    printf("\e[1;35m .XMMMMMMMMMMMMMMMMMMMMMMMMMMk\n");
    printf("  .XMMMMMMMMMMMMMMMMMMMMMMMMK.\n");
    printf("\e[1;34m    kMMMMMMMMMMMMMMMMMMMMMMd\n");
    printf("     ;KMMMMMMMWXXWMMMMMMMk.\n");
    printf("       .cooc,.    .,coo:.\033[0m\n");
}
