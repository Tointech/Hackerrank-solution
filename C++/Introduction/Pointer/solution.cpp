#include <stdio.h>

void update(int *a, int *b)
{
    int sum, absDifference;

    sum = *a + *b;
    absDifference = *a - *b > 0 ? (*a - *b) : (*b - *a);

    *a = sum;
    *b = absDifference;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d" "%d", &a, &b);
    update(pa, pb);
    printf("%d" "%d", a, b);

    return 0;
}
