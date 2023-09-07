#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <cstring>
#include <string.h>
#include <string>

using namespace std;

int main() {
	string s1 = "It's allright, handsome Markise.";
	string s2 = "princess";
	string s3("Hello, ");

	s1.erase(0, 15); //delete "It's allright"
	s1.replace(9, 7, s2); //replace "Markise" with "princess"
	s1.insert(0, s3); //insert "Hello, "
	s1.erase(s1.size() - 1, 1); // delete "."
	s1.append(3, '!'); //append "!!!"

	int x = s1.find(" ");
	int y = s1.find(',');
	while (x < s1.size()) {
		s1.replace(x, 1, "/");
		x = s1.find(" ");
	}
	while (y < s1.size()) {
		s1.replace(y, 1, "%");
		y = s1.find(',');
	}
	cout << "s1: " << s1 << endl;
	return 0;
}