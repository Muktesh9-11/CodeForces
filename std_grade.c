#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int regno;
    int marks;
    char grade;
};

char calculate_grade(int marks) {
    if (marks >= 90 && marks <= 100) return 'A';
    else if (marks >= 70 && marks <= 89) return 'B';
    else if (marks >= 50 && marks <= 69) return 'C';
    else return 'F'; // Fail
}

void sort_students(struct student s[], int n) {
    struct student temp;
    for (int i = 0; i < n-1; ++i) {
        for (int j = i+1; j < n; ++j) {
            if (s[i].marks < s[j].marks) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void display_by_grade(struct student s[], int n) {
    char grades[] = {'A', 'B', 'C', 'F'};
    for (int g = 0; g < 4; ++g) {
        printf("\nGrade %c:\n", grades[g]);
        int found = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i].grade == grades[g]) {
                printf("Name: %s | Reg No: %d | Marks: %d\n", s[i].name, s[i].regno, s[i].marks);
                found = 1;
            }
        }
        if (!found) {
            printf("No students in this grade.\n");
        }
    }
}

void search_by_regno(struct student s[], int n, int regno) {
    for (int i = 0; i < n; ++i) {
        if (s[i].regno == regno) {
            printf("\nStudent found:\n");
            printf("Name: %s\nReg No: %d\nMarks: %d\nGrade: %c\n", s[i].name, s[i].regno, s[i].marks, s[i].grade);
            return;
        }
    }
    printf("\nStudent with Reg No %d not found.\n", regno);
}

int main() {
    struct student s[5];
    int n = 5;

    printf("Enter details for 5 students:\n");
    for (int i = 0; i < n; ++i) {
        printf("\nStudent %d:\n", i+1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Registration Number: ");
        scanf("%d", &s[i].regno);
        printf("Marks: ");
        scanf("%d", &s[i].marks);
        s[i].grade = calculate_grade(s[i].marks);
    }

    sort_students(s, n);

    display_by_grade(s, n);

    // Search
    int reg;
    printf("\nEnter registration number to search: ");
    scanf("%d", &reg);
    search_by_regno(s, n, reg);
    printf("\nEnter registration number to search: ");
    scanf("%d", &reg);
    search_by_regno(s, n, reg);

    return 0;
}
