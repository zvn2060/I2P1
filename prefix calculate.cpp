#include <stdio.h>
#include <ctype.h>

float calculate(void);

int main(void)
{
    printf("%.3f\n", calculate());
    return 0;
}

float calculate(void)
{
    int c;
    float ans;
    float op1, op2;

    c = getchar();
    if (isspace(c)) {
        ans = calculate();
    } else if (c=='+') {
        op1 = calculate();
        op2 = calculate();
        ans = op1 + op2;
    } else if (c=='-') {
        op1 = calculate();
        op2 = calculate();
        ans = op1 - op2;
    } else if (c=='*') {
        op1 = calculate();
        op2 = calculate();
        ans = op1 * op2;
    } else if (c=='/'){
    	op1 = calculate();
        op2 = calculate();
        ans = op1 / op2;
	} else if (isdigit(c)) {
        ungetc(c, stdin);
        scanf("%f", &ans);
    }

    return ans;

}

