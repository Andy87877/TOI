// https://replit.com/@andy8787main/TOI202111noob-1#main.cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string filename;//輸入名
	int num;//後面數次兼算組
	int t;//有幾次
	cin >> t;

	vector<int> team;
	vector<int> times;
	for (int filetime = 0; filetime < t; filetime++) {
		cin >> filename;
		//ASCII
		num = (int(filename[3])-48)*10;
		num += (int(filename[4])-48);
		//放入
		bool flag = true;//是否沒有重複
		for (int i = 0; i < team.size(); i++) {
			if (team[i] == num) {
				times[i]++;
				flag = false;
				break;
			}
		}
		if (flag) {//創新的
			team.push_back(num);
			times.push_back(1);
			flag = false;
		}
	}
	
	//sort 趕時間 所以用最爛的方法
	int temp;
	for (int i = 0; i < team.size(); i++) {
		for (int j = 0; j < team.size(); j++) {
			if (team[i] < team[j]) {
				temp = team[i];
				team[i] = team[j];
				team[j] = temp;
				temp = times[i];
				times[i] = times[j];
				times[j] = temp;
			}
		}
	}
	
	for (int i = 0; i < team.size(); i++) {
		cout << team[i] << " " << times[i] << endl;
	}
}

/* 
ASCII
string filename = "000910";
int n;
n = int(filename[3])-48;
cout << n;
*/
