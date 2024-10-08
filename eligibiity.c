#include <stdio.h>

int main() {
    int course, marks, total_students = 200000;
    char branch;
    float percentile, approximate_rank;

    printf("Enter the course after 12th (1 for Engineering, 2 for BSc, 3 for BCom): ");
    scanf("%d", &course);

    printf("Enter percentile of CET: ");
    scanf("%d", &marks);

    // Calculate percentile based on marks
    percentile = (marks / 100.0) * 100;

    // Calculate approximate rank
    approximate_rank = total_students * (1 - (percentile / 100));

    // Display the approximate rank
    printf("Your approximate rank based on a CET percentile of %.2f is: %.0f\n", percentile, approximate_rank);

    switch (course) {
        case 1:  // Engineering
            if (marks > 90) {
                printf("You can do Engineering\n");
                printf("Select branch for B.Tech based on marks:\n");
                printf("Enter 'c' for Software Engineering, 'm' for Mechanical Engineering, 'e' for Electronics Engineering: ");
                getchar();
                scanf("%c", &branch);

                if (branch == 'c' && marks >= 96) {
                    printf("Eligible for Software Engineering\n");
                } else if (branch == 'm' && marks >= 92) {
                    printf("Eligible for Mechanical Engineering\n");
                } else if (branch == 'e' && marks >= 94) {
                    printf("Eligible for Electrical Engineering\n");
                } else {
                    printf("Ineligible for selected Engineering branch\n");
                }
            } else {
                printf("Marks not sufficient for Engineering.\n");
            }
            break;

        case 2:  // BSc
            if (marks > 60) {
                printf("You can do BSc\n");
                printf("Select branch for BSc based on marks:\n");
                printf("Enter 'c' for BCS, 'm' for BSc Maths, 'e' for BSc in Electronics: ");
                getchar();
                scanf("%c", &branch);

                if (branch == 'c' && marks >= 70) {
                    printf("Eligible for BCS\n");
                } else if (branch == 'm' && marks >= 65) {
                    printf("Eligible for BSc Maths\n");
                } else if (branch == 'e' && marks >= 60) {
                    printf("Eligible for BSc Electronics\n");
                } else {
                    printf("Ineligible for selected BSc branch\n");
                }
            } else {
                printf("Marks not sufficient for BSc.\n");
            }
            break;

        case 3:  // BCom
            if (marks > 50) {
                printf("You can do BCom\n");
                printf("Select branch for BCom based on marks:\n");
                printf("Enter 'b' for Business Laws, 'm' for Marketing, 'i' for BSc in Income Tax: ");
                getchar(); 
                scanf("%c", &branch);

                if (branch == 'b' && marks >= 45) {
                    printf("Eligible for Business Laws\n");
                } else if (branch == 'm' && marks >= 45) {
                    printf("Eligible for BSc Marketing\n");
                } else if (branch == 'i' && marks >= 45) {
                    printf("Eligible for BSc Income Tax\n");
                } else {
                    printf("Ineligible for selected BCom branch\n");
                }
            } else {
                printf("Marks not sufficient for BCom.\n");
            }
            break;

        default:
            printf("Invalid course selection.\n");
            break;
    }

    return 0;
}
