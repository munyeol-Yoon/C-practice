#include <stdio.h>

int main (void)
{
	int score = 85; // 학생의 정수를 의미합니다.
	if(score >= 90)
	{
		printf("당신의 학점은 A입니다. \n");
	}
	else if(score >=80)
	{
		printf("당신의 학점은 B입니다. \n");
	}
	else if(score >=70)
	{
		printf("당신의 학점은 C입니다. \n");
	}
	else if(score >=60)
	{
		printf("당신의 학점은 D입니다. \n");
	}
	else 
	{
		printf("당신의 학점은 F입니다. \n"); 
	}
	return 0;
}

