#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;

void changeSymbol(char* str)
{
    char* strPtr;
    for (strPtr = str; *strPtr; strPtr++) {
        if (*strPtr == '.') {
            *strPtr = '!';
        }
    }
}
int NumSymb(char* str, char symb)
{
    char* strPtr;
    int c = 0;
    for (strPtr = str; *strPtr; strPtr++) {
        if (*strPtr == symb)
            c++;
    }
    return c;
}

int main()
{
    //1
    char myStr[] = "Hello. world.";
    cout << "My original string: " << myStr << endl;
    changeSymbol(myStr);
    cout << "My transformed string: " << myStr << endl;
    
    //2
    char nStr[] = "Hello World!";
    char mySymb;
    cout << "Enter a symbol: ";
    cin >> mySymb;
    cout << "In the line: '" << nStr << "'";
    cout << " number of symbols " << "'" << mySymb << "'" << " = " << NumSymb(nStr, mySymb) << endl;
}
