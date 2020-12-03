#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

vector<string> mapInput(string filename) {
    ifstream fileInput;
    fileInput.open("input.txt");

    vector<string> map;

    if (!(fileInput.is_open())) {
        cout << "File does not exist" << endl;
        return map;
    }

    while (!(fileInput.eof())) {
        string line;
        fileInput >> line;
        map.push_back(line);
    }

    fileInput.close();

    return map;
}



int main() {

    return 0;
}