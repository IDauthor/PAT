#include <stdio.h>
#include <stdlib.h>

int Cal_Callatz(int TempValue);

int main(int argc, char *argv[])
{
	int CalNum;
	int num;
	printf("请输入数字CalNum:");
	scanf("%d",&CalNum);
	//num = Cal_Callatz(CalNum);
	printf("The num of Div is %d\n",(Cal_Callatz(CalNum)));	
}

int Cal_Callatz(int TempValue)
{
	int CntEven = 0;
	int CntOdd = 0;
	int Value = TempValue;
	do
	{
		if(0 == TempValue%2)		//Even Number
		{
			TempValue = TempValue/2;
			//CntEven++;
			if(0 == Value%2)
			{
				CntEven++;
			}
			else 
			{
				CntOdd++;
			}
		}
		else
		{
			TempValue = (3*TempValue+1)/2;
			if(0 == Value%2)
			{
				CntEven++;
			}
			else 
			{
				CntOdd++;
			}
		}
	}while(TempValue>1);
	if(0 == Value%2)
	{
		return CntEven;
	}
	else
	{
		return CntOdd;
	}
}

/*
#include <stdio.h>
//int Cal_Callatz(int TempValue);
int main(int argc, char *argv[])
{
  int N = 0;
  int Count = 0;
  if(scanf("%d",&N))
  {}
  while(N>1)
  {
    if(0==N%2)
    {
      N=N/2;
    }
    else
    {
      N=(3*N+1)/2;
    }
    Count++;
  }
  printf("%d",Count);
}
*/ 
