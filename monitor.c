#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Running processes:\n");
    system("ps -e");
    return 0;
}
