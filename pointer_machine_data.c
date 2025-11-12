#include <stdio.h>

int main() {
    int machineData[5] = {1200, 450, 78, 300, 25};

    char *machineNames[5] = {
        "Motor Speed (RPM)",
        "Oil Pressure (kPa)",
        "Vibration Level (Hz)",
        "Power Usage (W)",
        "Coolant Flow (L/min)"
    };

    int *ptr = machineData;

    printf("--- Machine Readings ---\n");
    for (int i = 0; i < 5; i++) {
        printf("%-22s : %d\n", machineNames[i], *ptr);
        ptr++;
    }

    return 0;
}

