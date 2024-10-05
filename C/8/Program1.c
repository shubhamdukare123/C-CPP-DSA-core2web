

#include<stdio.h>

void main() {
	int x = 2;
	switch(x) {

		default: 
			{
				printf("Default 1\n");
				break;
			}
			
		case 'A': 
			{
				printf("One\n");
				break;
			}
		case 2: 
			{
				printf("Two\n");
			}

		case 3: 
			{
				printf("Three\n");
				//break;
			}
		case 4: 
			{
				printf("Four\n");
			}
	/*	default: 
			{
				printf("No Match\n");
				
			}
			*/
		case 5: 
			{
				printf("Five\n");
			}
	}
}
