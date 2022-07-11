#include <iostream>
using namespace std;

class bloque
{
private:
	float valor;
public:
	bloque(){
		valor=0;
	}
	bloque(int pValor){
		valor=pValor;
	}
	
	~bloque(){}
	void setValor(int pValor){
		valor=pValor;
	}
	float getValor(){
		return valor;
	}
float calculomb(){
	return (valor/128)*16;
	}
float calculogb(){
	return calculomb()/1024;
	}
};
int main() {
	int valor; char continuar = 'S';
	bloque b1(0);
	
	while (continuar == 's' || continuar =='S' || continuar =='Y' || continuar =='y'){
		cout<<"Por favor ingrese la cantidad en bloques que desea convertir:"<<endl;
		cin>>valor;
		b1.setValor(valor);
		cout<<valor<<" bloques equivale a:"<<endl;
		cout<<"-"<<b1.calculomb()<<" MB"<<endl;
		cout<<"-"<<b1.calculogb()<<" GB"<<endl;
		cout<<"Desea hacer otra conversion? Introduzca \"S\" o \"Y\" para Si."<<endl;
		cin>>continuar;
	}
	return 0;
}

