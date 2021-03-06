/* In the C programming language(after 99 standard), a new keyword is introduced known as restrict.

- restric keyword is mainly used in pointer declarations as a type qualifer for pointers.
- It doesn't add any new functionality. It is only a way for programmer to inform about an optimizations that complier can make.

- When we use restrict with a pointer ptr, it tells the compiler that ptr is the only way to access the object pointed by it and compiler doen't need to add any additional checks.

- If a programmer use restrict keyword and violate the above condition, result is undefined behavior.

- restrict is not supported by C++. It is a C only keyword. */

// C program to use restrict keyword.
#include <stdio.h>

// Note that the purpose of restrict is to show only syntax.
// It doesn't change anything in output (or logic).
// It is just a way for programmer to tell compiler about an optimizations
void use(int *a, int *b, int *restrict c)
{
    *a += *c;

    // Since c is restrict, compiler will
    // not reload value at address c in
    // its assembly code. Therefore generated
    // assembly code is optimized.

    *b += *c;
}

int main(void)
{
    int a = 50, b = 60, c = 70;
    use(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
