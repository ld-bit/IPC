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
  long channel;
  scanf("%ld",&channel);
  int r=msgrcv(id,&msg,sizeof(msg),channel,0);
  if(r==-1)
  {
    perror("msgrcv"),exit(-1);
  }
  printf("msg: [%s]\n",msg.text);
}
