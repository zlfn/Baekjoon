#include <stdio.h>

int main()
{
	int number_of_child;
	scanf("%d",&number_of_child);
	int children[number_of_child];

	for(int i = 0; i < number_of_child; i++)
	{
		scanf("%d",&children[i]);
	}

	int memory[number_of_child+1] = {0};
	int count = 1;
	for(int i = number_of_child-1; 0<=i; i--)
	{
		int index = children[i]-1;
		memory[index] = memory[index + 1]+1;
		if(memory[index] > count) count = memory[index];
	}
	printf("%d",number_of_child-count);
}
