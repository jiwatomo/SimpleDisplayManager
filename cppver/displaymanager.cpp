#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main() {
	while (1) {
		string menu = "1.change resolution mode \n2.change projectmode \n";
		cout<<menu<<endl;
		char inputer = _getch();
		if(inputer == '1') {
			string menu1 = "";
			
		} else if (inputer == '2') {
			string menu2= "";
		} else {
			break;
		}
		cout<<"Bye"<<endl;
	}
	return 0;
}

int changeto1080p() {
	return 1;
}
int changeto768() {
	return 1;
}
int changetoExtend() {
	return 1;
}
int changetoOnly1() {
	return 1;
}
int changetoOnly2() {
	return 1;
}
