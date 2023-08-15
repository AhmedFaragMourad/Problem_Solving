/**********************************************************
 * C program to find check even or odd  
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 
 #include"stdio.h"
 #include"CheckPrime_Armstrong_Perfect.h" 
 
 int main(void)
 {
 
	printf("Num %d \n", 153);
	if(CheckPerfectSqr(153)==PerfectSqr)
	printf("Number %d is PerfectSqr \n",153);
else 
	printf("Number %d is NotPerfectSqr \n",153);

if(CheckPrime(153)==Prime)
	printf("Number %d is Prime \n",153);
else 
	printf("Number %d is NotPrime \n",153);

if(CheckArmstrong(153)==Armstrong)
	printf("Number %d is Armstrong \n",153);
else 
	printf("Number %d is NotArmstrong \n",153);

	 return 0;
 }
 