#include <stdio.h>

int main()
{
    float d, v, t;

    printf("Insira o valor de D\n");
    scanf("%f", &d);

    do
    {
        printf("Insira o valor de v\n");
        scanf("%f", &v);
    } while (v == 0 && d == 0);

    do
    {
        printf("Insira o valor de t\n");
        scanf("%f", &t);
    } while (t == 0 && (v == 0 || d == 0));

    if (d == 0)
    {
        printf("\nv * t = D");
        printf("\n%.2f * %.2f = %.2f", v, t, v * t);
    }
    if (v == 0)
    {
        printf("\nD / t = v");
        printf("\n%.2f / %.2f = %.2f", d, t, d / t);
    }
    if (t == 0)
    {
        printf("\nD / v = t");
        printf("\n%.2f / %.2f = %.2f", d, v, d / v);
    }
}