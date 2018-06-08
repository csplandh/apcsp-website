#include <stdio.h>

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("%s : expected 2 args, please enter two integers\n", argv[0]);

		return -1;
	}

	double length, width, rectanglearea, trianglearea;

	int found = sscanf(argv[1], "%lf", &length);
	if (found != 1) {
		printf("first arg is not an integer, enter two ints\n");
		return 1;
	}

	found = sscanf(argv[2], "%lf", &width);
	if (found != 1) {
		printf("second arg is not an integer, enter two ints\n");
		return 1;
	}

	rectanglearea = length * width;
	trianglearea = length * width / 2;
	printf("\n");
	printf("Length or Base = %.2lf\n", length);
	printf("\n");
	printf("Width or Height = %.2lf\n", width);
	printf("\n");
	printf(
		"Rectangle Area: %.2lf * %.2lf = %.2lf\n",
		length,
		width,
		rectanglearea);
	printf("\n");
	printf(
		"Triangle Area: %.2lf * %.2lf / 2 = %.2lf\n",
		length,
		width,
		trianglearea);
	printf("\n");
	printf("F O R M U L A S\n");
	printf("\n");
	printf("Rectangle Area = Length * Width\n");
	printf("\n");
	printf("Triangle Area = Base * Height / 2\n");
	printf("\n");
	return 0;
}

