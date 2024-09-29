
#include "stdio.h"

void main() {
	int x = 20;
	int ans = 0;

	ans = x++ + x++;
	printf("%d %f\n", ans, x);
}
