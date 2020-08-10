#include<stdio.h>
#include<math.h>

int main()
{
	double w, h, BMI;
	printf("Input your weight and height : ");
	scanf("%lf\n%lf", &w, &h);
	BMI = w / pow(h / 100.0, 2);
	if (w > 0 && h > 0) {
		if (BMI >= 30)
		{
			printf("%.6lf\n", BMI);
			printf("Obesity");
		}
		else if (BMI >= 25 && BMI < 30)
		{
			printf("%.6lf\n", BMI);
			printf("Overweight");
		}
		else if (BMI >= 18.5 && BMI < 25)
		{
			printf("%.6lf\n", BMI);
			printf("Normal");
		}
		else
		{
			printf("%.6lf\n", BMI);
			printf("Underweight");
		}
	}
}