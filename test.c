#include <stdio>

bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int main(void){
    /*for(int i=1;i<=100;i++){
        if(i%3!=0 && i%5!=0){
            printf("%d\n",i);
        }
    }*/

    int x=45;
    int a=0;
    while(a!=x){
        int i=2;
        if(isPrime(i) && x%i==0){
            printf("%d\n",i);
        }
    }

    return 0;
}
