#include <iostream>
#include <fstream>
#include <vector>
#include <tuple>
#include <cassert>

using namespace std;

vector<tuple<int, int, char, string>> parse_input(string filename) {
    ifstream passwordInputFile;
    passwordInputFile.open(filename);

    vector<tuple<int, int, char, string>> passwords;
    while (!(passwordInputFile.eof())) {
        int low;
        int high;
        char dash, colon;
        char letter;
        string password;

        passwordInputFile >> low >> dash >> high >> letter >> colon >> password;
        passwords.push_back(make_tuple(low, high, letter, password));
    }

    passwordInputFile.close();

    return passwords;
}

int validPasswordsCount(vector<tuple<int, int, char, string>> &passwords) {
    int result = 0;

    for (auto pass: passwords) {
        int low, high;
        char letter;
        string password;

        tie(low, high, letter, password) = pass;

        int count = 0;
        for (char c : password) {
            if (c == letter) {
                count++;
            }
        }
        if (low <= count && count <= high) {
            result++;
        }
    }

    return result;
}

int num_valid_passwords_pos(vector<tuple<int, int, char, string>> &passwords)
{
    int result = 0;
    for (auto pass : passwords)
    {
        int pos1, pos2;
        char character;
        string password;

        tie(pos1, pos2, character, password) = pass;

        if ((password[pos1 - 1] == character) != (password[pos2 - 1] == character))
        {
            result++;
        }
    }

    return result;
}


int main() {
    auto examples = parse_input("example.txt");
    auto passwords = parse_input("passwordList.txt");

    cout << validPasswordsCount(examples) << endl;
    cout << validPasswordsCount(passwords) << endl;

    cout << endl;

    cout << validPasswordsPos(examples) << endl;
    cout << validPasswordsPos(passwords) << endl;

    return 0;
}