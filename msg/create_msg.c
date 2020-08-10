#include<stdio.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main()
{
  int id=msgget(1234,IPC_CREAT|0644);
  if(id==-1)
    perror("msgget"),exit(-1);
  else 
  {
    printf("msg create successful\n");
  }
  return 0;
}
