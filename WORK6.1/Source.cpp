#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void call(int, int);
int main() {

	int d, m;
	scanf("%d %d", &d, &m);

	call(d, m);

	return 0;
}
void call(int d, int m) {

	int i, j, allday, count = 0;
	for (i = 1; i <= 12; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			allday = 31;
		else if (i == 2)
			allday = 28;
		else
			allday = 30;
		if (i - 1 == m && j == d)
			break;
		for (j = 1; j <= allday; j++) {
			count += 1;
			//printf("%d\n", j);
			if (i == m && j == d) {
				if (count % 7 == 1)
					printf("Thursday");
				else if (count % 7 == 2)
					printf("Friday");
				else if (count % 7 == 3)
					printf("Saturday");
				else if (count % 7 == 4)
					printf("Sunday");
				else if (count % 7 == 5)
					printf("Monday");
				else if (count % 7 == 6)
					printf("Tuesday");
				else if (count % 7 == 0)
					printf("Wednesday");
				break;
			}
		}
	}
}