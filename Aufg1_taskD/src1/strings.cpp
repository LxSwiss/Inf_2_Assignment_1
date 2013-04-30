/* Basic Exercise - Algorithms and Datastructures
 * University of Zurich
 * Author: Genc Mazlami 09-923-061
 * Updated by Rafael Ballester on 10.01.13.
 *
 */

#include <cstdlib>
#include <string>
#include <iostream>

//TASK 1)*************************************
int getSize(char* string) {
	int size = 0;
	//TODO: fill in your code here
	while(string[size]!='\0')
	{
		size++;
	}

	return size;
}
//********************************************

//TASK 2)*************************************
void concatenate(char str1[], char str2[]) {

	int sizestr1 = getSize(str1);
	int sizestr2 = getSize(str2);
	int size = sizestr1 + sizestr2;
	char str3[size];

	for(int i= 0 ; i <sizestr1; i++){
		str3[i]= str1[i];
	}
	for (int i= 0; i<sizestr2;i++){
		str3[i+sizestr1]= str2[i];
	}


	std::cout << std::endl<< str3<< std::endl;


	//std::cout << std::endl<< str1 << str2 << std::endl;

}
//********************************************

//TASK 3)*************************************
bool isPalindrome(std::string str) {
	int size = str.size();
	for(int i=0; i<(size/2);i++){
		if(!(str[i]==str[size-1-i])){
			return false;
		}else{
		}
	}
	return true;
}
//********************************************

//TASK 4)*************************************
void printShape(int level, char character) {
		for (int i=0;i<level;i++){
			for (int h= (level-i); h>0;h--){
				std::cout << ' ';
			}
			std::cout << character;
			for(int j=0; j<i; j++){
				std::cout << character<< character;
			}
			std::cout << std::endl;
		}

}
//********************************************

//If you want to make changes to the main-function to test your results, you can. But please comment out or delete your changes before
// submitting the exercise.
int main(int argc, char** argv) {

    //Testing task 2)
    std::cout << std::endl << std::endl;
    std::cout << "TASK 1)" << std::endl;
    std::cout << "---------------------" << std::endl;

    char example[] = "abcdef";
    std::cout << "The size of " << example << " is " << getSize(example);

    //Testing task 2)
    std::cout << std::endl << std::endl;
    std::cout << "TASK 2)" << std::endl;
    std::cout << "---------------------" << std::endl;

    char str1[] = "Let's concatenate this string ";
    char str2[] = "with this one. ";
    concatenate(str1,str2);


    //Testing task 3)
    std::cout << std::endl << std::endl;
    std::cout << "TASK 3)" << std::endl;
    std::cout << "---------------------" << std::endl;

    std::string myString = "aabbcbbaa";
    if (isPalindrome(myString))
        std::cout << myString << " is a palindrome" << std::endl;
    else
        std::cout << myString << " is not a palindrome" << std::endl;
    myString = "aabcdaa";
    if (isPalindrome(myString))
        std::cout << myString << " is a palindrome" << std::endl;
    else
        std::cout << myString << " is not a palindrome" << std::endl;

    //Testing task 4)
    std::cout << std::endl << std::endl;
    std::cout << "TASK 4)" << std::endl;
    std::cout << "---------------------" << std::endl;

    printShape(9,'*');

    return 0;
}
