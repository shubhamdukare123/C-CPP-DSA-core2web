
#include<stdio.h>

void main() {
	int x = 19;
	int ans = x++ + --x - x++; 
	printf("%d\n", ans);
	x = 19;
	int ans2 = --x + x-- - x++ + ++x;
	printf("%d\n", ans2);
}
