// WordToHex.cpp : Defines the entry point for the console application.
// Takes in a word and combines all the the letter into a single int. Converts to Hex.
//

#include "stdafx.h"
#include <string>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	string word;
	int xor_word = 0, and_word = 0, or_word = 0, sum_word = 0, diff_word = 0;

	cout << "Enter Word to be converted. Enter exit to exit." << endl << endl;

	while(word.compare("exit"))
	{
		cin >> word;

		string::iterator it = word.begin();
		for(it; it < word.end(); it++)
		{
			xor_word ^= static_cast<int>(*it);
			and_word &= static_cast<int>(*it);
			or_word |= static_cast<int>(*it);
			sum_word += static_cast<int>(*it);
			diff_word -= static_cast<int>(*it);
		}

		cout << "XOR Word " << showbase << hex << xor_word << endl;
		cout << "AND Word " << showbase << hex << and_word << endl;
		cout << "OR Word " << showbase << hex << or_word << endl;
		cout << "SUM Word " << showbase << hex << sum_word << endl;
		cout << "DIFF Word " << showbase << hex << diff_word << endl << endl;
	}

	return 0;
}

