#include <stdio.h>
#define PI 3.1416
void calculateCircumference(float radius, float *circumference)
{
    *circumference = PI * diameter;
}
void calculateDistance(int *leftRotations, int *rightRotations,
                       float *circumference,
                       float *leftDistance,
                       float *rightDistance,
                       float *totalDistance)
{
    *leftDistance = (*leftRotations) * (*circumference);
    *rightDistance = (*rightRotations) * (*circumference);
    *averageDistance = (*leftDistance + *rightDistance) / 2;
    *totalDistance = (*leftDistance + *rightDistance);
}
int main()
{
    float radius, circumference;
    float leftDistance, rightDistance, totalDistance;

    int leftRotations, rightRotations;

    printf("Enter wheel diameter (in meters): ");
    scanf("%f", &radius);
    printf("Enter left wheel rotations: ");
    scanf("%d", &leftRotations);
    printf("Enter right wheel rotations: ");
    scanf("%d", &rightRotations);

    calculateCircumference(diameter, &circumference);
    calculateDistance(&leftRotations, &rightRotations,
                      &circumference,
                      &leftDistance, &rightDistance,
                      &totalDistance);

    printf("\n ROBOT DISTANCE CALCULATION \n");
    printf("Wheel Circumference = %.2f meters\n", circumference);
    printf("Left Wheel Distance = %.2f meters\n", leftDistance);
    printf("Right Wheel Distance = %.2f meters\n", rightDistance);
    printf("Total Distance Travelled = %.2f meters\n", totalDistance);
    printf("Average Distance Travelled = %.2f meters\n", averageDistance);
    return 0;
}
