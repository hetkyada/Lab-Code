//WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI=weight(kgs)/(Height(Mts)*Height(Mts)).
#include <stdio.h>
int main() {
    float weight, height, bmi;
    printf("Enter weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    bmi = weight / (height * height);
    printf("BMI: %.2f\n", bmi);
    if (bmi < 15) {
        printf("Category: Starvation\n");
    } else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("Category: Anorexic\n");
    } else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("Category: Ideal\n");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("Category: Overweight\n");
    } else if (bmi >= 30 && bmi <= 39.9) {
        printf("Category: Obese\n");
    } else if (bmi >= 40) {
        printf("Category: Morbidity Obese\n");
    }
    return 0;
}
