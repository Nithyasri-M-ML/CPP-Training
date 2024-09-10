#include <iostream>
#include <vector>
#include <map>
using namespace std;

template <typename T>
void printVector(const vector<T>& vec) {
    cout << "Vector contents: ";
    for (const T& elem : vec) {
        cout << elem << " ";
    }
    cout << endl;
}
template <typename K, typename V>
void printMap(const std::map<K, V>& mp) {
    cout << "Map contents: " <<endl;
    for (const auto& pair : mp) {
        cout << pair.first << " -> " << pair.second <<endl;
    }
}
int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    printVector(numbers);
    map<string, int> nameToAge;
    nameToAge["member1"] = 30;
    nameToAge["member2"] = 25;
    nameToAge["memner3"] = 28;
    printMap(nameToAge);

    return 0;
}
