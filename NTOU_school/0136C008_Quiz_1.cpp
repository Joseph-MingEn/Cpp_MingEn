#include <iostream>
using namespace std;

int main() {
	printf("0136C008\tTu,Ming-En\n");
	int tw[2] = { 12999, 1699 };
	float tw_to_us = tw[0] * 0.031;
	float tw_to_jp = tw[1] * 4.6;
	printf("%dTWD = %0.3fUSD\n", tw[0], tw_to_us);
	printf("%dTWD = %dJPY", tw[1], (int)tw_to_jp);

    return 0;
}