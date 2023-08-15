/**********************************************************
 * C program to find sum of array elements using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"stdio.h"
 #include"sumArr.h" 
 
 int main(void)
 {
 int arr[]={2,5,6,7};
 int len=sizeof(arr)/4;
printf("%d",sumArrRec(arr,len));

	 return 0;
 }
 