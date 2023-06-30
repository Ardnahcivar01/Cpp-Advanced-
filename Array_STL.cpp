#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "At index : " << arr.at(2) << endl;
    cout << "Empty or not :" << arr.empty() << endl;
    cout << "Back element :" << arr.back() << endl;
    cout << "Front element " << arr.front() << endl;
    cout << arr.max_size() << endl;
    cout << arr.cend() << endl;

    return 0;
}
