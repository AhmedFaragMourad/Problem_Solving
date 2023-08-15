/**********************************************************
 * C program to find Strong numbers in given range
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 #include"stdio.h"
 #include"StrongNum.h"
 
 int Factorial(int num)
 {
	 if (num==0)
	 return num;
	 int x=1;
	 int i=0;
	while(i<num)
	{
		x*=(num-i);
		i++;
	}
	return x;
 }

 void GetStrongNum(int StartNum,int EndNum)
 {
	int sum=0,FirstNum=0;
	int CopyNum=0;
	 for(int i=StartNum;i<EndNum;i++)
	 {
		 CopyNum=i;
		 sum=0;
		while(CopyNum != 0)
		{
			
			FirstNum=CopyNum%10; 
			sum+=Factorial(FirstNum);
			CopyNum=CopyNum/10;
		}
		 if(sum==i)
			 printf("%d ",i);
		 else
		 continue;
		 }
		
 }
 