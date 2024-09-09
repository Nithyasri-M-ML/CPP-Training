#include <iostream>
using namespace std;

class SmartPtr {
    int* ptr; // Actual pointer
public:
    SmartPtr(int* p = NULL) { ptr = p; }

    // Destructor
    ~SmartPtr() { delete (ptr); }

    int& operator*() { return *ptr; }
};

int main()
{
    SmartPtr ptrobj(new int());
    *ptrobj = 20;
    cout << *ptrobj<<endl;


    return 0;
}
