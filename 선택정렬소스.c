#include <stdio.h>
#include <stdlib.h>
#define SWAP(x, y, temp) ( (temp)=(x), (x)=(y), (y)=(temp) )

void selection(int list[])
{
	int i, j, least, temp;
	for (int k = 0; k < 6; k++) {
		printf("%d ", list[k]);
	}
	printf("\n");
	for (i = 0; i<5; i++) {
		least = i;
		for (j = i + 1; j < 6; j++)  // 최솟값 탐색
			if (list[j] < list[least]) {
				least = j;
			}
				SWAP(list[i], list[least], temp);
			
				for (int k = 0; k < 6; k++) {
					printf("%d ", list[k]);
				}
			
		printf("  %d 끝\n", i);
		
		
	}
	
}
void selection_sort(int list[], int n)
{
	int i, j, least, temp;
	for (i = 0; i<n - 1; i++) {
		least = i;
		for (j = i + 1; j < n; j++)  // 최솟값 탐색
			if (list[j] < list[least]) { least = j; }
			SWAP(list[i], list[least], temp);
		
	}
}
void main()
{
	int list[6] = { 5,8,2,3,1,7 };
	selection(list, 6);
	selection_sort(list, 6); // 선택 정렬 호출
	printf("결과 : ");
	for (int i = 0; i < 6; i++) // 정렬 결과 출력
		printf("%d ", list[i]);
}