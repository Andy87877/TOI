// https://replit.com/@andy8787main/TOI202111noob-2#main.cpp
#include <iostream>
using namespace std;

int main() {
	int len, sh, temp; //幾張 洗幾次 暫存
	cin >> len >> sh; 
	int arr[len];
	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}

	int fo[len/2], ba[len/2];//前後
	for (int i = 0; i < sh; i++) {
		//分前後
		for (int j = 0; j < len/2; j++) {
			fo[j] = arr[j];
		}
		temp = 0;
		for (int j = len/2; j < len; j++) {
			ba[temp] = arr[j];
			temp++;
		}

		//交換
		temp = 0;
		for (int j = 0; j < len/2; j++) {
			arr[temp] = fo[j];
			temp++;
			arr[temp] = ba[j];
			temp++;
		}
	}

	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
}
