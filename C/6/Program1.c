
#include "stdio.h"

void main() {
	int x = 9;
	int ans = ++x + ++x;
	printf("%d\n", ans);
	printf("%d\n", x);
}
