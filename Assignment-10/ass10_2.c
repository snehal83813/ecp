#include <stdio.h>

int main()
{
int decinum, binarynum[32], x;

printf("Please enter a decimal number: ");
scanf("%d", &decinum);

// Converts decimal to binary
for (x = 0; decinum > 0; x++) {
binarynum[x] = decinum % 2;
decinum = decinum / 2;
}

printf("Binary representation is: ");
for (x = x - 1; x >= 0; x--) {
printf("%d", binarynum[x]);
}

return 0;
}
