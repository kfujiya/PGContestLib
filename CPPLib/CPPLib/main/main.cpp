#include <iostream>
#include <string>
using namespace std;

int main(){
	/* 入力サンプル */
	int A, N;
	string X;
	cin >> A >> N >> X;

	int* field = new int[N+1];
	for(int index = 1; index <= N; index++) {
		cin >> field[index];
	}

	cout << "出力サンプル" << endl;

	return 0;
}