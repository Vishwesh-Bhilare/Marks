#include <stdio.h>

int main(){
    float mrks[3], avg;
    int i=0;
    
    // printf("Enter the marks for Math, Physics, Chemistry and CS respectively:\n");
    // for(i=0; i<=2; i++){
    //     scanf("%f", mrks[i]);
    // }
    
    // for(i=0; i<=2; i++){
    //     printf("%f", mrks[i]);
    // }
    
    printf("Enter marks for Physics: ");
    scanf("%f", &mrks[0]);
    
    printf("Enter marks for Chemistry: ");
    scanf("%f", &mrks[1]);
    
    printf("Enter marks for Math: ");
    scanf("%f", &mrks[2]);
    
    // for(i=0; i<=2; i++){
    //     printf("%f\n", mrks[i]);
    // }
    
    avg = (mrks[0] + mrks[1] + mrks[2]) / 3;
    
    printf("Your average is: %f \n", avg);
    
    printf(" ");
    // Grade for Physics
    if(mrks[0]<40){
        printf("Failed in Physics.");
    }
    else if(mrks[0] <= 50){
        printf("3rd Divison in Physics.");
    }
    else if(mrks[0] <= 60){
        printf("2nd Divison in Physics.");
    }
    else if(mrks[0] <= 70){
        printf("1st Divison in Physics.");
    }
    else if(mrks[0] <= 80){
        printf("Distinction in Physics.");
    }
    
    printf(" ");
    //Grade for Chem
    if(mrks[1]<40){
        printf("Failed in Chemistry.");
    }
    else if(mrks[1] <= 50){
        printf("3rd Divison in Chemistry.");
    }
    else if(mrks[1] <= 60){
        printf("2nd Divison in Chemistry.");
    }
    else if(mrks[1] <= 70){
        printf("1st Divison in Chemistry.");
    }
    else if(mrks[1] <= 80){
        printf("Distinction in Chemistry.");
    }
    
    printf(" ");
    //Grade for Math
    if(mrks[2]<40){
        printf("Failed in Maths.");
    }
    else if(mrks[2] <= 50){
        printf("3rd Divison in Maths.");
    }
    else if(mrks[2] <= 60){
        printf("2nd Divison in Maths.");
    }
    else if(mrks[2] <= 70){
        printf("1st Divison in Maths.");
    }
    else if(mrks[2] <= 80){
        printf("Distinction in Maths.");
    }
    
    return 0;
}