#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100];
    cin.getline(s, 100); // space soho input nite 'cin.getline(s, 100)' lage. cin parena. Enter soho input nite 'fgets(s,100,stdin)' use korte hoy.
    cout << strlen(s);   // ajonno string.h headerfile add korte habe becaseu strlen comes from C.

    return 0;
}