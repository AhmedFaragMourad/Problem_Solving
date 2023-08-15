/**********************************************************
 * C program to find maximum and minimum elements in array using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"MinMaxArr.h"
 
 int *MinMaxArrRec(int *arr, int len)
 {
	static int i=0;
	static int min=9999;
	static int max=0;
	static int arrR[2];
	 if(len==0)
		 return arrR;
	 else 
	 {
		 min=(min<arr[i])?min:arr[i];
		 max=(max>arr[i])?max:arr[i];
		 arrR[0]=min;
		 arrR[1]=max;
		 i++;
		 MinMaxArrRec(arr,len-1);
	 }
	 
 }
 
