#include <stdio.h>
#include <stdlib.h>

/*
Ask user a question 
If answer is "n" Take Student no and
name from users and store them in struct pointer 
If user enter "q" quit

*/
typedef struct {
    int no;
    char* name;
} student;

int main(void)
{
    student* students = malloc(0);

    char controller = '\0';
    int student_count = 0;
    while (1) {
        printf("Do you want to add a new student, press n to continue, q to exit\n");
        scanf("%c", &controller);
        if (controller == 'q')
            break;
        else if (controller == 'n') {
            int no;
            char name[256];
            printf("Number:");
            scanf("%d", &no);
            printf("Name:");
            scanf("%s", name);

            student s1 = {.no = no, .name = name};
            student_count++;
            students = realloc(students, sizeof(student) * student_count);
            students[student_count - 1] = s1;

            fseek(stdin,0,SEEK_END);
        }
    }

    printf("%s", students[0].name);

    return 0;
}
