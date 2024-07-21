//MATRICES 02
//Halle la suma de los elementos de la diagonal secundaria de una matriz cuadrada
//Alison Khiara Flores Hallasi

#include <iostream>
using namespace std;

int main(){
	int i,n,j, s, l, sum=0;
	int elementos[100][100];
	cout<<"Ingrese la dimension de la matriz: ";
	cin>>n;
	for (int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<"Ingrese el elemento "<<i<<"x"<<j<<" : ";
			cin>>elementos[i][j];	
			}
	}
	for (int k=1; k<=n; k++){
		cout<<" | ";
		for(int l=1; l<=n; l++){
			cout<<elementos[k][l]<<"  ";
		}
		cout<<"| ";
		cout<<" "<<endl;
	}
	return 0;
}
