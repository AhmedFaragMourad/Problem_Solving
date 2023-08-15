/**********************************************************
 * C program to find check even or odd 
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 #include"EvenOdd.h"
 
 int CheckEVorOD(int num)
 {
	 if(num%2==0)//->another method !(num&1)
		 return Even;
	 else 
		 return Odd;
 }