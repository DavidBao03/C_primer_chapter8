//#include <iostream>
//using namespace std;
//#include <cstring>
//struct stringy
//{
//	char* str;
//	int ct;
//};
//
//void set(stringy& newstr, const char* oldstr) {
//	newstr.ct = strlen(oldstr) + 1;
//	newstr.str = new char[newstr.ct];
//	strcpy(newstr.str, oldstr);
//}
//void show(const stringy& str, int n = 1) {
//	for (int i = 0; i < n; i++) {
//		cout << str.str << endl;
//	}
//}
//void show(const char* str, int n = 1) {
//	for (int i = 0; i < n; i++) {
//		cout << str << endl;
//	}
//}
//int main() {
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.";
//
//	set(beany, testing);
//	show(beany);
//	show(beany, 2);
//	testing[0] = 'D';
//	testing[1] = 'u';
//	show(testing);
//	show(testing, 3);
//	show("Done!");
//
//	return 0;
//}