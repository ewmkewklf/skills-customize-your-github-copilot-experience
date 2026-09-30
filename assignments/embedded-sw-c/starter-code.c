#include <stdio.h>

int main(void) {
    int temperature = 72;

    printf("Embedded system status check\n");

    if (temperature > 80) {
        printf("Warning: temperature is too high.\n");
    } else {
        printf("System is operating normally.\n");
    }

    return 0;
}
