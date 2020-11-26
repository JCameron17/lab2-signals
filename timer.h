#ifndef TIMER_H_
#define TIMER_H_
extern int alarm_count;
void increment_alarm();
void sigint_handler(int signum);
#endif