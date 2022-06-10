#define S(x)x*x*x*x*x
char b[5],*p=b;f(x){if(9<x)f(x/10);*p++=x%10|48;}__libc_start_main(n,i){for(n=!read(0,b,i=5);i--;n+=S((b[i]-48)));f(n);_exit(!write(1,b,p-b));}main;