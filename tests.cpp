#include <iostream>
#include "winconAPI.cpp"
using namespace std;
int main()
{
	gotoxy(100,10);
	cout << 10 << endl;
	hideCursor();
	pause();
	showCursor();
	pause();

return 0;
}
