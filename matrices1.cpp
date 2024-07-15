//MATRICES 01
//Halle la sumatoria de los elementos de una matriz cuadrada que esten por encima de su diagonal principal
//Alison Khiara Flores Hallasi
#include <iostream>
using namespace std;

int main(){
	int i,n,j;
	int elementos[100][100];
	cout<<"Ingrese la dimension de la matriz: ";
	cin>>n;
	for (int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cout<<"Ingrese el elemento "<<i<<"x"<<j<<" : ";
			cin>>elementos[i][j];
		}
	}
		cout<<" "<<endl;
	cout<<"Los elementos de la matriz son: "<<endl;
	cout<<" "<<endl;
	for (int k=1; k<=n; k++){
		cout<<" | ";
		for(int l=1; l<=n; l++){
			cout<<elementos[k][l]<<"  ";
		}
		cout<<"| ";
	cout<<" "<<endl;
	}
	                                                                                                                                                        
}
