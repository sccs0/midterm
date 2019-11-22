#include<stdio.h>
int main()
{
 int arr[10] = {0};
 int i = 0;
 int max = 0;
 printf("请输入10个非负整数：");
 for (i = 0; i < 10; i++)
 {
 scanf("%d",&arr[i]);
 If(getchar() == '\n')
 {
 break;
 }
}
 max = arr[0];
 for (i = 0; i <10; i++)
 {
 if (max < arr[i])
 {
 max = arr[i];
 }
 }
 printf("max=%d\n", max);
 return 0;
}