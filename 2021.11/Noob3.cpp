// https://replit.com/@andy8787main/TOI202111noob-3#main.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
	//cin
	vector<int> arr;//array
	vector<int> arrtemp; //暫時改
	int num;
	while (cin >> num) {
		if (num == 0) {
			break;
		}
		arr.push_back(num);
		arrtemp.push_back(num);
	}
	int day;
	cin >> day;

	//judge
	for (int i = 0; i < day; i++) {//天
		//暫時
		for (int j = 1; j < arr.size()-1; j++) {//第幾格(排除頭尾)
			if (arr[j-1] < arr[j]) {//要加
				arrtemp[j-1] += arr[j]*0.05;
			}
			if (arr[j+1] < arr[j]) {//要加
				arrtemp[j+1] += arr[j]*0.05;
			}
		}
		if (arr[0] > arr[1]) {//頭
			arrtemp[1] += arr[0]*0.1;
		}
		if (arr[arr.size()-1] > arr[arr.size()-2]) {//尾
			arrtemp[arr.size()-2] += arr[arr.size()-1]*0.1;
		}

		//更新
		for (int j = 0; j < arr.size(); j++) {
			arr[j] = arrtemp[j];
		}
	}

	//cout
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
}
