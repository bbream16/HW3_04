#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string sort(string& s)
{
	std::sort(s.begin(), s.end());
	return s;
}

int main()
{
	string word;
	cout << "Please enter a word: ";
	cin >> word;
	string sorted = sort(word);
	cout << "Your sorted word is: " << sorted << endl;
	return 0;

}