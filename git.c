#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<complex.h>
#include<math.h>
#include<time.h>
int main(){
 printf("git");
 double start,end;
 start=clock();
 _complex double b=3+4*I;
 printf("cpow(b): %f +%f i",creal(cpow(b)),cimag(cpow(b)));
 end=clock();
 printf("time:%f",end-start);
 printf("data is changing");
 pritnf("a is b");
 printf("finally test");
 return 0;
}
