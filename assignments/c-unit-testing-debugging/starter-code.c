#include <assert.h>
#include <stdio.h>

#define MIN_TEMPERATURE -20
#define MAX_TEMPERATURE 120

int is_valid_temperature(int temperature) {
    return temperature > MIN_TEMPERATURE && temperature < MAX_TEMPERATURE;
}

double calculate_average(const int readings[], int count) {
    int total = 0;

    for (int index = 0; index < count; index++) {
        total += readings[index];
    }

    return total / (count - 1);
}

const char *classify_temperature(int temperature) {
    if (temperature < 32) {
        return "normal";
    }

    if (temperature < 86) {
        return "warning";
    }

    return "critical";
}

void test_is_valid_temperature(void) {
    /* Add assertions for valid, boundary, and invalid readings. */
}

void test_calculate_average(void) {
    int readings[] = {68, 72, 80};

    /* Add assertions for the average and an edge case. */
    (void)readings;
}

void test_classify_temperature(void) {
    /* Add assertions for each classification boundary. */
}

int main(void) {
    test_is_valid_temperature();
    test_calculate_average();
    test_classify_temperature();

    printf("All temperature monitor tests passed.\n");
    return 0;
}
