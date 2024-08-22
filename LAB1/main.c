#include <stdio.h>
#include "main.h"
#define MAXVAL 500


// Main function to execute the program
int main(void){
    struct Student students[MAXVAL];
    int n;

     // Read student data
    readData(students, &n);

    // Find the student with the maximum average
    struct Student maxStudent = getMaxAverageStudent(students, n);
    printf("\nMaximum Average is %.2f and the student is %d\n", maxStudent.average,maxStudent.student_ID);

    return 0;
}

// Function to read data for all students
void readData(struct Student *students,  int *c)
{
    scanf("%d",c);

    for (int i = 0; i<*c; i++)
    {
        // Read student ID and grades for three courses
        scanf("%d", &students[i].student_ID);
        scanf("%d%d%d", &students[i].course1, &students[i].course2, &students[i].course3);
        
        // Calculate the average grade
        students[i].average = (students[i].course1 + students[i].course2 + students[i].course3)/3.0;

         // Print the student details
        printf("%d %d %d %d %.2f\n", students[i].student_ID, students[i].course1, students[i].course2, students[i].course3, students[i].average);
    }
}

// Function to find the student with the maximum average grade
struct Student getMaxAverageStudent(struct Student *s, int n) {
    struct Student maxStudent = s[0];
    for (int i = 1; i < n; i++) {
        if (s[i].average > maxStudent.average) {
            maxStudent = s[i];
        }
    }
    return maxStudent;
}
