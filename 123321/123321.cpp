#include <iostream>

using namespace std;

void type() {
    char** arr = new char* [5];
    for (int i = 0; i < 5; i++) {
        *(arr + i) = new char[256];
        cin >> *(arr + i);
    }
    int a = 0;
    int b = 0;
    for (int j = 0; j < 5; j++) {
        if (b < strlen(*(arr + j))) {
            b = strlen(*(arr + j));
            a = j;
        }
    }
    cout << *(arr + a);
}

int main()
{
    type();
}