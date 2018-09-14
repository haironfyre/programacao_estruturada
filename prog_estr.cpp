#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	const double sign_alu=30, sign_prof=70, sign_merc=100, minicurso=20;
	const double taxa_debito=0.0199, taxa_credito=0.0498;
	const int aluno=1, professor=2, profissional=3, boleto=1, debito=2, credito=3;
	int tipoinscricao, formapagamento;
	char Minicurso;
	double valortotal;
	cout << "Digite o tipo de inscrição:\n1 - aluno\n2 - professor\n3 - profissional do mercado\n";
	cin >> tipoinscricao;
	switch(tipoinscricao){
		case aluno:
			valortotal=sign_alu;
			break;
		case professor:
			valortotal=sign_prof;
			break;
		case profissional:
			valortotal=sign_merc;
			break;
		default:
			cout << "Opção invalida" << endl;
			return -1;
	}
		cout << "Incluir minicurso? Digite S (sim) ou N (não)" << endl;
		cin >> Minicurso;
		switch(Minicurso){
			case 's':
			case 'S':
				valortotal+=minicurso;
				break;			
			case 'n':
			case 'N':
				break;
			default:
				cout << "Opção invalida" << endl;
				return -1;
}
		cout << "Qual a forma de pagamento:\n1 - Boleto\n2 - Cartão de débito\n3 - Cartão de credito\n";
		cin >> formapagamento;
		switch(formapagamento){
			case boleto;
				break;
			case debito:
				valortotal*=1taxa_debito;
				break;
			case credito:
				valortotal*=1taxa_credito;
				break;
			default:
				cout << "Opção inválida" << endl;
				return -1;
}
		cout << fixed << setprecision(2);
		cout << "O valor total a pagar é: " << valortotal << endl;
	return 0;
}
