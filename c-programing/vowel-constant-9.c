// wap program in c which tells the user weather that is vowel or constant letter

#include <stdio.h>
int main()
 {
 	char letter;
 	printf("enter the character ");
 	scanf("%c",&letter);
 	int isLowerCaseVowel,isUpperCaseVowel;
 	 //Return true some thing is available
 	 isLowerCaseVowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
 	 isUpperCaseVowel =  (letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');
 	
 	if (isLowerCaseVowel || isUpperCaseVowel )
 	{
 		printf("%c Letter is vowel");
	 }
 	else
 	{
 		printf("%c letter is constant");
	 }
 	return 0;
 
 }
