

#include<stdio.h>
#include<stdint.h>

void wait_for_user_input(void);


int main(void)
{
	int8_t code;
	float r , b , h, a;
	float area;
	printf("Area calculation program\n");
	printf("Circle    --> c\n");
	printf("Triangle  --> t\n");
	printf("Trapezoid --> z\n");
	printf("Square    --> s\n");
	printf("Rectangle --> r\n");
	printf("Enter the code here:");
	scanf("%c",&code);

	switch(code){
	case 'c':
		printf("Circle Area calculation:\n");
		printf("Enter r value :");
		scanf("%f",&r);
		area=3.1415*r*r;
		break;
	case 't':
		printf("Triangle Area calculation:\n");
		printf("Enter base(b) value :");
		scanf("%f",&b);
		printf("Enter height(h) value :");
		scanf("%f",&h);
		area=(b*h)/2;
		break;
	case 's':
		printf("Square Area calculation:\n");
		printf("Enter side(a) value :");
		scanf("%f",&a);
		area=a*a;
		break;
	case 'r':
		printf("Rectangle Area calculation:\n");
		printf("Enter width(w) value :");
		scanf("%f",&a);
		printf("Enter lenght(l) value :");
		scanf("%f",&b);
		area=a*b;
		break;
	default:
		printf("invalid input\n");
		area=-1;
	}

	if(area<0);

	if(area>0)
		printf("Area = %f\n",area);


	wait_for_user_input();

}


void wait_for_user_input(void)
{

	printf("Press enter key to exit this application");

    while(getchar() != '\n')
    {
    	//just read the input buffer and do nothing
    }
    getchar();

}
