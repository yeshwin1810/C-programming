#include<stdio.h>
int main() {
    int n,reverse=0,remainder;
    while(n!=0){
    remainder=n%10;
    reverse=reverse*10+remainder;\
    n=n/10;
    }
    
}
