char b[128],*p=b;f(x){if(9<x)f(x/10);*p++=x%10|48;}__libc_start_main(){f(read(0,b,128)-1);_exit(!write(1,b,p-b));}main;