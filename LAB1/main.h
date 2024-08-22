// Structure to store student information
struct Student{
    int student_ID;
    int course1;
    int course2;
    int course3;
    float average;
};

// Function to read student data
void readData(struct Student *students, int *c);

// Function to get the student with the highest average
struct Student getMaxAverageStudent(struct Student *s, int n);
