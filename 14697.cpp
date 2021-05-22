#include <stdio.h>

int main()
{
	int A, B, C;
	int number_of_student;
	scanf("%d %d %d %d",&A, &B, &C, &number_of_student);
	for(int i = 0; i<=50; i++)
		for(int j = 0; j<=50; j++)
			for(int k = 0; k<=50; k++)
				if(A*i+B*j+C*k==number_of_student)
				{
					printf("1"); return 0;
				}
	printf("0"); return 0;
}
