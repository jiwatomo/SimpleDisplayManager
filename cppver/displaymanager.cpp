#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int changeto1080p();
int changeto768();
int changetoExtend();
int changetoOnly1();
int changetoOnly2();
int main() {
	while (1) {
		string menu = "======================\nSimple Display Manager\nPress any to exit\n1.Change resolution mode \n2.Change project mode";
		cout<<menu<<endl;
		char inputer = _getch();
		if(inputer == '1') {
			string menu1 = "1.Change to 1080p\n2.Change to 1366 mode";
			cout<<menu1<<endl;
			char inputer1 = _getch();
			if (inputer1 == '1') {
				int check = changeto1080p();
				if (check == 1) {
					cout<<"1080p success"<<endl;
				} else {
					cout<<"failed changing to 1080p"<<endl;
				}
			} else if (inputer1 == '2') {
				int check = changeto768();
				if (check == 1) {
					cout<<"1366 mode success"<<endl;
				} else {
					cout<<"failed changing to 1366 mode"<<endl;
				}
			}
		} else if (inputer == '2') {
			string menu2= "1.Extend mode\n2.only internal\n3.only external";
			cout<<menu2<<endl;
			char inputer2 = _getch();
			if(inputer2 == '1') {
				int check = changetoExtend();
				if (check == 1) {
					cout<<"success extend mode"<<endl;
				} else {
					cout<<"failed extend mode"<<endl;
				}
			} else if (inputer2 == '2') {
				int check = changetoOnly1();
				if (check == 1) {
					cout<<"success only internal"<<endl;
				} else {
					cout<<"failed only internal"<<endl;
				}
			} else if (inputer2 == '3') {
				int check = changetoOnly2();
				if (check == 1) {
					cout<<"success Oonly external"<<endl;
				} else {
					cout<<"failed only external"<<endl;
				}
			}
		} else {
			cout<<"Bye"<<endl;
			break;
		}
	}
	return 0;
}

int changeto1080p() {
	system("QRes.exe /x:1920 /y:1080");
	return 1;
}
int changeto768() {
	system("QRes.exe /x:1366 /y:768");
	return 1;
}
int changetoExtend() {
	system("DisplaySwitch.exe /extend");
	return 1;
}
int changetoOnly1() {
	system("DisplaySwitch.exe /internal");
	return 1;
}
int changetoOnly2() {
	system("DisplaySwitch.exe /external");
	return 1;
}
