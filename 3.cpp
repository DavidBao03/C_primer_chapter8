//#include <iostream>
//#include <string>
//using namespace std;
//
//string& toUpper(string& str) {
//	if (str == "q") {
//		cout << "Bye" << endl;
//		return str;
//	}
//	int m = 0;
//	while (str[m]) {
//		m++;
//	}
//	for (int i = 0; i < m; i++) {
//		if (str[i] >= 'a' && str[i] <= 'z') {
//			str[i] -= 32;
//		}
//	}
//	cout << str << endl;
//	return str;
//}
//
//int main() {
//	string str = "";
//	while (str != "q") {
//		cout << "Enter a string (q to quit): ";
//		getline(cin,str);
//		str = toUpper(str);
//	}
//
//	return 0;
//}