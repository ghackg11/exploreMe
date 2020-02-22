#include<stdio.h>
#include<string.h>
int main()
{
    int arr[6][6];
     for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d ",arr[i][j]);
        }
    }
    int max=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2]>max)
                max=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
        }
    }
    printf("%d",max);
}
