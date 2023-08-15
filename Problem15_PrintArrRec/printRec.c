/**********************************************************
 * C program to print elements of array using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"printRec.h"
 
 
 void PrintArrRec(int *arr, int len)
 {
	static int i=0;
	 if(len==0)
		 return;
	 else 
	 {
		 printf("%d",arr[i]);
		 i++;
		 PrintArrRec(arr,len-1);
	 }
 }
 
