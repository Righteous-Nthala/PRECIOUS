#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int i = 0;
    for (char ch : str) {
        if (toupper(ch) == 'A' || toupper(ch) == 'E' || toupper(ch) == 'I' || toupper(ch) == 'O' || toupper(ch) == 'U') {
            i++;
        }
    }
    return i;
}

// Function to count words in a string
int countWords(const string& str) {
    int a = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isalpha(ch)) {
            if (!inWord) {
                  a++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return a;
}

// Function to reverse a string
string reverse(const string& z) {
    string go_back;
    for (int i = z.length() - 1; i >= 0; --i) {
        go_back.push_back(z[i]);
    }
    return go_back;
}

// Function to capitalize the second letter of each word
string capSecondLetter(const string& str) {
    string x = str;
    bool capital = true;
    for (char& ch : x) {
        if (isalpha(ch)) {
            if (capital ) {
                ch = toupper(ch);
                capital = false;
            }
        } else {
            capital  = true;
        }
    
    }
    return x;
}

int main() {
    // Open file
    ifstream inputFile("fileData.txt");
    
    // Read the content of the file into a string variable
    string fileData;
    getline(inputFile, fileData);
    
    // Close the file
    inputFile.close();
    
    // Output the number of vowels
    int vowelsCount = countVowels(fileData);
    cout << "Number of vowels: " << vowelsCount << endl;
    
    // Output the number of words
    int wordsCount = countWords(fileData);
    cout << "Number of words: " << wordsCount << endl;
    
    // Output the reversed statement
    cout << "Reversed statement: " << reverse(fileData) << endl;
    
    // Output the statement
    cout << "Statement with second letter capitalized: " << capSecondLetter(fileData) << endl;
    
    return 0;
}
