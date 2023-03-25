//#include <iostream>
//using namespace std;
//
//template <typename T>
//T max5(const T arr[]);
//
//int main() {
//	int arr1[5] = {1,3,9,2,-5};
//	double arr2[5] = {1.2,3.6,2.1,-9.2,8.2};
//	cout << max5(arr1) << " " << max5(arr2) << endl;
//	return 0;
//}
//
//template <typename T>
//T max5(const T arr[]) {
//	T max = arr[0];
//	for (int i = 1; i < 5; i++) {
//		max = max < arr[i] ? arr[i] : max;
//	}
//	return max;
//}