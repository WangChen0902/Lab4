#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

const string SRC = "D:\\WCs\\Lab4\\Lab4\\input.txt";

int getInv(string str, int n) {
	int inv = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (str.at(i) > str.at(j)) {
				inv++;
			}
		}
	}
	return inv;
}

int main()
{
	ifstream inf(SRC);
	int n, m;
	inf >> n >> m;
	string DNA[128];
	for (int i = 0; i < m; i++) {
		inf >> DNA[i];
	}
	map<string, int> DNA_Map;
	for (int i = 0; i < m; i++) {
		DNA_Map.insert(pair<string,int>(DNA[i], getInv(DNA[i],n)));
	}
	for (map<string, int>::iterator it = DNA_Map.begin(); it != DNA_Map.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}
	return 0;
}

