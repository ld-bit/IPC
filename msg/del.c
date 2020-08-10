#include<stdio.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
int main()
{
  int id=msgget(1234,0);
  int r=msgctl(id,IPC_RMID,NULL);
  if(r==-1)
   perror("msgctl"),exit(-1);
  printf("del successful\n");
  return 0;
}
