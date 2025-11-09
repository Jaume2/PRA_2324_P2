#include "DyV.h"
#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v = {1,2,3,4,5,6,7,8,9,10};
	int res = BusquedaBinaria(2, v, 0, 9);
	cout << " " << res << endl;
	int res2 = QuickSort(v, 0, 9);
	cout << " " << res2 <<endl;
	return 0;
}
