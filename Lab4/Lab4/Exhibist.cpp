#include <iostream>
#include "Exhibist.h"
using namespace std;

museum::Exhibist::Exhibist(int _yearOfCreation, long double _price)
{
	this->_yearOfCreation = _yearOfCreation;
	this->_price = _price;
}

museum::Exhibist::Exhibist(int _yearOfCreation, long double _price, string _name) : Exhibist(_yearOfCreation, _price) { this->_name = _name; }

museum::Exhibist::Exhibist(int _yearOfCreation, long double _price, string _name, string _author) : Exhibist(_yearOfCreation, _price, _name) { this->_author = _author; }

museum::Exhibist::Exhibist(int _yearOfCreation, long double _price, string _name, string _author, string _countryOfOrigin) : Exhibist(_yearOfCreation, _price, _name, _author) { this->_countryOfOrigin = _countryOfOrigin; }

int museum::Exhibist::GetYearOfCreation() { return _yearOfCreation; }

void museum::Exhibist::SetYearOfCreation(int _yearOfCreation) { this->_yearOfCreation = _yearOfCreation; }

double museum::Exhibist::GetPrice() { return _price; }

void museum::Exhibist::SetPrice(double _price){ this->_price = _price; }

string museum::Exhibist::GetName() { return _name; }

void museum::Exhibist::SetName(string _name) { this->_name = _name; }

string museum::Exhibist::GetAuthor() { return _author; }

void museum::Exhibist::SetAuthor(string _author) { this->_author = _author; }

string museum::Exhibist::GetCountryOfOrigin() { return _countryOfOrigin; }

void museum::Exhibist::SetCountryOfOrigin(string _countryOfOrigin) { this->_countryOfOrigin = _countryOfOrigin; }

museum::Exhibist::TypeOfExhibist museum::Exhibist::GetWhatIsIt() { return WhatIsIt; }

void museum::Exhibist::WriteTheStory(string _storyOfExhibist) { this->_storyOfExhibist = _storyOfExhibist; }

void museum::Exhibist::Story()
{
	cout << "Історія експонату:\n" << endl;
	for (int i = 0; _storyOfExhibist[i] != '\0'; i++)
	{
		if (_storyOfExhibist[i] == '.')
		{
			cout << _storyOfExhibist[i];
			Sleep(700);
			continue;
		}
		cout << _storyOfExhibist[i];
		Sleep(30);
	}
	cout << endl;
}

string museum::Exhibist::EnumToString(Exhibist::TypeOfExhibist _typeOfExhibist)
{
	
	switch (_typeOfExhibist)
	{
	case PAINTING:
		return "Картина";
	case SCULPTURE:
		return "Скульптура";
	case VINTAGETOOLS:
		return "Старовинний інструмент";
	}
	return "Невизначенний";
}

void museum::Exhibist::ShowAllInfoInConcole()
{
	string _whatIsIt = EnumToString(WhatIsIt);

	cout << "Про експонат - \n" << endl;

	cout << "Тип мистецтва: " << _whatIsIt << endl;
	cout << "Назва експонату: " << _name << endl;
	cout << "Автор: " << _author << endl;
	cout << "Країна походження: " << _countryOfOrigin << endl;
	if(_yearOfCreation > 0)
		cout << "Рік, у якому створений експонат: " << _yearOfCreation << "н.е." << endl;
	else
		cout << "Рік, у якому створений експонат: " << -_yearOfCreation << " до н.е." << endl;;
	cout << "Ціна експонату: " << _price << "$" << endl;

	cout << endl;
}

museum::Painting::Painting(int _yearOfCreation, long double _price) : Exhibist(_yearOfCreation, _price) { WhatIsIt = PAINTING; }

museum::Painting::Painting(int _yearOfCreation, long double _price, string _name) : Exhibist(_yearOfCreation, _price, _name) { WhatIsIt = PAINTING; }

museum::Painting::Painting(int _yearOfCreation, long double _price, string _name, string _author) : Exhibist(_yearOfCreation, _price, _name, _author) { WhatIsIt = PAINTING; }

museum::Painting::Painting(int _yearOfCreation, long double _price, string _name, string _author, string _countryOfOrigin) : Exhibist(_yearOfCreation, _price, _name, _author, _countryOfOrigin) { WhatIsIt = PAINTING; }

museum::Sculpture::Sculpture(int _yearOfCreation, long double _price) : Exhibist(_yearOfCreation, _price) { WhatIsIt = SCULPTURE; }

museum::Sculpture::Sculpture(int _yearOfCreation, long double _price, string _name) : Exhibist(_yearOfCreation, _price, _name) { WhatIsIt = SCULPTURE; }

museum::Sculpture::Sculpture(int _yearOfCreation, long double _price, string _name, string _author) : Exhibist(_yearOfCreation, _price, _name, _author) { WhatIsIt = SCULPTURE; }

museum::Sculpture::Sculpture(int _yearOfCreation, long double _price, string _name, string _author, string _countryOfOrigin) : Exhibist(_yearOfCreation, _price, _name, _author, _countryOfOrigin) { WhatIsIt = SCULPTURE; }

museum::VintageTools::VintageTools(int _yearOfCreation, long double _price) : Exhibist(_yearOfCreation, _price) { WhatIsIt = VINTAGETOOLS; }

museum::VintageTools::VintageTools(int _yearOfCreation, long double _price, string _name) : Exhibist(_yearOfCreation, _price, _name) { WhatIsIt = VINTAGETOOLS; }

museum::VintageTools::VintageTools(int _yearOfCreation, long double _price, string _name, string _author) : Exhibist(_yearOfCreation, _price, _name, _author) { WhatIsIt = VINTAGETOOLS; }

museum::VintageTools::VintageTools(int _yearOfCreation, long double _price, string _name, string _author, string _countryOfOrigin) : Exhibist(_yearOfCreation, _price, _name, _author, _countryOfOrigin) { WhatIsIt = VINTAGETOOLS; }
