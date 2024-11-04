
#include <iostream>
using namespace std;
int main()
{

	int start, end;

	cout << "Start: " << endl;
	cin >> start;

	cout << "End: " << endl;
	cin >> end;
	if (start >= 0 && start <= 255) {
		if (end >= start) {

			while (start != (end + 1)) {

				char index = start;

				cout << start << " --> " << index << endl;
				start++;

			}

		}
		else {
			cout << "Invalid code!";
		}
	}

}