
#include<stdio.h>

int preinc(int x) {
	x = x+1;
	return x;

}

int postinc(int x) {
	int temp = x;
	x = x+1;
	return temp;
}

void main() {
	int x = 19;
	int y = 19;
	int ans1 = x++ + ++x;
	int ans2 = postinc(y) + preinc(y);
	printf("Predefine ans : %d\n", ans1);
	printf("Userdefined ans : %d\n", ans2);


}
