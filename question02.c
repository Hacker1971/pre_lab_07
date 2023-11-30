#include <stdio.h>

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

    int i;
    struct student students[6];

    // Input data for 6 students
    for (i = 0; i < 6; ++i)
    {
        printf("Enter details for student %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);

        printf("Enter name: ");
        scanf(" %s", students[i].name);

        printf("Enter class: ");
        scanf("%d", &students[i].class);

        printf("Enter math score: ");
        scanf("%f", &students[i].math_score);

        printf("Enter english score: ");
        scanf("%f", &students[i].english_score);

        printf("Enter c score: ");
        scanf("%f", &students[i].c_score);

        printf("\n");
    }

    // Calculate average score for each student
    float student_average[6];
    for (i = 0; i < 6; i++)
    {
        student_average[i] = (students[i].math_score + students[i].english_score + students[i].c_score) / 3.0;
    }

    // Print average score for each student
    printf("\n");
    printf("Average Scores:\n");
    for (i = 0; i < 6; i++)
    {
        printf("Student %s (ID: %d): %.2f \n", students[i].name, students[i].id, student_average[i]);
    }

    // Calculate average score for each course
    float math_sum = 0, english_sum = 0, c_sum = 0;
    for (i = 0; i < 6; i++)
    {
        math_sum += students[i].math_score;
        english_sum += students[i].english_score;
        c_sum += students[i].c_score;
    }
    float math_avg = math_sum / 6;
    float english_avg = english_sum / 6;
    float c_avg = c_sum / 6;

    // Print average for each course
    printf("\n");
    printf("Average Math score: %.2f\n", math_avg);
    printf("Average English score: %.2f\n", english_avg);
    printf("Average C score: %.2f\n", c_avg);

    return 0;
}