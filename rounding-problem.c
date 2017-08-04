				/* Rounding - Problem */
#include<stdio.h> 
int main(void) 
{

	int D,d;
	printf("Enter dividend ");
	scanf("%d",&D);
	printf("Enter divisor ");
	scanf("%d",&d);
	int r; 
	r = (D % d);             //Calculated remainder first so as to satisfy given equation, Onpaper mathematics (D = d*Q + R) => D/d = Q + (R/d)
	float R = r /(float)d;  // Calculating number after decimal point and typecasted it to prevent truncation of 'R' to 0
	int c;                  // Auxilairy Variable
	if((D > 0 && d > 0) || ((D*(-1) > 0) && (d*(-1)> 0)))  // To check if both numbers are positive or negative
	{
		if(R >= 0.5)        // Checking: Is number after decimal greater than or equal to 0.5
		{
			c = D/d;
			printf("Division result is %d\n",c);
			c++;
			printf("Rounded number is %d\n",c);
		}
		else
		{
			c = D/d;
			printf("Division result is %d\n",c);
			printf("Rounded number is %d\n",c);
		}
	}
	else                     // For any number being positive or negative
	{
		if(R <=(-0.5))		// Checking: Is number after decimal less than or equal to 0.5
		{
			c = D/d;
			printf("Division result is %d\n",c);
			c--;
			printf("Rounded number is %d\n",c);
		}
		else
		{
			c = D/d;
			printf("Division result is %d\n",c);
			printf("Rounded number is %d\n",c);
		}
	}	
}