#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    int nums[N] = {16, 25, 9, 90, 23};
    //外层循环控制轮数  数组长度-1轮
    int i, j;
    int temp;//临时变量
    for(i = 0; i < N - 1; i++)
    {
        //内层控制该轮比较次数   每一轮比较次数比上一轮-1次
        for(j = 0; j< N - i - 1; j++)
        {
            if(nums[j] < nums[j + 1])
            {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    printf("降序结果为：\n");
    for(i = 0; i < N; i++)
    {
        printf("%d\t", nums[i]);
    }
    return 0;
}
