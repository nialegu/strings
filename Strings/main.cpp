#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <cstring>
#include <string.h>
#include <string>

using namespace std;

int main() {
	string s1="                    ", s2="cat";
	s1.insert(12, s2);
	cout << s1;
	return 0;
}