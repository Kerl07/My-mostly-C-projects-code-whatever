#include <stdio.h>

int main() {
    int studentNum = 0;
    // checks if the number you put is valid. If not, this repeats until you put a valid number
    for (; studentNum <= 0;) { 
        printf("Please input a student number: ");
        scanf("%d", &studentNum);
        if (studentNum <= 0) {
            printf("Invalid, Please input a valid number!\n");
        }

    }
        int studentCount = 1; // checks the amount of students, has to be assigned as 1. If not, the number of students inputted will be inaccurate
        int failCount = 0;
        int totalScore = 0;
        float averageScore = 0;
        int score = 0;
        int passCount = 0;
         for (studentCount = 1; studentCount <= studentNum; studentCount++ ) { /*studentCount is initialized, then defines the condition if the user inputs a studentNumber. Which increases the count of students
            based on the number put*/
         printf("Input the score of the student: ");
         scanf("%d", &score); 
         if (score < 0 || score > 100) {  // safety check if theres an invalid score
            printf("Invalid Score\n"); 
         } else {
           switch (score / 10) {
            case 10:
            case 9: // if score is 90-100
                printf("Excellent\n");
                passCount++;
                break;
            case 8: // if score is 80-89
                printf("Very Good\n");
                passCount++;
                break;
            case 7: // if score is 75-79
                printf("Good\n");
                passCount++;
                break;
            case 6: // if score is 60-74
                printf("Needs Improvement\n");
                passCount++;
                break;
            default: // if score <= 59
                printf("Failure\n");
                failCount++;
                break;

            
            }
           
        } 
         totalScore += score; // CHECKS FOR THE TOTAL SCORE IM FUCKING FREEEEEEEEEEE IM SO GODDAMN STUPID IT WAS THAT FUCKING SIMPLE
          

            averageScore = totalScore / studentNum;
            
    } 
          printf("Total score of students: %d\n", totalScore);
          printf("Average score of students: %.1f\n", averageScore);
          printf("Number of Passing Students: %d\n", passCount);
          printf("Number of Failing Students: %d\n", failCount);
    return 0;
}