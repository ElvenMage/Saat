#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <windows.h>
using namespace std;
int main() {
	int hr = 0, mn = 0, sec = 0;

	while (true) {
		system("cls");
		cout << hr << " : " << mn << " : " << sec << " : " << endl;
		sec++;
		if (sec == 60) {
			mn++;
			sec = 0;
			if (mn == 60) {
				hr++;
				mn = 0;
				if (hr == 60) {
					hr = 0;
				}
			}
		}
		Sleep(1000);
	}
	return 0;
}