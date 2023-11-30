#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    int class;
    float math_score;
    float english_score;
    float c_score;
};

int main()
{

    struct student std1;

    // Initialize student 1 data
    std1.id = 1;
    std1.class = 10;
    strcpy(std1.name, "John Smith");
    std1.math_score = 90.5;
    std1.english_score = 85;
    std1.c_score = 95;

    printf("Student 1:\n");
    printf("Name: %s\n", std1.name);
    printf("ID: %d\n", std1.id);
    printf("Class: %d\n", std1.class);
    printf("Math score: %.2f\n", std1.math_score);
    printf("English score: %.2f\n", std1.english_score);
    printf("C score: %.2f\n", std1.c_score);

    return 0;
}