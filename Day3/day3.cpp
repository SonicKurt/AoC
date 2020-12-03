#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

vector<string> mapInput(string filename) {
    ifstream fileInput;
    fileInput.open(filename);

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

int treeCount(vector<string> &map, int x, int y) {
    int result = 0;
    int posX, posY;
    for (auto line : map) {
        posX = (x + posX) % line.length();
        posY = y + posY;

        if (posY >= map.size()) {
            return result;
        }
        if (map[posY][posX] == '#') {
            result++;
        }
    }

    return result;
}

int main() {
    auto exampleMap = mapInput("example.txt");
    auto map = mapInput("input.txt");

    assert(treeCount(exampleMap, 3, 1) == 7);
    cout << treeCount(map, 3, 1) << endl;
    

    return 0;
}