#include <stdio.h>

int main(){
	int k;
	int i;
	int nums[2][2];
	printf("Please enter x1: ");
	scanf("%d", &nums[0][0]);
	printf("Please enter x2: ");
	scanf("%d", &nums[0][1]);
	printf("Please enter y1: ");
	scanf("%d", &nums[1][0]);
	printf("Please enter y2: ");
	scanf("%d", &nums[1][1]);
	for(i = nums[0][0]; i <= nums[0][1]; i++) {
		for(k = nums[1][0]; k <= nums[1][1]; k++)
    printf("x: %d, y: %d \n", i, k);
	}
	return 0;
}