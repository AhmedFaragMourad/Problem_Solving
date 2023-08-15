/**********************************************************
 * C program to find reverse of a number using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"revNum.h"
  int RevNumRec(int num)
  {
	  static int revNum=0;
	  if(num ==0)
		  return revNum;
	  else
	  {
		  revNum = (num%10)+10*revNum;
		  RevNumRec(num/10);
	  }
  }
 