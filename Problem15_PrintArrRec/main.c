/**********************************************************
 * C program to print elements of array using recursion
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"stdio.h"
 #include"printRec.h" 
 
 int main(void)
 {
 int arr[]={2,5,6,7};
 int len=sizeof(arr)/4;
PrintArrRec(arr,len);

	 return 0;
 }
 