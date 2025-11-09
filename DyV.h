#include <iostream>
#include <vector>
using namespace std;


template <typename T>
int BusquedaBinaria(T x, vector<T> v, int ini, int fin){
	int m =(ini+ fin)/2;
	if(x > v[fin]){
		cout <<"El valor no se encuentra en el vector\n";
		return -1;
	}
	if(v[m] == x){//El valor es el que se encuentra en la posición m
	       return m;
	}else if(v[m] > x){//El valor se encontrará entre m y fin
 		return BusquedaBinaria(x, v, m+1, fin);
	}else{
		return BusquedaBinaria(x, v, ini, m-1);
	}
}

template <typename T>

int Partition(vector<T> v, int ini, int fin){
	T x = v[fin];
	int contador = ini;
	for(int i = ini; i < fin; i++){
		if(v[j] <= x){
			i += 1;
		}
	}
	swap(v[i], v[fin]);
	return i;
	
}
template <typename T>
void QuickSort(vector<T> v, int ini, int fin){
	if(ini < fin){
		int ivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot-1);
		QuickSort(v, pivot + 1, fin);
	}
}


