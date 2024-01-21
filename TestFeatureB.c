#include<stdio.h>
#include<stdbool.h>

int f() {
    int result, count;
    bool done;
    result = 0;
    count = 1;
    done = false;
    while (done != true) {
        result = result + count;
        done = !(count != 10);
        count = count + 1;
    }
    return result;
}

int main() {
    printf("%d\n", f());
    return 0;
}
