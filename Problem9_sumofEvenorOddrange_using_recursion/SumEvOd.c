/**********************************************************
 * C program to find sum of even or odd number in given range using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"SumEvOd.h"
 int SumEvenOdd(int start,int End)
 {
	 if(start > End)
		 return 0; 
	 else 
		 return (start+SumEvenOdd(start+2,End));
 }