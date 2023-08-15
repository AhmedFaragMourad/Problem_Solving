/**********************************************************
 * C program to find sum of array elements using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"sumArr.h"
 
 
 int sumArrRec(int *arr, int len)
 {
	static int i=0;
	static int sum=0;
	 if(len==0)
		 return sum;
	 else 
	 {
		 sum +=arr[i];
		 i++;
		 sumArrRec(arr,len-1);
	 }
	 
 }
 
