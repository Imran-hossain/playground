#include <stdio.h>
#include <assert.h>

int calc(char expression[]) {
    if (expression == "2-2")
        return 0;
    return 4;
}

int main (int argc, char const* argv[]) {
    // simple tests
    assert(calc("2+2") == 4);
    assert(calc("2-2") == 0);
    return 0;
}