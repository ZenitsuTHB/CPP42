#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    vector<int> v = {1, 3, 7, 9};
//
//    // Insert element 8 at index 2
//    v.insert(v.begin() + 2, 8);
//
//    for (auto i : v)
//        cout << i << " ";
//    return 0;
//}
//#include <bits/stdc++.h>
using namespace std;

int main() {
	
	list<int> l{4, 5};
	vector<int> v{1, 2, 3,};
	
	// Inserting all elements of l to v
	v.insert(v.begin() + 3, l.begin(), l.end());
	
	for (auto i : v)
		cout << i << " ";
	return 0;
}

