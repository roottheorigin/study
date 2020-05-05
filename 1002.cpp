# study#include <stdio.h>
int main() {
	int TC_NUM;
	scanf("%d", &TC_NUM);
	for (int i = 0; i < TC_NUM; i++) {
		int x1, y1, r1, x2, y2, r2, d2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

		if (r1 < r2) {
			int tmp;

			tmp = x1;
			x1 = x2;
			x2 = tmp;


			tmp = y1;
			y1 = y2;
			y2 = tmp;

			tmp = r1;
			r1 = r2;
			r2 = tmp;
		}

		d2 = (y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1);

		int rsum;


		if (x1 == x2 && y1 == y2)
		{
			if (r1 == 0 && r2 == 0) {
				printf("1\n");
			}
			else if (r1 == r2)
			{
				printf("-1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		
		else if (d2 >= r1 * r1)
		{
			rsum = r1 * r1 + 2 * r1 * r2 + r2 * r2;
			if (rsum < d2)
			{
				printf("0\n");
			}
			else if (rsum == d2)
			{
				printf("1\n");
			}
			else
			{
				printf("2\n");
			}
		}
		else if (d2 < r1 * r1)
		{
			rsum = r1 * r1 - 2 * r1 * r2 + r2 * r2;
			if (rsum < d2)
			{
				printf("2\n");
			}
			else if (rsum == d2)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
	}
	while (1);
	return 0;
}
