/**********************************************************
 * C program to find GCD (HCF) of two numbers using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"GCD.h"
 
 
 int GCD (int num1,int num2)
 {
	 
	 if(num2==0)
		 return num1;
	 else
		 GCD(num2,num1%num2);
	 
	 
 }