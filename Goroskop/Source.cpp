#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int Oven [32] { 21, 22, 23, 24, 25, 26, 27, 27, 28, 29, 30, 31, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 };
int Telec [31] { 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 };
int Bliznetsi [31] { 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 };
int Rak [31] { 22, 23, 24, 25, 26, 27, 28, 29, 30, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22};
int Lev [30] { 23, 24, 25, 26, 27, 28, 29, 30, 31, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
int Deva [33] { 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
int Vesi [30] { 24, 25, 26, 27, 28, 29, 30, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23 };
int Skorpion [30]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
int strelec [31]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};
int Kozerog [29] { 23, 24, 25, 26, 27, 28, 29, 30, 31, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
int Vodolei [31] {30, 31, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29 };
int Riba [31] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31 };

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "rus");

	//������ ������
	string zvezda = "     *\n"
		"    ***\n"
		"  *******\n"
		"    ***\n"
		"   *   *\n";
	cout << zvezda;

	cout << "������������, ����� ���������� � ��� ��������!" << endl;
	cout << endl;
	cout << "������� ���� � ����� ������ ��������, � �� ������ ��� ����� � ��� ���� �������." << endl;

	//���������� ��� � ������ ��������
	int den_Rozdenia;
	string mesac_Rozdenia;

perehod_Bezuslovni:
	cin >> den_Rozdenia >> mesac_Rozdenia;

	//����
	for (bool i = 0; i != 1;) {
		cout << "�� �������� " << den_Rozdenia << " " << mesac_Rozdenia << ", ��� �����?" << endl;
		string temp;
		cin >> temp;
		if (temp == "��" || temp == "��") {
			system("cls");
			break;
		}
		else if (temp == "���" || temp == "���") {
			system("cls");
			cout << "������� ���� � ����� �������� ��������" << endl;
			cout << endl;
			goto perehod_Bezuslovni;

		}
	}

	//������
	int mesac_Rozdenia_;

	//����
	for (int i = 0; i < sizeof(Oven) / sizeof(Oven[0]); i++) {
		if (mesac_Rozdenia == "�����" && den_Rozdenia >= 21 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 1;
			goto fast;
		}
		else if (mesac_Rozdenia == "������" && den_Rozdenia >= 1 && den_Rozdenia <= 20) {
			mesac_Rozdenia_ = 1;
			goto fast;
		}
	}

	//�����
	for (int i = 0; i < sizeof(Telec) / sizeof(Telec[0]); i++) {
		if (mesac_Rozdenia == "������" && den_Rozdenia >= 21 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 2;
			goto fast;
		}
		else if (mesac_Rozdenia == "���" && den_Rozdenia >= 1 && den_Rozdenia <= 21) {
			mesac_Rozdenia_ = 2;
			goto fast;
		}
	}

	//��������
	for (int i = 0; i < sizeof(Bliznetsi) / sizeof(Bliznetsi[0]); i++) {
		if (mesac_Rozdenia == "���" && den_Rozdenia >= 22 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 3;
			goto fast;
		}
		else if (mesac_Rozdenia == "����" && den_Rozdenia >= 1 && den_Rozdenia <= 21) {
			mesac_Rozdenia_ = 3;
			goto fast;
		}
	}

	//���
	for (int i = 0; i < sizeof(Rak) / sizeof(Rak[0]); i++) {
		if (mesac_Rozdenia == "����" && den_Rozdenia >= 22 && den_Rozdenia <= 30) {
			mesac_Rozdenia_ = 4;
			goto fast;
		}
		else if (mesac_Rozdenia == "����" && den_Rozdenia >= 1 && den_Rozdenia <= 22) {
			mesac_Rozdenia_ = 4;
			goto fast;
		}
	}

	//���
	for (int i = 0; i < sizeof(Lev) / sizeof(Lev[0]); i++) {
		if (mesac_Rozdenia == "����" && den_Rozdenia >= 23 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 5;
			goto fast;
		}
		else if (mesac_Rozdenia == "�������" && den_Rozdenia >= 1 && den_Rozdenia <= 21) {
			mesac_Rozdenia_ = 5;
			goto fast;
		}
	}

	//����
	for (int i = 0; i < sizeof(Deva) / sizeof(Deva[0]); i++) {
		if (mesac_Rozdenia == "�������" && den_Rozdenia >= 22 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 6;
			goto fast;
		}
		else if (mesac_Rozdenia == "��������" && den_Rozdenia >= 1 && den_Rozdenia <= 23) {
			mesac_Rozdenia_ = 6;
			goto fast;
		}
	}

	//����
	for (int i = 0; i < sizeof(Vesi) / sizeof(Vesi[0]); i++) {
		if (mesac_Rozdenia == "��������" && den_Rozdenia >= 24 && den_Rozdenia <= 30) {
			mesac_Rozdenia_ = 7;
			goto fast;
		}
		else if (mesac_Rozdenia == "�������" && den_Rozdenia >= 1 && den_Rozdenia <= 23) {
			mesac_Rozdenia_ = 7;
			goto fast;
		}
	}

	//��������
	for (int i = 0; i < sizeof(Skorpion) / sizeof(Skorpion[0]); i++) {
		if (mesac_Rozdenia == "�������" && den_Rozdenia >= 24 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 8;
			goto fast;
		}
		else if (mesac_Rozdenia == "������" && den_Rozdenia >= 1 && den_Rozdenia <= 22) {
			mesac_Rozdenia_ = 8;
			goto fast;
		}
	}

	//�������
	for (int i = 0; i < sizeof(strelec) / sizeof(strelec[0]); i++) {
		if (mesac_Rozdenia == "������" && den_Rozdenia >= 23 && den_Rozdenia <= 30) {
			mesac_Rozdenia_ = 9;
			goto fast;
		}
		else if (mesac_Rozdenia == "�������" && den_Rozdenia >= 1 && den_Rozdenia <= 22) {
			mesac_Rozdenia_ = 9;
			goto fast;
		}
	}

	//�������
	for (int i = 0; i < sizeof(Kozerog) / sizeof(Kozerog[0]); i++) {
		if (mesac_Rozdenia == "�������" && den_Rozdenia >= 23 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 10;
			goto fast;
		}
		else if (mesac_Rozdenia == "������" && den_Rozdenia >= 1 && den_Rozdenia <= 20) {
			mesac_Rozdenia_ = 10;
			goto fast;
		}
	}

	//�������
	for (int i = 0; i < sizeof(Vodolei) / sizeof(Vodolei[0]); i++) {
		if (mesac_Rozdenia == "������" && den_Rozdenia >= 21 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 11;
			goto fast;
		}
		else if (mesac_Rozdenia == "�������" && den_Rozdenia >= 1 && den_Rozdenia <= 19) {
			mesac_Rozdenia_ = 11;
			goto fast;
		}
	}

	//����
	for (int i = 0; i < sizeof(Riba) / sizeof(Riba[0]); i++) {
		if (mesac_Rozdenia == "�������" && den_Rozdenia >= 20 && den_Rozdenia <= 29) {
			mesac_Rozdenia_ = 12;
			goto fast;
		}
		else if (mesac_Rozdenia == "�����" && den_Rozdenia >= 1 && den_Rozdenia <= 20) {
			mesac_Rozdenia_ = 12;
			goto fast;
		}
	}

fast:

	//�����
	switch (mesac_Rozdenia_)
	{
	case 1: // ���� ����
		cout << "��� ���� ������� - ����!" << endl;
		cout << "���� - ������������� �������� ������." << endl;
		cout << "���� ����� �����, ����������� ������, ������� ���� ����� ����� ���� ����������, ����������� � �������." << endl;
		cout << "���� ������� �������� ���������������� ����������, �������������� ���������." << endl;
		cout << "���� ���������� ������ ���������� �� ����������, ������ � ������." << endl;
		goto exit;
	case 2: // ���� ������
		cout << "��� ���� ������� - �����." << endl;
		cout << "������ �������� ��������������� ������ �������, �� ����� ��������� ����� �� ����� ������ ������ ��������." << endl;
		cout << "� ������� - ������ � ������� - ������ ������ �� ����� ������� � ��������, � ��� ����� ����� ������." << endl;
		cout << "������ ������ ���������� � ������, ��������� � ������." << endl;
		goto exit;
	case 3: //����� ���������
		cout << "��� ���� ������� - ��������" << endl;
		cout << "�������� �������� ��������������� ��������� ������, � �������� �������� - �������, ��������������, �������� ����, ���������� �������� ����������." << endl;
		cout << "������� ������� ��������, ����������." << endl;
		cout << "������� �������� ����� ����� ������� ��������." << endl;
		cout << "�������� ������ ���������� �� ����������, ��������� � ������." << endl;
		goto exit;
	case 4: //���� ����
		cout << "��� ���� ������� - ���." << endl;
		cout << "���� ������������� ������ ������." << endl;
		cout << "���������� ����� ����� ������ �� ���� ������� ������ ������ �� ������." << endl;
		cout << "���� - ���� �� ����� ������ ������." << endl;
		cout << "������� ���� ����� ������� ������� �����, ������� ���� ����� ������� � �� ������ ����������." << endl;
		cout << "���� ��������� ���������� � ������, ����������� � ������." << endl;
		goto exit;
	case 5: //���� ����
		cout << "��� ���� ������� ���." << endl;
		cout << "���� ������������� �������� ������." << endl;
		cout << "���� ����� ����� ���������� ����, ������� ���� ������ ������, ������� ���� ����, ������� ������� ��������." << endl;
		cout << "������� ���� ������ ����� �������� � �������� ������� ������ ���� ����." << endl;
		cout << "���� ������ ���������� �� ����������, ������ � ��������." << endl;
		goto exit;
	case 6: //���� ����
		cout << "��� ���� ������� ����." << endl;
		cout << "���� ������������� ������ ������." << endl;
		cout << "������� ���� ����� �����������, ������ � �� ���� ����� �������, ������� ���� �������� �������� �������� �����." << endl;
		cout << "������ ��� �������" << endl;
		cout << "���� ������ ���������� � ������, �������� � ����������." << endl;
		goto exit;
	case 7: //���� �����
		cout << "��� ���� ������� ����." << endl;
		cout << "���� ������������� ��������� ������." << endl;
		cout << "���� ������ ���������� � ��������� ����." << endl;
		cout << "������� ���� ������������, ������������, ����� ��������, ������� ���� ����� ����������, ����������." << endl;
		cout << "���� ������ ���������� � ��������� � ����������." << endl;
		goto exit;
	case 8: //���� ����������
		cout << "��� ���� ������� ��������." << endl;
		cout << "��������� ������������� ������ ������." << endl;
		cout << "��������� ����� ������������, ��������������� � ������� ����." << endl;
		cout << "���� �� ����� ����������� ������ �������." << endl;
		cout << "� �������� ���������� ������������ �� �����, �� ���������� ������." << endl;
		cout << "���������� � ������, � ������." << endl;
		goto exit;
	case 9: //���� ��������
		cout << "��� ���� ������� �������." << endl;
		cout << "�������� ������������� �������� ������." << endl;
		cout << "�������� ����� �������� ��������, ���������������." << endl;
		cout << "������� �������� �� ������ �������� ���������������� ����, ������� �������� ����� ������ �������������." << endl;
		cout << "�������� ������ ���������� � ����������, ������ � ������." << endl;
		goto exit;
	case 10: //���� ��������
		cout << "��� ���� ������� �������." << endl;
		cout << "������� �������� �������������� ������ ������." << endl;
		cout << "������� �������� ����� �������� ������� ������� ��������������� ������������." << endl;
		cout << "����� �������� ����� ������, ����������, ������������." << endl;
		cout << "�������� ������ ���������� � ������, �������� � ������" << endl;
		goto exit;
	case 11: //���� �������
		cout << "��� ���� ������� �������" << endl;
		cout << "������� �������� �������������� ��������� ������." << endl;
		cout << "������� ������� �������� ����������� ����������, ��������� �������. ����� ������� �������� ����� � ����� ����� ����." << endl;
		cout << "������� - ���� �� ����� ���������� ������ �������." << endl;
		cout << "������� ������ ��������� � ���������� � ������." << endl;
		goto exit;
	case 12: //���� �����
		cout << "��� ���� ������� ����." << endl;
		cout << "���� ��������� � ������ ������." << endl;
		cout << "���� ��������, �������, ����� ����������� ������ �������, �������� ������� �������������, � ��������� <������> ������ �����." << endl;
		cout << "������� - ���� �������� ����� ������ � ����� �����." << endl;
		cout << "����� - ����, ����� ����� ��������������, � ������ ���������." << endl;
		cout << "���� ������ ���������� �� �����������, ������, ������." << endl;
		goto exit;
	}
	exit:
	

	return 0;
}




