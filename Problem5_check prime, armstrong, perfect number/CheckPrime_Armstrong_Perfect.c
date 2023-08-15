/**********************************************************
 * C program to CheckPrime_Armstrong_Perfect
 * Auther: Ahmed Farag Mourad 
 *****************************************************************/
 #include"CheckPrime_Armstrong_Perfect.h"
 
 int CheckPerfectSqr(int num)
 {
	 for(int i=0;i<(num/2);i++)
	 {
		 if(num==(i*i))
			 return PerfectSqr;
		 else
			 return NotPerfectSqr;
	 }
 }
 
 int CheckPrime(int num)
 {
	 for(int i=2;i<(num/2);i++)
	 {
		 if(num%i==0)
			 return NotPrime;
		 else
			 continue;
	 }
	 return Prime;
 }
 //Armstrong Number is: number that is equal to the //sum of cubes of its digits. 
 int CheckArmstrong(int num)
 {
	 /*Steps: 
	 * 1- Seperate num digits 
	 * 2- Get Cube for each digits
	 * 3- Store cube values in variables 
	 * 4- Sum and check if it's equal to num 
	 ** if yes it's Armstrong if no it's notArmstrong.
	 */
	 //Step 1 -> Seperate 
	 int numVal=num;
	 int Digit=0; 
	 int Cube=0;
	 int Sum=0;
	 while(numVal != 0)
	 {
		Digit= numVal%10;
		Cube = (Digit*Digit*Digit);
		Sum+=Cube;
		numVal/=10;
	 }
	if(Sum == num)
		return Armstrong; 
	else 
		return NotArmstrong;
 }