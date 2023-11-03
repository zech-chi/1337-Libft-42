#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, World!";
    // Attempt to copy the first 7 characters to the end of the string using memcpy.
    memcpy(str + 7, str, 7);

    printf("%s\n", str); // Undefined behavior!


    char str2[] = "Hello, World!";
    // Safely copy the first 7 characters to the end of the string using memmove.
    memmove(str2 + 7, str2, 7);

    printf("%s\n", str2); // Output: "Hello, Hello, World!"

    return 0;
}