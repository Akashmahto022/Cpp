#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(20);
    vec.push_back(200);
    vec.push_back(230020);
    vec.push_back(200220);

    cout << "size of the vector is : " << vec.size() << endl;

    vec.pop_back();

    for (int i : vec)
    {
        cout << i << endl;
    };

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(1) << endl;

    return 0;
};