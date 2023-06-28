#include <bits/stdc++.h>

using namespace std;

string translateWord(const string &word, const unordered_map<char, char> &keyboard)
{
    string translatedWord = "";
    for (char c : word)
    {
        if (isalpha(c))
        {
            if (keyboard.count(tolower(c)) > 0)
            {
                char translatedChar = keyboard.at(tolower(c));
                if (isupper(c))
                {
                    translatedChar = toupper(translatedChar);
                }
                translatedWord += translatedChar;
            }
            else
            {
                translatedWord += c;
            }
        }
        else
        {
            translatedWord += c;
        }
    }
    return translatedWord;
}

int main()
{
    string t1, t2;
    cin >> t1 >> t2;

    unordered_map<char, char> keyboard;
    for (int i = 0; i < 26; i++)
    {
        keyboard[t1[i]] = t2[i];
    }

    int n;
    cin >> n;

    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string word;
        getline(cin, word);
        string translatedWord = translateWord(word, keyboard);
        cout << translatedWord << endl;
    }

    return 0;
}
