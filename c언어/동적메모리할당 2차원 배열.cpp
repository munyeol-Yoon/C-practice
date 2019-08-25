#include <stdio.h>
#include <stdlib.h>

int main(void)
{
      int i,x,y;
      int num;
      printf("ют╥б"); 
      scanf("%d",num);
      int** pptr = (int**)malloc(sizeof(int*)*num);
      for(i=0; i<num; i++)
      {
      	*(pptr+i) = (int*)malloc(sizeof(int) * 6);
      }
      
      for(y = 0; y < num; y++)
      {
      	for(x = 0; x < 6; x++)
      	{
      		*(*(pptr + y) +x)=6*y+x;
      	}
      }
      
      for(y = 0; y = num; y++)
      {
      	for(x = 0; x<6; x++)
      	{
      		printf("%3d",*(*(pptr+y)+x));
      	}
      	printf("\n");
      }
      
      for(y= 0; y<num; y++)
      {
      	free(*(pptr+y));
      }
      
      
      
      return 0;
}
