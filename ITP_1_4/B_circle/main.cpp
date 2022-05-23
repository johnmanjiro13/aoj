#include <stdio.h>

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double r;
    cin >> r;
    double s = r * r * M_PI;
    double l = 2 * M_PI * r;
    printf("%.7lf %7lf", s, l);
}
