#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include "timer.h"
void handler(int signum)
{ //handler for signal 
  printf("Hello World!\n");
  increment_alarm();
}


int main(int argc, char * argv[])
{
  signal(SIGINT,sigint_handler); 
  signal(SIGALRM,handler); 
  
  while(1)
  {
    alarm(1); //schedule signal after 1 second
    sleep(1);
     
    printf("Turing was right he was so right!\n");
  }
  return 0; //should never reach this 
}