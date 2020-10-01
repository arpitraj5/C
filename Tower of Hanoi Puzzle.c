#include <stdio.h> 

// C recursive function to solve tower of hanoi puzzle 
void towerOfHanoi(int n, char beg, char end, char aux) 
{ 
	if (n == 1) 
	{ 
		printf("\n Move disk 1 from rod %c to rod %c", beg, end); 
		return; 
	} 
	towerOfHanoi(n-1, beg, aux, end); 
	printf("\n Move disk %d from rod %c to rod %c", n, beg, end); 
	towerOfHanoi(n-1, aux, end, beg); 
} 

int main() 
{ 
	int n; // Number of disks
	printf("#This is a recursive function to solve TOWER of HANOI puzzle in C Language.\n");
	printf("Enter the number of disks:");
	scanf("%d",&n); 
	towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods 
	return 0; 
} 

