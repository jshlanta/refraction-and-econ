// by: Joe Shlanta
//
// finds theta2 in snells law
//

#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<math.h>
#define c = 299792458.00
#define n1 = 1.00
int main(void) {
	
	double theta1, theta2, n2;
	
	printf("\n\nn1 * sin(theta1) = n2 * sin(theta2)\nSnell's Law\n\nn stands for refractive index\ntheta 1 & 2 stands for angle of incidence and refraction, respectivly\n\nEnter information data to eventually solve for theta2:\n\nn1=1 (assumed to be air)\ntheta1=");
	scanf("%lf", &theta1);
	printf("n2=");
	scanf("%lf", &n2);
	printf("theta2= ?\n");
	//printf("theta2=");
	//scanf("%lf", &theta2);
	
	if (theta1 < 0.00) {
	printf("\nAngle of incidence must be above zero\n");
	} else if (n2 < 1.00) {
	printf("\nRefractive index must be at least 1\n");
	} else {

	double theta1r, theta2r;

	theta1r = theta1 * (M_PI / 180.00);
	theta2r = asin(sin(theta1r) / n2);

	theta2 = theta2r * (180.00 / M_PI);
	
	printf("\nAngle of Incidence (Theta 1): %lf deg\n", theta1);
	printf("Index of Refraction (n 2): %lf\n", n2);
	printf("Angle of Refraction (Theta 2): %lf deg\n", theta2);
	
	}	
}
