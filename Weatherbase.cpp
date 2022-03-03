#include <iostream>
using namespace std;
struct Weather
{
	double temperature;
	double precipitation;
	double windspeed; // Температур,Осадки,скорость ветра.
};
struct Weat
{
	char winddir[20];
	char weatherphen[20];// Направление ветра , Погодные явления .
};
int main()
{
	setlocale(LC_ALL, "Russian");
	string YesNo, j;
	double SrTemp = 0, Day = 0, CR = 0, z = 0, q = 0, wi = 0;
	do
	{
		Day++;
		cout << "День:" << Day << '\n';
		Weather x;
		cout << "В ведите температуру:";
		cin >> x.temperature;
		//-----------------
		SrTemp += x.temperature;// запоминалка температуры 
		CR = SrTemp / Day;
		//-----------------
		//Проверка осадки
	precip:
		cout << "В ведите осадки:";
		cin >> x.precipitation;
		q += x.precipitation;
		if (q < 0 && q != 0)
		{
			cout << "Осадки не могут быть отрицательными !!! \n";
			goto precip;
		}
		// Проверка скорости 
	winds:
		cout << "В ведите скорость ветра:";
		cin >> x.windspeed;
		z += x.windspeed;
		if (z < 0 && z != 0)
		{
			cout << "Cкорость ветра не может быть отрицательной !!! \n";
			z = 0;
			goto winds;
		}
		wi = z / Day;
		Weat y;
		cout << "В ведите направлеине ветра(W,E,S,N):";
		cin >> y.winddir;
		int i;
		cout << "В ведите Погодные явления (Ясно/С,Облочно/O,Дождь/R,Снег/S) :";
		cin >> y.weatherphen;
		cout << "Средняя  температуру:" << CR << '\n';
		cout << "Средняя  cкорость ветра:" << wi << '\n';
		cout << "Продолжить/Выйти ('Con'/'Quit')\n";
		cin >> YesNo;
	} while ((YesNo == "Con" || YesNo == "con"));
	cin.get();
}