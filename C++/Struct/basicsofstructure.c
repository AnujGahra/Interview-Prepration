#include<stdio.h>
int main() {
    struct student {
        char name[20];
        int age;
        float marks;

        struct course {
            char course_name[30];
            int course_code;
        } course_info;
    };

    


    struct student s1;
    // size of structure
    printf("Size of structure student: %lu bytes\n", sizeof(struct student));
    // size of structure members
    printf("Size of name: %lu bytes\n", sizeof(s1.name));
    printf("Size of age: %lu bytes\n", sizeof(s1.age));
    printf("Size of marks: %lu bytes\n", sizeof(s1.marks));
    printf("Size of course_info: %lu bytes\n", sizeof(s1.course_info));
    // size of nested structure members
    printf("Size of course_name: %lu bytes\n", sizeof(s1.course_info.course_name));
    printf("Size of course_code: %lu bytes\n", sizeof(s1.course_info.course_code));
    return 0;
}