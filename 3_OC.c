/*
#include<stdio.h>
int main(){
    int find,range;
    printf("Write your range:: ");
    scanf("%d",&range);
    int a[10];
    int c[10]={0,0,0,0,0,0,0,0,0,0};
    for(int i=0;i<10;i++){
        printf("Enter tne numbers(%d):: ",i+1);
        scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++){
        for(int j=i;j<10;j++){
            if(a[i]==a[j]){
                c[i]++;
            }
        }
        printf("%d founded %d times in the array........\n",a[i],c[i]);
    }
    return 0; 
}*/
#include <stdio.h>

int main()
{
    int a[10];
    int c[10] = {0};
    int b[10] = {0};
    int count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter the numbers(%d):: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int found = 0;
        for (int j = 0; j < count; j++)
        {
            if (b[j] == a[i])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i] == a[j])
                {
                    c[count]++;
                }
            }
            b[count] = a[i];
            count++;
        }
    }

    for (int k = 0; k < count; k++)
    {
        printf("%d found %d times in the array.\n", b[k], c[k]);
    }

    return 0;
}
