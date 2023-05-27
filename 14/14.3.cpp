#include <iostream>
#include<vector>
#include <stdexcept>
using namespace std;
int main() {
    vector<int> v{14,543,758,234,56};
    int val;
    try {
        cout << "vvedite znachenie kotoroe nado naity: ";
        cin >> val;
        if (find(v.begin(),v.end(), val)==v.end()) {
            throw runtime_error("znacheniya net");
        }
        cout << "znachenie " << val << " naideno" << "\n";
    }
    catch (runtime_error& e) {
        cout << "exception accured\n" << e.what();
    }
    return 0;
}