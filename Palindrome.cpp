// Palindrome.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

bool IsPalindrome(char[], int);
void PrintWord(char[], int);
void ProcessWord(char arr[], int);

int main()
{
	//int arr[] = {1, 2, 3};
	int w1Size = 4;
	char word1[] = { 't', 'e', 's', 't' };

	int w2Size = 7;
	char word2[] = { 'r', 'a', 'c', 'e', 'c', 'a', 'r' };

	int w3Size = 5;
	char word3[] = { 'm', 'a', 'd', 'a', 'm' };

	int w4Size = 5;
	char word4[] = { 'm', 'a', 'n', 't', 'a' };

	ProcessWord(word1, w1Size);
	ProcessWord(word2, w2Size);
	ProcessWord(word3, w3Size);
	ProcessWord(word4, w4Size);
	return 0;
}
	

void ProcessWord(char arr[], int size)
{
	if (IsPalindrome(arr, size)) {
		cout << " The word ";
		PrintWord(arr, size);
		cout << " is a palindrome " << endl << endl;
	}
	else {
		cout << " The word ";
		PrintWord(arr, size);
		cout << " is NOT a palindrome " << endl << endl;
	}
}
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

	void PrintWord(char arr[], int size)
	{
		for (int x = 0; x < size; x++) {
			cout << arr[x];
		}
}

