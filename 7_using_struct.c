#include <stdio.h>
#include <string.h>

struct student {
    int id;
    char name[20];
    float percentage;
};

struct charset{
    char s;
    int i;
};

void print(int id, char name[], float percentage) {
    printf("ID: %d\n", id);
    printf("Name: %s\n", name);
    printf("Percentage: %.2f\n", percentage);
}

void keyvalue(char* s, int* i){
    printf("Enter a character and an integer: ");
    scanf("%c %d",s,i);}

int main() {
    struct student s1;
    s1.id = 1;
    strcpy(s1.name, "Ankit");
    s1.percentage = 90.5;
    print(s1.id, s1.name, s1.percentage);

    int j;
    struct charset c1;
    keyvalue(&c1.s, &c1.i);
    printf("Char: %c\n", c1.s); 
    printf("Int: %d\n", c1.i);

    return 0;
}