/**********************************************************
 * C program to find nth fibonacci term using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"fab.h"
 
  int fab(int num)
  {
	if(num == 0)
return 0;
else 
return num+fab(num-1);	
  }
 
 