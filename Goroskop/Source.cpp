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

	//Печать звезды
	string zvezda = "     *\n"
		"    ***\n"
		"  *******\n"
		"    ***\n"
		"   *   *\n";
	cout << zvezda;

	cout << "Здравствуйте, добро пожаловать в наш гороскоп!" << endl;
	cout << endl;
	cout << "Введите день и месяц вашего рождения, и мы скажем вам какой у вас знак задиака." << endl;

	//Обьявления дня и месаца рождения
	int den_Rozdenia;
	string mesac_Rozdenia;

perehod_Bezuslovni:
	cin >> den_Rozdenia >> mesac_Rozdenia;

	//Цикл
	for (bool i = 0; i != 1;) {
		cout << "Вы родились " << den_Rozdenia << " " << mesac_Rozdenia << ", все верно?" << endl;
		string temp;
		cin >> temp;
		if (temp == "Да" || temp == "да") {
			system("cls");
			break;
		}
		else if (temp == "Нет" || temp == "нет") {
			system("cls");
			cout << "Введите дату и месяц рождения повторно" << endl;
			cout << endl;
			goto perehod_Bezuslovni;

		}
	}

	//Месяцы
	int mesac_Rozdenia_;

	//ОВЕН
	for (int i = 0; i < sizeof(Oven) / sizeof(Oven[0]); i++) {
		if (mesac_Rozdenia == "марта" && den_Rozdenia >= 21 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 1;
			goto fast;
		}
		else if (mesac_Rozdenia == "апреля" && den_Rozdenia >= 1 && den_Rozdenia <= 20) {
			mesac_Rozdenia_ = 1;
			goto fast;
		}
	}

	//ТЕЛЕЦ
	for (int i = 0; i < sizeof(Telec) / sizeof(Telec[0]); i++) {
		if (mesac_Rozdenia == "апреля" && den_Rozdenia >= 21 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 2;
			goto fast;
		}
		else if (mesac_Rozdenia == "мая" && den_Rozdenia >= 1 && den_Rozdenia <= 21) {
			mesac_Rozdenia_ = 2;
			goto fast;
		}
	}

	//БЛИЗНЕЦЫ
	for (int i = 0; i < sizeof(Bliznetsi) / sizeof(Bliznetsi[0]); i++) {
		if (mesac_Rozdenia == "мая" && den_Rozdenia >= 22 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 3;
			goto fast;
		}
		else if (mesac_Rozdenia == "июня" && den_Rozdenia >= 1 && den_Rozdenia <= 21) {
			mesac_Rozdenia_ = 3;
			goto fast;
		}
	}

	//РАК
	for (int i = 0; i < sizeof(Rak) / sizeof(Rak[0]); i++) {
		if (mesac_Rozdenia == "июня" && den_Rozdenia >= 22 && den_Rozdenia <= 30) {
			mesac_Rozdenia_ = 4;
			goto fast;
		}
		else if (mesac_Rozdenia == "июля" && den_Rozdenia >= 1 && den_Rozdenia <= 22) {
			mesac_Rozdenia_ = 4;
			goto fast;
		}
	}

	//ЛЕВ
	for (int i = 0; i < sizeof(Lev) / sizeof(Lev[0]); i++) {
		if (mesac_Rozdenia == "июля" && den_Rozdenia >= 23 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 5;
			goto fast;
		}
		else if (mesac_Rozdenia == "августа" && den_Rozdenia >= 1 && den_Rozdenia <= 21) {
			mesac_Rozdenia_ = 5;
			goto fast;
		}
	}

	//ДЕВА
	for (int i = 0; i < sizeof(Deva) / sizeof(Deva[0]); i++) {
		if (mesac_Rozdenia == "августа" && den_Rozdenia >= 22 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 6;
			goto fast;
		}
		else if (mesac_Rozdenia == "сентября" && den_Rozdenia >= 1 && den_Rozdenia <= 23) {
			mesac_Rozdenia_ = 6;
			goto fast;
		}
	}

	//ВЕСЫ
	for (int i = 0; i < sizeof(Vesi) / sizeof(Vesi[0]); i++) {
		if (mesac_Rozdenia == "сентября" && den_Rozdenia >= 24 && den_Rozdenia <= 30) {
			mesac_Rozdenia_ = 7;
			goto fast;
		}
		else if (mesac_Rozdenia == "октября" && den_Rozdenia >= 1 && den_Rozdenia <= 23) {
			mesac_Rozdenia_ = 7;
			goto fast;
		}
	}

	//СКОРПИОН
	for (int i = 0; i < sizeof(Skorpion) / sizeof(Skorpion[0]); i++) {
		if (mesac_Rozdenia == "октября" && den_Rozdenia >= 24 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 8;
			goto fast;
		}
		else if (mesac_Rozdenia == "ноября" && den_Rozdenia >= 1 && den_Rozdenia <= 22) {
			mesac_Rozdenia_ = 8;
			goto fast;
		}
	}

	//СТРЕЛЕЦ
	for (int i = 0; i < sizeof(strelec) / sizeof(strelec[0]); i++) {
		if (mesac_Rozdenia == "ноября" && den_Rozdenia >= 23 && den_Rozdenia <= 30) {
			mesac_Rozdenia_ = 9;
			goto fast;
		}
		else if (mesac_Rozdenia == "декабря" && den_Rozdenia >= 1 && den_Rozdenia <= 22) {
			mesac_Rozdenia_ = 9;
			goto fast;
		}
	}

	//КОЗЕРОГ
	for (int i = 0; i < sizeof(Kozerog) / sizeof(Kozerog[0]); i++) {
		if (mesac_Rozdenia == "декабря" && den_Rozdenia >= 23 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 10;
			goto fast;
		}
		else if (mesac_Rozdenia == "января" && den_Rozdenia >= 1 && den_Rozdenia <= 20) {
			mesac_Rozdenia_ = 10;
			goto fast;
		}
	}

	//ВОДОЛЕЙ
	for (int i = 0; i < sizeof(Vodolei) / sizeof(Vodolei[0]); i++) {
		if (mesac_Rozdenia == "января" && den_Rozdenia >= 21 && den_Rozdenia <= 31) {
			mesac_Rozdenia_ = 11;
			goto fast;
		}
		else if (mesac_Rozdenia == "февраля" && den_Rozdenia >= 1 && den_Rozdenia <= 19) {
			mesac_Rozdenia_ = 11;
			goto fast;
		}
	}

	//РЫБЫ
	for (int i = 0; i < sizeof(Riba) / sizeof(Riba[0]); i++) {
		if (mesac_Rozdenia == "февраля" && den_Rozdenia >= 20 && den_Rozdenia <= 29) {
			mesac_Rozdenia_ = 12;
			goto fast;
		}
		else if (mesac_Rozdenia == "марта" && den_Rozdenia >= 1 && den_Rozdenia <= 20) {
			mesac_Rozdenia_ = 12;
			goto fast;
		}
	}

fast:

	//Кейсы
	switch (mesac_Rozdenia_)
	{
	case 1: // Кейс овна
		cout << "Ваш знак задиака - Овен!" << endl;
		cout << "Овны - представители огненной стихии." << endl;
		cout << "Овны очень яркие, творчисткие натуры, мужчины овны часто могут быть вспыльчивы, нетерпеливы и ревнивы." << endl;
		cout << "Овны женчины являются обладательницами нетепичной, запоминающейся внишности." << endl;
		cout << "Овны совместимы хорошо совмистимы со стрельцами, львами и раками." << endl;
		goto exit;
	case 2: // Кейс тельца
		cout << "Ваш знак задиака - Телец." << endl;
		cout << "Тельцы являются представитилями земной стрехии, по праву считаются одним из самых добрых знаков задивака." << endl;
		cout << "И мужчины - тельцы и женчины - тельцы обычно не имеют проблем с деньгами, у них можно брать взаймы." << endl;
		cout << "Тельцы хорошо совместимы с девами, козерогом и раками." << endl;
		goto exit;
	case 3: //Кейсы близнецов
		cout << "Ваш знак задиака - Близнецы" << endl;
		cout << "Близнецы являются представителями воздушной стихии, в основном близнецы - веселые, жизнерадостные, активные люди, обладающие красивой внешностью." << endl;
		cout << "Женщины раковые красотки, сердцеедки." << endl;
		cout << "Мужчины близнецы очень любят женское внимание." << endl;
		cout << "Близнецы хорошо совместимы со стрельцами, водолеями и весами." << endl;
		goto exit;
	case 4: //Кейс рака
		cout << "Ваш знак задиака - Рак." << endl;
		cout << "Раки представители водной стихии." << endl;
		cout << "Обладатели этого знака именно те люди которые всегда придут на помощь." << endl;
		cout << "Раки - одни из самых лучщих друзей." << endl;
		cout << "Мужчины раки имеют хорошее чувство юмора, девушки раки умеют стильно и со вкусом надеваться." << endl;
		cout << "Раки прекрасно совместимы с рыбами, скорпионами и овнами." << endl;
		goto exit;
	case 5: //Кейс льва
		cout << "Ваш знак задиака Лев." << endl;
		cout << "Львы представители огненной стихии." << endl;
		cout << "Львы часто полны творческих идей, женчины львы обычно гордые, знающие себе цену, сюбящие мужское внимание." << endl;
		cout << "Мужчины львы обычно очень спокойны и искренно умеющие любить свою пару." << endl;
		cout << "Львы хорошо совместимы со стрельцами, овнами и тельцами." << endl;
		goto exit;
	case 6: //Кейс девы
		cout << "Ваш знак задиака Дева." << endl;
		cout << "Девы представители земной стихии." << endl;
		cout << "Женчины девы очень чистоплотны, обычно в их доме царит порядок, мужчины девы обладают отличным чувством юмора." << endl;
		cout << "Обычно при деньгах" << endl;
		cout << "Девы хорошо совместимы с рыбами, тельцами и козерогами." << endl;
		goto exit;
	case 7: //Кейс весов
		cout << "Ваш знак задиака Весы." << endl;
		cout << "Весы представители воздушной стихии." << endl;
		cout << "Весы обычно творческие и спокойные люди." << endl;
		cout << "Мужчины весы дипломотичны, интелегентны, любят эстетику, Женчины весы очень грациозные, утонченные." << endl;
		cout << "Весы хорошо совместимы с водолеями и близнецами." << endl;
		goto exit;
	case 8: //Кейс Скорпионов
		cout << "Ваш знак задиака Скорпион." << endl;
		cout << "Скорпионы представители водной стихии." << endl;
		cout << "Скорпионы очень прямолинейны, целиустремленны и волевые люди." << endl;
		cout << "Один из самых сексуальных знаков задиака." << endl;
		cout << "В любовных отношениях раскрываются не сразу, но влюбляются сильно." << endl;
		cout << "Совместимы с раками, с рыбами." << endl;
		goto exit;
	case 9: //Кейс стрельца
		cout << "Ваш знак задиака Стрелец." << endl;
		cout << "Стрельцы представители огненной стихии." << endl;
		cout << "Стрельцы часто являются веселыми, жизнерадостными." << endl;
		cout << "Женчины Стрельцы не лишены внимания противоположного пола, мужчины стрельцы часто бывают легкомысленны." << endl;
		cout << "Стрельцы хорошо совместимы в близнецами, львами и ованми." << endl;
		goto exit;
	case 10: //Кейс козерога
		cout << "Ваш знак задиака Козерог." << endl;
		cout << "Козерог являются представителем земной стихии." << endl;
		cout << "Девушки Козероги часто обладают высоким уровнем интелектуальных способностей." << endl;
		cout << "Парни козероги часто упрямы, настойчивы, прямолинейны." << endl;
		cout << "Кохероги хорошо совместимы с Девами, Тельцами и львами" << endl;
		goto exit;
	case 11: //Кейс Водолея
		cout << "Ваш знак задиака Водолей" << endl;
		cout << "Водолей является представителем воздушной стихии." << endl;
		cout << "Девушки водолеи обладают незаурядной внешностью, красивыми глазами. Парни водолеи довольно тихие и очень умные люди." << endl;
		cout << "Водолей - один из самых загадочных знаков задиака." << endl;
		cout << "Водолей хорошо совместим с Близнецами и Весами." << endl;
		goto exit;
	case 12: //Кейс Рыбов
		cout << "Ваш знак задиака Рыбы." << endl;
		cout << "Рыбы относятся к водной стихии." << endl;
		cout << "Рыбы являются, пожалуй, самым чувственным знаком задиака, обладают высокой эмпатичностью, с легкостью <читают> эмации людей." << endl;
		cout << "Девушки - рыбы зачастую очень ранимы и очень милые." << endl;
		cout << "Парни - рыбы, часто очень привлекательны, и иногда загадочны." << endl;
		cout << "Рыбы хорошо совместимы со Скорпионами, Раками, Девами." << endl;
		goto exit;
	}
	exit:
	

	return 0;
}




