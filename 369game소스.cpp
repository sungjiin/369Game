#include <stdio.h>
#include <math.h>

// 1000보다 작은수까지의 369 게임
// 박수대신 -표시로 나타낸다.
// 하지만 33의 경우에는 --, 333의 경우에는 ---을 나타낸다.
//또한 233의 경우에는 --를 나타낸다.

int main() {
	int t;
	scanf_s("%d", &t);
	for (int i = 1; i <= t; i++) {
		if (i < 10) {
			if (i % 3 == 0) {
				printf("- ");
			}
			else printf("%d ", i);
		}
		else if (i >= 10 && i<100) {
			if (i / 10 == 3 || i / 10 == 6 || i / 10 == 9) {
				if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) printf("-- ");
				else printf("- ");
			}
			else if (i % 10 == 3 || i % 10 == 6 || i % 10 == 9) {
				printf("- ");
			}
			else printf("%d ", i);
		}
		else if (i < 1000 && i >= 100) {
			if (i / 100 == 3 || i / 100 == 6 || i / 100 == 9) {
				if ((i % 100) / 10 == 3 || (i % 100) / 10 == 6 || (i % 100) / 10 == 9) {
					if ((i % 100) % 10 == 3 || (i % 100) % 10 == 6 || (i % 100) % 10 == 9) {
						printf("--- ");
					}
					else printf("-- ");
				}
				else if ((i % 100) % 10 == 3 || (i % 100) % 10 == 6 || (i % 100) % 10 == 9) {
					printf("-- ");
				}
				else printf("- ");
			}
			else if ((i % 100) / 10 == 3 || (i % 100) / 10 == 6 || (i % 100) / 10 == 9) {
				if ((i % 100) % 10 == 3 || (i % 100) % 10 == 6 || (i % 100) % 10 == 9) {
					printf("-- ");
				}
				else printf("- ");
			}
			else printf("%d ", i);
		}
	}
	
	return 0;
}
