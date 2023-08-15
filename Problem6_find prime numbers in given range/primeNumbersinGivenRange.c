/**********************************************************
 * C program to find prime numbers in given range
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 #include"stdio.h"
 #include"primeNumbersinGivenRange.h"
 

 void GetPrime(int StartNum,int EndNum)
 {
	 int flag=0;
	 for(int i=StartNum;i<EndNum;i++)
	 {
		 for(int j=2;j<(i/2);j++)
		 {
		 if(i%j==0)
		 {
			 flag=1;
			 break;
		 }
		 else
		 {	flag=0;
			 continue;
		 }
		 }
		 if(flag==0)
		 printf("%d ",i);
	 else 
		 continue;
	 }
 }
 