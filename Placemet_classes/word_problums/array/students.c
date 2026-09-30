#include <stdio.h>

typedef struct {
    int roll;
    char name[30];
    int marks1;
    int marks2;
    int marks3;
} Student;

Student inputStudent(void);
int totalMarks(Student s);
double percentage(Student s);
void output(Student s, int total, double pct);

Student inputStudent(void) {
    Student s;

    scanf("%d", &s.roll);
    scanf("%s", s.name);
    scanf("%d", &s.marks1);
    scanf("%d", &s.marks2);
    scanf("%d", &s.marks3);

    return s;
}

int totalMarks(Student s) {
    return s.marks1 + s.marks2 + s.marks3;
}

double percentage(Student s) {
    return (double)totalMarks(s) / 3;
}

void output(Student s, int total, double pct) {
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Total: %d\n", total);
    printf("Percentage: %.2lf\n", pct);
}

int main() {
    Student s;
    int total;
    double pct;

    s = inputStudent();

    total = totalMarks(s);

    pct = percentage(s);

    output(s, total, pct);

    return 0;
}