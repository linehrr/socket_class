#include "stdio.h"
#include "stdlib.h"
#include "sys/types.h"

int main(){

fork();
fork();
fork();

printf("pid: %d\n",getpid());


return 0;
}
