#include<stdio.h>
#include<sys/msg.h>
#include<sys/ipc.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
struct _msgbuf{
   long channel; 
   char text[1024];
};
int main()
{
  int id=msgget(1234,0);
  struct _msgbuf msg;
  memset(&msg,0x00,sizeof(msg));
  printf("channel: ");
  scanf("%ld",&msg.channel);
  printf("text: ");
  scanf("%s",msg.text);
  int r=msgsnd(id,&msg,sizeof(msg),0);
  if(r==-1)
    perror("msgsnd"),exit(-1);
  else 
    printf("send successful\n ");
  return 0;
}
