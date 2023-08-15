/**********************************************************
 * C program to find sum of digits using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"digitSum.h"
 
 int digitSumRec(int num)
 {
	 static int sum=0;
	 if(num==0)
		 return sum;
	 else 
	 {
		 sum+=(num%10);
		 digitSumRec(num/10);
	 }
 }
  
 