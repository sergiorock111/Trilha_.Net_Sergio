#include <iostream>

using namespace std;

int main (void){

wchar_t c;

c ='ç';

cout << c << " - " << hex << (int) c << endl;
c++;
cout << c << " - " << (int) c << endl;

c ='ã';

cout << c << " - " << hex << (int) c << endl;
c++;
cout << c << " - " << (int) c << endl;

return 0;

}