#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string SRC = "D:\\WCs\\Lab4\\Lab4\\input.txt";
const string SAVE = "D:\\WCs\\Lab4\\Lab4\\output.txt";

//存放DNA序列和其逆序数的类
class DNA_Struct {
public:
	int inv;
	string content;

	DNA_Struct() {
		this->content = "";
		this->inv = 0;
	}

	DNA_Struct(string content, int inv) {
		this->content = content;
		this->inv = inv;
	}

	void setValue(string content, int inv) {
		this->content = content;
		this->inv = inv;
	}

};

//获得DNA序列的逆序数
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
	//读取并存储数据
	ifstream inf(SRC);
	int n, m;
	inf >> n >> m;
	DNA_Struct DNA[8];
	for (int i = 0; i < m; i++) {
		string temp;
		inf >> temp;
		DNA[i].setValue(temp, getInv(temp,n));
	}
	inf.close();
	/*for (int j = 0; j < m; j++) {
		cout << DNA[j].content << " " << DNA[j].inv << endl;
	}*/
	cout << endl;
	DNA_Struct min = DNA_Struct(DNA[0].content, DNA[0].inv);
	int minIndex = 0;
	for (int i = 0; i < m; i++) {
		min = DNA_Struct(DNA[i].content, DNA[i].inv);
		minIndex = i;
		for (int j = i; j < m; j++) {
			if (DNA[j].inv < DNA[minIndex].inv) {
				min.setValue(DNA[j].content,DNA[j].inv);
				minIndex = j;
			}
		}
		DNA_Struct temp = DNA_Struct(min.content,min.inv);
		DNA[minIndex].setValue(DNA[i].content,DNA[i].inv);
		DNA[i].setValue(temp.content,temp.inv);
		//cout << i << " " << DNA[i].content << " " << DNA[i].inv << endl;
	}
	ofstream ofs(SAVE);
	for (int j = 0; j < m; j++) {
		ofs << DNA[j].content << endl;
	}
	return 0;
}

