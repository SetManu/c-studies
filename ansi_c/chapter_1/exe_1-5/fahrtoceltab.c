#include <stdio.h>

#define LOWER 0      // lower limit of table
#define UPPER 300    // upper limit
#define STEP 20      // step size

// print Fahrenheit-Celsius table
int main(void) {
    int fahr;
    printf("Shows a Fahrenheit to Celsius table.\n");
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
