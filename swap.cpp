#include <iostream>
using namespace std;
void my_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    // aekhane return korte habe 2 ta. sei jonno pointer diye receive korte hoice. Normal vabe receive korle return korte parbo 1 ta. This is only for lerning. In C++ we will actually di this by a builtin function.
}
int main()
{
    int a, b;
    cin >> a >> b;
    my_swap(&a, &b); // pass by reference.
    cout << a << " " << b << endl;
    return 0;
}