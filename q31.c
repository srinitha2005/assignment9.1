/*C program to demonstrate example of structure of array.*/

#include <stdio.h>

struct student {
    char name[30];
    int marks[5];
    int total;
    float avg;
};

int main()
{
    struct student arr;
    int i;

    printf("Enter name: ");
    gets(arr.name);

    printf("Enter marks:\n");
    arr.total = 0;
    for (i = 0; i < 5; i++) {
        printf("Marks in subject %d : ", i + 1);
        scanf("%d", &arr.marks[i]);
        arr.total += arr.marks[i];
    }
    arr.avg = (float)((float)arr.total / (float)5);

    printf("\nName: %s \nTotal: %d \naverage: %.2f", arr.name, arr.total, arr.avg);

    return 0;
}