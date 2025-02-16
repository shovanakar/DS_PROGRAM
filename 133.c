//Flexible Array Members in a Structure in C
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[20];
    int marks[];
};

int main() {
    int num_subjects, i;
    printf("Enter the number of subjects: ");
    scanf("%d", &num_subjects);

    struct Student *s = (struct Student *)malloc(sizeof(struct Student) + num_subjects * sizeof(int));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter Roll No: ");
    scanf("%d", &s->roll_no);
    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks for %d subjects: \n", num_subjects);
    for (i = 0; i < num_subjects; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s->marks[i]);
    }
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", s->roll_no);
    printf("Name: %s\n", s->name);
    printf("Marks: ");
    for (i = 0; i < num_subjects; i++) {
        printf("%d ", s->marks[i]);
    }
    printf("\n");


    free(s);

    return 0;
}