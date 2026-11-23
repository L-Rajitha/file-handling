
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[20];

    fp = fopen("student.txt", "w");
    fprintf(fp, "students");
    fclose(fp);

    fp = fopen("student.txt", "r");
    fscanf(fp, "%s", name);
    printf("Student Name: %s", name);
    fclose(fp);

    return 0;
}
