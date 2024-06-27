#include <stdio.h>
#include <math.h>


// @brief given a and n, returns a ^ n
// @return (double) of the result of power
double power(int a, int n){
    double sum = 1;
    for (int i = 0; i < n; i++){
        sum *= a;
    }
    return sum;
}

int main() {
    int a, n;

    printf("enter the a and n you want their sum: ");
    scanf("%d %d", &a, &n);

    double v = power(a, n);
    double sum = 0;
    char string[500];

    // convert the double to string to iterate over digits
    snprintf(string, sizeof(string), "%.0f", v);

    // loop to go through all digits
    for (int i = 0; string[i] != '\0'; i++){
        sum += string[i] - '0';        // convert to integer, then add to sum
    }

    // print the sum of digits
    printf("the sum of digits in the 2^1000 is: %.0f\n", sum);

    return 0;
}
