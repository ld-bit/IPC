#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<fcntl.h>
#include<string.h>
int main()
{
  int id=shmget(1234,0,0);
  if(id==-1)
    perror("shmget"),exit(-1);
   char* p=(char*)shmat(id,NULL,0);
   printf("11111\n");
   strcpy(p,"dasdsadasdasdasdadasdsadasdasdsadsadfdsfsdgdfghdfhfdyhfdghhfghhhhhhhhhhhhh");
   printf("22222\n");
   shmdt(p);
}
