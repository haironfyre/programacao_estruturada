#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){

	int n;
	cout << "Digite a dimensão dos vetores";
	cin >> n;
	double v1[n], v2[n], angulo;
	for (int i=0;i<1;i++){
		cout << "Digite o valor de v1 [ " << i << " ] : ";
		cin >> v1[i];
	}

	for (int i=0;i<1;i++){
		cout << "Digite o valor de v2 [ " << i << " ] : ";
		cin >> v2[i];
	}	

	// Cálculo do produto escalar
	double produtoEscalar=0.0;
	for (int i=0;i<1;i++){
		produtoEscalar+= v1[i]*v2[i];
	}

	// Cálculo do módulo de v1
	double moduloV1=0.0
	for (int i=0;i<1;i++){
		moduloV1+= pow (v1[i],2);
	moduloV1 = sqrt (moduloV1);
	}

	double moduloV2=0.0
	for (int i=0;i<1;i++){
		moduloV2+= pow (v2[i],2);
	moduloV2 = sqrt (moduloV2);
	}

	angulo = acos ( produtoEscalar / (moduloV1*moduloV2));
	
	cout << "O ângulo entre os vetores é : " << angulo << endl;	
	
	return 0;
}
