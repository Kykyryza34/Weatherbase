#include <iostream>
using namespace std;
struct Weather
{
	double temperature;
	double precipitation;
	double windspeed; // ����������,������,�������� �����.
};
struct Weat
{
	char winddir[20];
	char weatherphen[20];// ����������� ����� , �������� ������� .
};
int main()
{
	setlocale(LC_ALL, "Russian");
	string YesNo, j;
	double SrTemp = 0, Day = 0, CR = 0, z = 0, q = 0, wi = 0;
	do
	{
		Day++;
		cout << "����:" << Day << '\n';
		Weather x;
		cout << "� ������ �����������:";
		cin >> x.temperature;
		//-----------------
		SrTemp += x.temperature;// ����������� ����������� 
		CR = SrTemp / Day;
		//-----------------
		//�������� ������
	precip:
		cout << "� ������ ������:";
		cin >> x.precipitation;
		q += x.precipitation;
		if (q < 0 && q != 0)
		{
			cout << "������ �� ����� ���� �������������� !!! \n";
			goto precip;
		}
		// �������� �������� 
	winds:
		cout << "� ������ �������� �����:";
		cin >> x.windspeed;
		z += x.windspeed;
		if (z < 0 && z != 0)
		{
			cout << "C������� ����� �� ����� ���� ������������� !!! \n";
			z = 0;
			goto winds;
		}
		wi = z / Day;
		Weat y;
		cout << "� ������ ����������� �����(W,E,S,N):";
		cin >> y.winddir;
		int i;
		cout << "� ������ �������� ������� (����/�,�������/O,�����/R,����/S) :";
		cin >> y.weatherphen;
		cout << "�������  �����������:" << CR << '\n';
		cout << "�������  c������� �����:" << wi << '\n';
		cout << "����������/����� ('Con'/'Quit')\n";
		cin >> YesNo;
	} while ((YesNo == "Con" || YesNo == "con"));
	cin.get();
}