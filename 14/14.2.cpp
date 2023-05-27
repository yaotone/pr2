using namespace std;
#include <iostream>
#include <stdexcept>
int main() 
{
    int i;
    int arr[5] = {9,534,123,64,67 };
    try {
        cout << "vvedite index: ";
        cin >> i;
        if (i < 0 || i >= size(arr)) {
            throw runtime_error("necorrectnii index\n");
        }
    }
    catch (runtime_error& e) {
        cout <<"exception occured\n" << e.what() << "\n";
    }
    return 0;
}