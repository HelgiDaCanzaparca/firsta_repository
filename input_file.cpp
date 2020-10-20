
#include <iostream>

using namespace std;

string input_file(){
	cout << "введите адрес файла"<< endl; 
	string input_file;
	getline(cin, input_file);
	return input_file;
	}
