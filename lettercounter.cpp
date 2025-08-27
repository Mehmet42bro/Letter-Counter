#include <iostream> // a library to get an input and write an output
#include <map>      // a map (called dictionary in python) it is a list which has multiple titles (word, number etc.) and values for them

using namespace std;

map<char, int> letters; // a map which the code stores a letter, sign etc. and the value how many times its used in the text

//! when we add things to our map it looks like this -> map<char, int> letters = {{'title', 'value'}} the title can be a letter or sign etc. and the value can be a number

int main()
{
    while (true)
    {
        letters.clear();
        char letter = ' ';
        string input = " ";
        cout << "Please enter a word or sentence: ";
        getline(cin, input);                   // it stores the whole line instead of just a word
        for (int i = 0; i < input.size(); i++) // a loop to add a letter sign etc. to the map "letters" and increase its value
        {
            letter = input[i];    // with the for loop it adds every sign in the input to the char "letter"
            letters[letter] += 1; // in the map it increases the value of a title
        }
        for (auto letter : letters) // outputs the whole map with the titles and the values
        {
            cout << letter.first << ": " << letter.second << endl;
        }
    }
}