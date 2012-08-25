#include "stdlib.h"
#include "sys/types.h"
#include "stdio.h"

int main(){
pid_t pid;

pid = fork();
printf("Pid: %d",pid);
if (pid == 0)system("java java_server_test");

return 0;
}
