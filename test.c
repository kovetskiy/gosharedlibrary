#include <stdio.h>

extern int GoTest () __asm__ ("main.Test");

int main() {
    printf("loaded Go\n");

    int i;
    i = GoTest();
    printf("Go returned %d\n", i);
}

int get_some_int() {
    printf("Go requested C int\n");
    return 100;
}
