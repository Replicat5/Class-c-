//#include < iostream >
//using namespace std;
//
//
//class Hero{
//public:
//	string nameHero = "Riki";
//	Hero() {
//		cout << "Вызвался конструктор"<<endl;
//	}
//	~Hero() {
//		cout << "Вызвался деструктор";
//	}
//};
//
//
//
//int main() {
//	setlocale(0, "Rus");
//	Hero hero;
//	cout << hero.nameHero<<endl;
//
//}


#include <iostream> 
#include <cmath> 

using namespace std;

class Tre {
public:
	int a, b, c;
	
	int Square() {
		int p = Perimetr()/2;
		int s = sqrt(p * (p - a) * (p - b) * (p - c));
		return s;

	}

	int Perimetr() {
		int P = a + b + c;
		return P;

	}
};

int main()
{
	Tre x; 
	cin >> x.a;
	cin >> x.b;
	cin >> x.c;
	cout << x.Perimetr()<<endl;
	cout << x.Square();


	return(0);
}
