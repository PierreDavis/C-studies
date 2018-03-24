//Program that swaps the first letter of two words
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char char1, char2;
    string word1, word2;
    cout << "Please input two words and see their first letters swap! ";
    cin >> char1 >> word1 >> char2 >> word2;
    cout << char2 << word1 << " " << char1 << word2;
    return 0;
}

