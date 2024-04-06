#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int line = 1;
    while(scanf("%d",&n)==1 && n!=0)
    {
        int pos_num = 0;
        int neg_num = 0;
        for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
            if(num<0)
            {
                neg_num++;
            }
            else if(num>0)
            {
                pos_num++;
            }
        }

        if(pos_num>neg_num)
        {
            printf("%d\n",line);
        }
        line++;
    }

    return EXIT_SUCCESS;
}
