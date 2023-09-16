#include <stdio.h>
typedef struct{
int data;
int *pointerx;
}pointerlist;
int main ()
{
    int var_data = 10,v2 = 11;
    int *pointer;              // 定义指针变量
    int *pointer2;
    pointer = &var_data;
    pointer2 = &v2;

    printf("%p %p\n", pointer,pointer2);

    pointerlist* p0;
    p0->pointerx = &(p0->data);






    return 0;
}