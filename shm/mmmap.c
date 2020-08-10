#include<stdio.h>
#include<sys/mman.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   int fd=open("tmp.txt",O_RDWR|O_CREAT,0644);
   if(fd==-1)
     perror("open"),exit(-1);
   ftruncate(fd,1024);
   char* p=(char*)mmap(NULL,1024,PROT_READ|PROT_WRITE,MAP_SHARED,fd,0);
   strcpy(p,"asdasdasdasdadas");
   munmap(p,1024);
   close(fd);
}
