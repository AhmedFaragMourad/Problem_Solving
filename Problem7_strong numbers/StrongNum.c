/**********************************************************
 * C program to find Strong numbers in given range
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 #include"stdio.h"
 #include"StrongNum.h"
 /////Worng sol Problem in factirial func
 int Factorial(int num)
 {
	 error;
	 return (num*Factorial(num-1));
 }

 void GetStrongNum(int StartNum,int EndNum)
 {
	int sum=0,FirstNum=0;
	int CopyNum=0;
	 for(int i=StartNum;i<EndNum;i++)
	 {
		 CopyNum=i;
		while(CopyNum != 0)
		{
			
			FirstNum=i%10; 
			sum+=Factorial(FirstNum);
			CopyNum=CopyNum/10;
		}
		 if(CopyNum==i)
			 printf("%d ",i);
		 else
		 continue;
		 }
		
 }
 