#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word;
	int count[26] = {0};
	cin >> word;

	for(int i=0; i<word.size(); i++)
	{
		count[word[i]-'a']++;
	}

	for(int i=0; i<26; i++)
	{
		cout << count[i] << " ";
	}

	cout << endl;

	return 0;
}
