#include<stdio.h>
int main()
{
	int num1 = 0, num2 = 0, sum_num12 = 0, sumAns = 0;
	num1 = num2 = sum_num12 = 1;
	printf("%d\t%d\t%d\n", num1, num2, sum_num12);
	for (; sum_num12 <= 4000000; sum_num12 = num1 + num2)
	{
		if (sum_num12 % 2 == 0)
		{
			sumAns += sum_num12;

		}
		


	}
	printf(" \n\n\n \t\t\t Ans = %d \n", sumAns);
	printf("\t\t\t----- By Watcharapol -----");



	return 0;
}