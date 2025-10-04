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

