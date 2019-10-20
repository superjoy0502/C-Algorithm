/*
10�̸��� �ڿ������� 3�� 5�� ����� ���ϸ� 3,5,6,9�̴�. �̵��� ������ 23�̴�.

1000�̸��� �ڿ������� 3,5�� ����� ������ ���϶�.
*/

#include <stdio.h>

int main(){
	int num;
	int i;
	int result = 0;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	
	for (i = 1; i <= num; i++){
		if (i % 3 == 0 || i % 5 == 0){
			result = result + i;
		}
		// printf("%d", i);
	}
	
	printf("%d", result);
	
	return 0;
	
}
