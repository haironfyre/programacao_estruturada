
===========================================================
#include <iostream>
using namespace std;
int main()
{
char ch1='a',ch2=48,ch3='\x23';
cout << ch1 <<' ' << ch2 << ' ' << ch3 <<endl;
return 0;
}
===========================================================

#include <iostream>
using namespace std;
int main()
{
	string nome="Jonathan",sobrenome="Winchester";
	string texto=u8R"(string with '\backlash)", texto2="essa string é\
 grande demais para saber em uma linha só";
	cout << nome << " " << sobrenome <, endl;
	cout << texto << " " << texto2 << endl;
return 0;
}

===========================================================

/* CÁLCULO DA MÉDIA */

#include <iostream>
using namespace std;
int main()
{
	double nota1, nota2;
	double media = (nota1+nota2);
cout << media << endl;
return 0;
}

===========================================================

/* CÁLCULO DO DELTA */

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b, c, delta, x1, x2;
	cout << "Digite os coeficientes da equação do 2º \
 grau, nessa ordem: ";
	cin >> a >> b >> c;
	delta=b*b - 4*a*c;
	if ( delta < 0)
		cout << "A equação não possui raizes reais." << endl;
	else 
		if(delta==0){
			cout << "A equação possui apenas uma raiz real." << endl;
			x1=-b/(2*a);
			cout << "A raiz encontrada foi : " << x1 << endl;		
	
		}else{
			cout << "A equação possui duas raizes reais." << endl;
			x1= (-b+sqrt(delta)) / (2*a);
			x2= (-b-sqrt(delta)) / (2*a);
			cout << "As raízes encontradas foram: " << x1 << " e " << x2 << endl;


	}
	return 0;
}

===========================================================
