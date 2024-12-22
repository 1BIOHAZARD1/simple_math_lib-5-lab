#include <cassert>
#include "triangle.h"

void test_calculate_third_angle() {
    assert(calculate_third_angle(60.0, 60.0) == 60.0);
    assert(calculate_third_angle(30.0, 40.0) == 110.0);
    assert(calculate_third_angle(90.0, 45.0) == 45.0);
}

int main() {
    test_calculate_third_angle();
    return 0;
}
