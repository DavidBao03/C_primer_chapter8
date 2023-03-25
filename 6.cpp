//#include <iostream>
//#include  <cstring>
//using namespace std;
//
//template <typename T>
//T maxn(T arr[],int len);
//template <> char* maxn(char* arr[], int len);
//
//int main() {
//	int arr1[6] = { 1,3,9,2,-5,10};
//	double arr2[4] = { 1.2,3.6,2.1,-9.2};
//	char* parr[5] = { "H","HH","HHH","HHHHH","HHHH" };
//	cout << maxn(arr1,6) << " " << maxn(arr2,4) << endl;
//	cout << maxn(parr, 5) << endl;
//	return 0;
//}
//
//template <typename T>
//T maxn(T arr[],int len) {
//	T max = arr[0];
//	for (int i = 1; i < len; i++) {
//		max = max < arr[i] ? arr[i] : max;
//	}
//	return max;
//}
//
//template <> char* maxn(char* arr[], int len) {
//	char* max = arr[0];
//	for (int i = 0; i < len; i++) {
//		max = strlen(max) < strlen(arr[i]) ? arr[i] : max;
//	}
//	return max;
//}