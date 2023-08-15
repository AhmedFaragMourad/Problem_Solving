/**********************************************************
 * C program to find sum of array elements using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"stdio.h"
 #include"MinMaxArr.h" 
 
 int main(void)
 {
 int arr[]={2,5,6,7};
 int len=sizeof(arr)/4;
int *ptr=MinMaxArrRec(arr,len);
printf("%d ",ptr[0]);
printf("%d",ptr[1]);
	 return 0;
 }
 