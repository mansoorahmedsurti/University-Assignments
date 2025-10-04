#include <stdio.h>

int main(){
	char starting_letter, ending_letter;
	
	printf("Please input starting letter of the country:\t");
	scanf("%c", &starting_letter);
	
	
	
	switch(starting_letter){
		case 'A':
		case 'a':
			printf("Please input ending letter of the country:\t");
			scanf(" %c", &ending_letter);
			
			switch(ending_letter){
				case 'A':
				case 'a':
					printf("\n Alaska \n Albania \n Algeria");
					break;
				default:
					printf("No such Country Found");
			}
		break;
			
		case 'B':
		case 'b':
			printf("Please input ending letter of the country:\t");
			scanf(" %c", &ending_letter);
			
			switch(ending_letter){
				case 'A':
				case 'a':
					printf("Bulgaria \n Bolivia \n Botswana");
					break;
					
				default:
					printf("No such country Found.");
			}
		break;
		default:
			printf("Please type correct letter");
	}

}
