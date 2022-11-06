#include <stdio.h>

int main (){
   int i = 10;
   int j = 20;
   double x = 8.0;
   double y = 5.0;
   int result;
   
   result = ! (x+5.0)+ !!y + !!!i + !!i + 99;
   printf ("%d", result);
}