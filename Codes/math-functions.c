#include <stdio.h>
#include <math.h>

int main() {
    double A = sqrt(9); // Squre Root of a number
    double B = pow(3, 2); // power function where 3 is base and 2 is power
    int C = round(3.14); //rounding the value
    int D = ceil(3.14); // ceiling value of number
    int E = floor(3.14); // floor value of the number
    double F = fabs(-3.14); // absolute value of the number i.e -3 -> 3
    double G = log(3); // logarithm of a number
    double H = sin(45); //sin value
    double I = cos(45); // cosine value
    double J = tan(45); // tan value

    printf("%lf\n", A);
    printf("%lf\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%lf\n", F);
    printf("%lf\n", G);
    printf("%lf\n", H);
    printf("%lf\n", I);
    printf("%lf\n", J);

    return 0;
}