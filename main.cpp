#include <iostream>
#include <unordered_map>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {

    unordered_map<string, int> um;

    um["hello"] = 2;

    cout << um["hello"] << endl;

    return 0;
}
