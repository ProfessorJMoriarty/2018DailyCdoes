#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	ifstream file("input.txt");

	int num;
	int size;
	vector<int> numbers;
	vector<int>::iterator iter;
	vector<int>::iterator iter2;


	if (file.is_open())
	{
		file >> size;
		cout << "size is " << size << endl;
		for (int i = 0; i < size*2; i++) {
			//cout << "i is " << i << endl;
			file >> num;
			//cout << num<<" ";
			numbers.push_back(num);
		}

		cout << endl << endl;
		for (iter = numbers.begin(); iter != numbers.end()-1; iter+=2) {
		

			iter2 = iter;

			if (iter2 == numbers.end()) {
				cout << "attempting to break";
				break;

			}

			//if(iter2!=numbers.end())
				advance(iter2, 1);
	
			cout << *iter + *iter2 << " , " << *iter * *iter2 << endl;
		

		}
		cout << "flag 1" << endl;
		file.close();
	}

	else cout << "Unable to open file";

	system("pause");
	return 0;

}