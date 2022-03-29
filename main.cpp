#include <iostream>
#include "Patrat.h"
#include "tests.h"
#include "meniu.h"

int main() {
    tests();
    Patrat v[101],rez[101];
    runMeniu(v,rez);
    return 0;
}
