/**********************************************************
 * C program to find LCM of two numbers using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"LCM.h"
 
 #define max(x,y) ((x>y)?x:y)
 int LCM(int num1, int num2)
 {
	 static int multiple=0;
	 multiple +=max(num1,num2);
	 
	 if((multiple%num1==0)&&(multiple%num2==0))
	 {
		 
		 return multiple;
	 }
	 else
	 {
 LCM(num1,num2);
 }
 }
  