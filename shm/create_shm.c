#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<fcntl.h>
#include<string.h>
int main()
{
  int r=shmget(1234,1024,IPC_CREAT|0644);
  if(r==-1)
    perror("shmget"),exit(-1);
  printf("shared memory create successful\n");
}
