#include <stdio.h>

int main() {
    struct Student{
        int no;
        char name[10];
        int age;
        char sex;
        double score;
    };

    //单个结构体元素赋值
    struct Student stu1 = {2001,"tom",20,'m',34.22};

    //结构体数组赋值
    struct Student stu[3] = {{2001,"marry",20,'m',90.8},
                             {2002,"linda",21,'w',97.2},
                             {2003,"emma",20,'w',99.6}};

    ////打印单个结构体元素信息
    //printf("stu1.name: %s\n", stu1.name);
    //printf("stu1.no: %d\n", stu1.no);
    //printf("stu1.age: %d\n", stu1.age);
    //printf("stu1.sex: %c\n", stu1.sex);
    //printf("stu1.score: %.2f\n", stu1.score);
    //
    ////打印结构体数组中某元素信息
    //printf("\nstu[1].name: %s\n", stu[1].name);
    //printf("stu[1].no: %d\n", stu[1].no);
    //printf("stu[1].age: %d\n", stu[1].age);
    //printf("stu[1].sex: %c\n", stu[1].sex);
    //printf("stu[1].score: %.2f\n", stu[1].score);

    return 0;
}


