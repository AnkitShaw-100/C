#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[20];
    float percentage;
};

void print(int id, char name[], float percentage) {
    printf("ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Percentage: %.2f\n", percentage);
}

int main() {
    struct student s1;
    s1.id = 1;
    strcpy(s1.name, "Ankit");
    s1.percentage = 90.5;
    print(s1.id, s1.name, s1.percentage);
    return 0;
}