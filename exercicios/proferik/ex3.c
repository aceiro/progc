#include<stdio.h>
#define MAX_LIMIT 3

int main(){
   int average;
   int grades[MAX_LIMIT];

   grades[0]=80;
   grades[1]=85;
   grades[2]=90;

   average=(grades[0]+grades[1]+grades[2])/3;

   printf("The average grades for 3 elements is: %d\n", average);


}
