#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void zadanie1(); // Прототипы функций
void zadanie2();
void zadanie3();
void zadanie4();
void zadanie5();
void zadanie6();
void zadanie7();
void zadanie8();

int main()
{
	zadanie1();
}

void zadanie1() 
{
	printf("Hello,World!\n");
	return 0;
}


void zadanie2()
{
	printf("Characters: %c %c \n", 'a', 65);
	printf("Decimals: %d %ld\n", 1977, 650000L);
	printf("Preceding with blanks: %10d \n", 1977);
	printf("Preceding with zeros: %010d \n", 1977);
	printf("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf("Width trick: %*d \n", 5, 10);
	printf("%s \n", "A string");
	return 0;
}

void zadanie3()
{
	char str[80];
	int i;

	printf("Enter your family name: ");
	scanf("%79s", str);
	printf("Enter your age: ");
	scanf("%d", &i);
	printf("Mr. %s , %d years old.\n", str, i);
	printf("Enter a hexadecimal number: ");
	scanf("%x", &i);
	printf("You have entered %#x (%d).\n", i, i);

	return 0;
}


void zadanie4(){
	double a,b,c;
	double root;
	double root1;
	double root2;
	double delta;
	printf("Enter coefficients of the square equation(a , b , c): \n"); // Ввод коэффициентов a , b , c .
	printf("Enter a: ");
	scanf("%lf", &a); // a
	printf("Enter b: ");
	scanf("%lf", &b); // b 
	printf("Enter c: ");
	scanf("%lf", &c); // c
	printf("Coefficients:\n"); // Вывод коэффициентов
	printf("a: %lf\n", a);
	printf("b: %lf\n", b);
	printf("c: %lf\n", c);
	printf("Converted coefficients:\n");
	printf("a: %.0f\n", a);
	printf("b: %.0f\n", b);
	printf("c: %.0f\n\n", c);

	if (b * b - 4 * a * c < 0) {	// если < 0
		printf("0 roots\n");
	} else if (b * b - 4 * a * c == 0) {	 // = 0
		printf("1 root\n");
		root = (-b+0)/ (2 * a);
			printf("Root is: %d\n", root);
	}
	else{		// в любом другом случае
		delta = b * b - 4 * a * c;
		root1 = (-b + sqrt(delta)) / (2 * a);
		root2 = (-b - sqrt(delta)) / (2 * a);
		// printf("%f\n", delta); Delta debug
		printf("2 roots\n");
		printf("1 root: %f\n", root1);
		printf("2 root: %f\n", root2);
	}
	return 0;

}


void zadanie5() {
	float a, b, c;
	float summ;
	double root;
	double root1;
	double root2;
	double delta;
	printf("Enter coefficients of the square equation(a , b , c): \n"); // Ввод коэффициентов a , b , c .
	printf("Enter a: ");
	scanf("%f", &a); // a
	printf("Enter b: ");
	scanf("%f", &b); // b 
	printf("Enter c: ");
	scanf("%f", &c); // c
	printf("Coefficients:\n"); // wprowadzenie wspolczynnikow
	printf("a: %f\n", a);
	printf("b: %f\n", b);
	printf("c: %f\n", c);

	if (b * b - 4 * a * c < 0) {	// jezeli < 0
		printf("0 roots\n");
	}
	else if (b * b - 4 * a * c == 0) {	 // = 0
		printf("1 root\n");
		root = (-b + 0) / (2 * a);
		printf("Root is: %d\n", root);
	}
	else {		// w inszych przypadkach
		delta = b * b - 4 * a * c;
		root1 = (-b + sqrt(delta)) / (2 * a);
		root2 = (-b - sqrt(delta)) / (2 * a);
		// printf("%f\n", delta); Delta debug
		printf("2 roots\n");
		summ = root1 + root2;
		printf("Sum of roots:%f\n", summ);
	}
	return 0;
}

void zadanie6() {
	int a, b, c;
	double root;
	double root1;
	double root2;
	double delta;
	int okroot1;
	int okroot2;
	int okroot3;

	printf("Enter coefficients of the square equation(a , b , c): \n"); //wprowadzenie wspolczynnikow a , b , c .
	printf("Enter a: ");
	scanf("%d", &a); // a
	printf("Enter b: ");
	scanf("%d", &b); // b 
	printf("Enter c: ");
	scanf("%d", &c); // c
	printf("Coefficients:\n"); // wprowadzenie wspolczynnikow
	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);

	if (b * b - 4 * a * c < 0) {	// jezeli < 0
		printf("0 roots\n");
	}
	else if (b * b - 4 * a * c == 0) {	 // = 0
		printf("1 root\n");
		root = (-b + 0) / (2 * a);
		okroot3 = roundf(root);
		printf("Root is: %d\n", okroot3);


	}
	else {		// w inszych przypadkach
		delta = b * b - 4 * a * c;
		root1 = (-b + sqrt(delta)) / (2 * a);
		root2 = (-b - sqrt(delta)) / (2 * a);
		okroot1 = roundf(root1);
		okroot2 = roundf(root2);

		// printf("%f\n", delta); Delta debug
		printf("2 roots\n");
		printf("1 Root:%d\n",okroot1);
		printf("2 Root:%d\n", okroot2);
	}
	return 0;
}


void zadanie7() {
	double a, b, c;
	double *p_a;  // Ogłoszono 3 wskaźniki
	double *p_b;
	double *p_c;

	p_a = &a;
	p_b = &b;
	p_c = &c;


	//printf("Value - %f, adress - %p\n",*p_a,p_a);
	//printf("Value - %f, adress - %p\n", *p_b, p_b);
	//printf("Value - %f, adress - %p\n", *p_c, p_c);


	printf("Enter coefficients of the square equation(a , b , c): \n"); // wprowadzanie  wspolczynnikow a , b , c .
	printf("Enter a: ");
	scanf("%lf", &a); // a
	printf("Enter b: ");
	scanf("%lf", &b); // b 
	printf("Enter c: ");
	scanf("%lf", &c); // c


	
	


	if (*p_b * *p_b - 4 * *p_a * *p_c < 0) {	// jezeli < 0
		printf("Liczba pierwiastkow: 0 \n");
	}
	else if (*p_b * *p_b - 4 * *p_a * *p_c == 0) {	 // = 0
		printf("Liczba pierwiastkow: 1\n");
	}
	else {		// w inszych przypadkach
		printf("Liczba pierwiastkow: 2 \n");
	}
	return 0;

}


void zadanie8() {
	float x,res; // dwie zmienne x i wynik
	double logarifm;
	
	printf("Input x: ");
	scanf("%f", &x);

	logarifm = (log(0.5 * x) / log(3.0));
	if (x < 0) {
		printf("Error (Logarytm < 0, nie istnieje)");
	}
	else if (x == 2) {
		printf("Error (logarytm = 0, nie mozna dzielic prez 0)");
	}
	else if (x == 0) {
		printf("Error x = 0(Logarytm 0)");
	} else
	{
		res = ((sin(x) * sin(x)) * log(15)) / (sqrt(fabs(logarifm))); // Main 
		printf("Result: %f\n", res);
	}
	
	return 0;

}