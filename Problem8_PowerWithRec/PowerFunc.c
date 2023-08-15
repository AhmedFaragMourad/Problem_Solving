/**********************************************************
 * C program to print Power of base numbers
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"PowerFunc.h"
 int GetPowerNum(int Base,int Power)
 {
	 if(Power == 0)
		 return 1;
	 else 
		 return (Base*GetPowerNum(Base,Power-1));
	 
 }