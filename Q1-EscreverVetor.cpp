#include <iostream>
using namespace std;

int alterar(int v[], int n){
	for(int i=0;i<n;i++){
		if(v[i]==v[0]){
			cout<<"["<<v[0]<<", ";
		}else if(v[n]==v[i+1]){
			cout<<v[i]<<"]";
		}else{
			cout<<v[i]<<", ";
		}
	}
	return 0;
}

int main(){
	int tamanho;
	cin>>tamanho;
	int v[tamanho];
	for(int i=0;i<tamanho;i++){
		cin>>v[i];
	}
	alterar(v,tamanho);
	cout<<endl;
	
	return 0;
}
