// Palindrome.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(char[], int);
void PrintWord(char[], int);
void ProcessWord(char arr[], int);

int main()
{
	//int arr[] = {1, 2, 3};
	int w1Size = 4;
	char word1[] = { 't', 'e', 's', 't' };

	int w2size = 7;
	char word2[] = { 'r', 'a', 'c', 'e', 'c', 'a', 'r' };

	int w3size = 5;
	char word3[] = { 'm', 'a', 'd', 'a', 'm' };

	int w4size = 5;
	char word4[] = { 'm', 'a', 'n', 't', 'a' };

	ProcessWord(word1, w1size);
	ProcessWord(word2, w2size);
	ProcessWord(word3, w3size);
	ProcessWord(word4, w4size);

		void ProcessWord (char arr[], int size) {  }

	bool IsPalindrome(char arr[], int size)
	{
		int y = 0;
		
		for (int x = size - 1; x >= 0; x--) {
			if (arr[x] != arr[y]) {
				return false;
			}
			y++;
		}
		return true;
	}
}

