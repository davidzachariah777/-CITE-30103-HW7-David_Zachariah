#include <stdio.h>

float f,c;

float toCelsius(float f) {
	c = ((f-32)*(5.0/9));
	return c;
}

int main() {
	printf("Enter temperature (in Fahreheit)\n");
	scanf("%f", &f);
	c = toCelsius(f);
	printf("%.2f degrees Fahrenehit is equivalent to %.2f degrees celsius\n",f,c);
	return 0;
}
