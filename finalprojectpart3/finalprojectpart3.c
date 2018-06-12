	
#include <stdio.h>
int main(int argc, char *argv[]) { 
       if (argc != 3){
	printf("%s : expected 2 args, please enter two integers\n", argv[0]);
	return -1;
}
        double sidelength, numberofsides, perimeter;
 
        int found = sscanf(argv[1], "%lf", &sidelength);
        if (found != 1) {
        printf("the arg is not an integer, enter an int\n");
        return 1;
}
	 found  = sscanf(argv[2], "%lf", &numberofsides);
	if (found != 1) {
	printf(" the arg is not an integer, enter an int\n");
	return 1;
	}
	
       perimeter = sidelength * numberofsides; 
	printf("sidelength = %.2lf\n", sidelength);
	printf("\n");
	printf("numberofsides = %.2lf\n", numberofsides);
	printf("\n");
	printf(
		"Perimeter: %.2lf * %.2lf = %.2lf\n",
		sidelength,
		numberofsides,
		perimeter);
	printf("\n");
 
}
