//
//  main.c
//  C-Pointer
//
//  Created by lcc on 15-8-4.
//  Copyright (c) 2015年 lcc. All rights reserved.
//

#include <stdio.h>
void changeUsePoint(int *p);
int sum(int, int);
int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
//--------------------------------------
//    int a;
//    a = 10;
//    int *ip = &a;
//    printf("指针:%p \n",ip);
//    *ip = 9;
//    printf("a修改后：%d \n",a);
//    int value = *ip;
//    printf("value复制: %d \n",value);
//    
//    float b = 9.8;
//    float *fp = &b;
//    
    //----------changeUsePoint方法修改值－－－－－－－－－－－
//    changeUsePoint(&a);
//    printf("changeUsePoint修改a: %d \n",a);
//-------------------------------------------------
    
    
    //－－－－－－－－－指针运算－－－－－－－－－－
    
//    int i1 = 10;
//    int *ip1 = &i1;
//    printf("a : %d ",i1);
//    printf("a地址：%p \n",ip1);
//    
//    i1 = i1 +1;
//    printf("a : %d ",i1);
//    printf("a地址：%p \n",ip1);
//    
//    ip1 = ip1 + 1;
//    printf("变量i1+1的地址：%p \n",ip1);
    
    
    //--------------------数组－－－－－－－－－－－－－－－
    
//    
//    int a[3] = {10,20,30};
//	printf("a的地址：%p \n",a);
//    printf("a[0]的地址：%p \n",&a[0]);
//    
//    int value1 = *a;
//    int value2 = a[0];
//    printf("value1 = %d,value2 = %d \n",value1,value2);
////
    //2.使用指针遍历数组
//    int b[] = {1,2,3,4,5};
//    int len = sizeof(b)/sizeof(int);
//    for(int i=0;i<len;i++) {
//        printf("b[%d] = %d \n",i,b[i]);
//        printf("b[%d] 的地址：%p \n",i,&b[i]);
//    }
//    printf("——————————————————————————\n");
//    //B.使用指针遍历
//    int len2 = sizeof(b)/sizeof(int);
//    int *p = b;
//    for(int i=0;i<len2;i++) {
//        int value = *p;
//        printf("a[%d] = %d \n",i,value);
//        printf("指针地址：%p \n",p);
//        p++;
//    }
    
//   －－－－－－－－－－－－ 指针函数－－－－－－－－－－－－－－－－
    int (*p)(int a, int b) = sum;
    
    return 0;
}
//修改值
void changeUsePoint(int *p) {
    
    *p = 100;
    
}
//互换
void swapUsePoint(int *v1, int *v2) {
    
    int temp = *v1;  //等价于 int temp = a;
    
    *v1 = *v2;  //等价于 a = b;
    
    *v2 = temp; //等价于 b = temp;
}
char *getString() {
    
    char *s = "wxhl";
    
    return s;
    
}
int sum(int a, int b) {
    
    printf("sum函数被调用了");
    
    return a + b;
    
}
