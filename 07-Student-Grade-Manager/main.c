#include <stdio.h>

int main(){
    printf("\n=====================================\n");
    printf("        STUDENT GRADE MANAGER\n");
    printf("=====================================\n");
    
    char name[20];
    printf("\nEnter Student Name: ");
    scanf("%19s", name);

    printf("\n");
    
    int i;
    int marks[5];

    for(i=0; i<5; i++){
        printf("Enter marks for Subject %d: ", i+1);
        scanf("%d", &marks[i]);
    }

    printf("\n");

    int total = 0;
    for(i=0; i<5; i++){
        total = total + marks[i];
    }

    float percentage;
    percentage = (total / 500.0) * 100;

    printf("\n=====================================\n");
    printf("Student Name : %s\n", name);

    printf("\nTotal Marks : %d\n", total);
    printf("Percentage   : %.2f%%\n", percentage);
    
    if (percentage >= 80) {
        printf("\nGrade        : A"); 
    } else if (percentage >= 70) {
        printf("\nGrade        : B"); 
    } else if (percentage >= 60) {
        printf("\nGrade        : C");
    } else if (percentage >= 50) {
        printf("\nGrade        : D");
    } else if (percentage >= 40) {
        printf("\nGrade        : E");
    } else {
        printf("\nGrade        : F");
    }

    if (percentage >= 40) {
        printf("\nResult       : PASS");
    } else {
        printf("\nResult       : FAIL");
    } 

    printf("\n=====================================\n");

    return 0;
}