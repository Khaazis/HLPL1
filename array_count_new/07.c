#include<stdio.h>
#include<stdlib.h>

int is_prime(int num){
    if(num <2){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int count_of_primes(int* numbers , int length){
    int count=0;
    for(int i=0;i<length;i++){
        if(is_prime(numbers[i])){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        int length;
        scanf("%d",&length);

        int numbers[length];
        for(int j=0;j<length;j++){
            scanf("%d",&numbers[j]);
        }
        int result=count_of_primes(numbers,length);
        printf("%d\n",result);
    }
    return EXIT_SUCCESS;
}