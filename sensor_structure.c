#include<stdio.h>


struct Sensor 
{
    int id;
    char status[10];
    float value;
  
};

int main() {
    struct Sensor s;

   
    printf("Enter Sensor ID: ");
    scanf("%d", &s.id);

    printf("Enter Sensor status: ");
    scanf("%s", s.status);

    printf("Enter Sensor Value: ");
    scanf("%f", &s.value);

    

    printf("\n--- Sensor Details ---\n");
    printf("Sensor ID: %d\n", s.id);
    printf("Sensor status: %s\n", s.status);
    printf("Sensor Value: %.2f\n", s.value);
  

    return 0;
}


