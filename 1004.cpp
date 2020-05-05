#include <stdio.h>

int main()
{
    int i,j,TC, x1, x2, y1, y2, c;
    scanf("%d", &TC);
    for (i = 0; i < TC; i++)
    {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2); //출발 도착지 좌표 입력
        int a = 0;
        int b = 0; //int a b 초기화
        int P,q,w,r;
        scanf("%d", &P); //행성갯수 입력
        
        for (j = 0; j < P; j++)
        {
            scanf("%d %d %d", &q, &w, &r);

            int R1, R2, d;
            R1 = (q - x1) * (q - x1) + (w - y1) * (w - y1);
            R2 = (q - x2) * (q - x2) + (w - y2) * (w - y2);
            d = r * r;
            if (d > R1)
            {
                a++;
            }
            if (d > R2) //거리계산 잘하기
            {
                b++;
            }
            if (d > R1 && d > R2) //출발 도착지점이 한 행성 안에있을때무효화
            {
                a--;
                b--;
            }
        }
        c = a + b;
        printf("%d\n", c); //정답에 \n 써주기
    }
     return 0;
}
