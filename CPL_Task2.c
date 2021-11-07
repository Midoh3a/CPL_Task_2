#include<stdio.h>

int main() {
  int sec, min, hours;
  printf("Enter the number of seconds : ");
  scanf("%d", & sec);

  hours = sec / 3600;
  sec = sec % 3600;
  min = sec / 60;
  sec = sec % 60;
  printf(" Hours: %d hr \n Minutes: %d min \n Seconds: %d sec ", hours, min, sec);

  return 0;
}
