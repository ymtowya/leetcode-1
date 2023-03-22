// lc1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

void test_map(int i) {
    unordered_map<string, int> my_map;
    my_map["hello"] = 1 + i;
    my_map["hellom"] = 1 - i;

    cout << my_map["hello"];

    for (const auto& value : my_map) {
        cout << value.first << " - " << value.second << endl;
    }
}

int main()
{
    test_map(7);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
