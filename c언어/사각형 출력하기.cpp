#include <stdio.h>
#define N 10

int main (void)
{
	int i, j ;
	for(i = 0; i < N; i++) /*1는 0으로 초기화 i가 n 보다 작을때에 한해서 1를 증가해서 반복시킨다 */
	{
		for(j = 0; j < N; j++) /* i가 증가할때마다 j도 0부터 10까지 증가 */
		{
		printf("★");
	    }
	    printf("\n");
	}
	return 0;
}
