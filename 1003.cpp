#include <stdio.h>

int memo[41]; //memo 사용법 확인
int fibonacci(int n);
int main()
{
    for (int i = 0; i < 41; i++) {
        memo[i] = -1;
    }

    int n, TC, i;
    scanf("%d", &TC); // for문 돌리기 전에, scanf 받는다.

    for (i = 0; i < TC; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            printf("1 0\n"); // n = 0 일경우에 답을 출력한다.
        }
        else
        {
            int a = fibonacci(n);
            int b = fibonacci(n - 1);
            printf("%d %d\n", b, a); //순서를 바꿔서 출력해야 기존 답과 동일하다
        }
        //printf("0: %d / 1: %d", a-1, a);

    }

    
    return 0;
}
int fibonacci(int n)
    {
        if (n == 0) {
            //printf("0\n");
            //count0++;
            return 0;
        }
        else if (n == 1) {
            //printf("1\n");
            //count1++;
            return 1;
        }
        else if (memo[n] != -1) {
            return memo[n];
        }
        else {
            //int n1 = n - 1;
            //int n2 = n - 2;
            int value = fibonacci(n - 1) + fibonacci(n - 2);
            memo[n] = value;
            return value;
        }
    
}
