#include<stdio.h>
#include<stdlib.h>

int count_of_local_maximus(int* numbers, int length){
    if(length<3){
        return 0;
    }

    int count=0;
    for(int i=1;i<length-1;i++){
        if(numbers[i]>numbers[i-1] && numbers[i]>numbers[i+1]){
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
        int result = count_of_local_maximus(numbers,length);
        printf("%d\n",result);
    }
    return EXIT_SUCCESS;
}