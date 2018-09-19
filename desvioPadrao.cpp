#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
		
	int num_alunos;
	double media=0.0, desvioPadrao=0.0;
	cout << "Digite o numero de aluos de uma sala; ";
	cin >> num_alunos;
	double notas[num_alunos];
	
	for(int i=0;i<num_alunos;i++){
		cout << "Digite a nota do " << (i+1) << "º aluno: ";
		cin >> notas[i];
		media += notas [i];
	}
	media/=num_alunos;	
	
	for(int i=0;i<num_alunos;i++)
		desvioPadrao += pow(notas[i]-media,2);
	desvioPadrao = sqrt(desvioPadrao);
	cout << fixed << setprecision(1);
	cout << "A média das notas dos alunos foi de " << media << " com o desvio padrão de " << desvioPadrao << endl;

	
	return 0;
}
