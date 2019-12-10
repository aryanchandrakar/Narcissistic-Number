#include<stdio.h>
#include<math.h>
#include<iostream>
int main(){
int a,b,c,d,e,q[10];
int i;
std::cout<<"enter number: ";
std::cin>>a;
b=a;
d=0;
e=a;
c=0;
while (b!=0){c=c+1;
b/=10;
}
while (e!=0) {
      d += pow(e % 10, c);
      e /= 10;
}
if(d==a){std::cout<<"true";}else{std::cout<<"false";}
return 0;
}
