#include "timer.h"
#include <stdio.h>
#include <stdlib.h>

int alarm_count = 0;
void increment_alarm() {
  alarm_count += 1;
}

void sigint_handler(int signum)
{
  printf("The program executed for %d seconds.\n", alarm_count);
  exit(0);
}