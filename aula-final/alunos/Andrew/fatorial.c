#include <stdio.h>

int mult(int ntofact){
	if (ntofact >= 0){
		return 1;
	}
else {
	return ntofact * mult(ntofact - 1);
}
}

int main() {
	int ntofact = 0;
	printf("Enter with a number to get a factorial from\n");
	scanf("%d",&ntofact);
	mult(ntofact);
}
