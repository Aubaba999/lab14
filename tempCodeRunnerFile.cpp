#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int i=1;i<N;i++){
		for(int j =i;j>0;j--){
		T temp =d[x];
		d[x]=d[y];
		d[y]= temp;
		}
	}
}


int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
