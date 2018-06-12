 #include <stdio.h>
int main(int argc, char *argv[]) {
       double radius, height, circlearea, cylinderarea;
	if (argc == 2) {
		printf("Find the area of the circle with the radius %s\n", argv[1]);
        }
       else if (argc == 3) {
              printf("Find the area of the cylinder with the radius %s and the height %s\n", argv[1], argv[2]);
     
        }
	int found = sscanf(argv[1], "%lf", &radius);
	if (found != 1) {
		printf("first arg is not an integer, enter two ints\n");
		return 1;
	
        }
        if  (argc == 3) {
	found = sscanf(argv[2], "%lf", &height);
	if (found != 1) {
		printf("second arg is not an integer, enter two ints\n");
		return 1;
        }
	}
       
        circlearea = 3.14 * radius * radius;
	cylinderarea = 3.14 * radius * radius * height;
	printf("\n");
       
 if (argc == 2) {
	printf("radius  = %.2lf\n", radius);
        printf("\n");
         printf(
                "Circle Area: 3.14  *  %.2lf * %.2lf = %.2lf\n",
                radius,
                radius,
                circlearea);
        printf("\n");
        }
       else if (argc == 3) {
        printf("radius = %.2lf\n", radius);
	printf(" Height = %.2lf\n", height);
        printf("\n");
	printf(
		"Cylinder Area: 3.14  * %.2lf * %.2lf * %.2lf  = %.2lf\n",
		radius,
                radius,
                height,
		cylinderarea);
	printf("\n");
        }
	printf("F O R M U L A S\n");
	printf("\n");
	printf("Circle area = 3.14 * Radius * Radius\n");
	printf("\n");
	printf("Cylinder Area = 3.14 * Radius * Radius * Height\n");
	printf("\n");
	return 0;
}

