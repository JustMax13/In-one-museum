#include "Workers.h"

string museum::Workers::GetWhoIsIt() { return _whoIsIt; }

void museum::Workers::SetName(string _name) { this->_name = _name; }

string museum::Workers::GetName() { return _name; }

void museum::Workers::SetSecondName(string _secondName) { this->_secondName = _secondName; }

string museum::Workers::GetSecondName() { return _secondName; }

void museum::Workers::SetSalary(int _salary) { this->_salary = _salary; }

int museum::Workers::GetSalary() { return _salary; }

void museum::Workers::SetWhoIsIt(string _whoIsIt){ this->_whoIsIt = _whoIsIt; }

museum::Workers::Workers(string _name, string _secondName, int _salary)
{
	this->_name = _name;
	this->_secondName = _secondName;
	this->_salary = _salary;
}

museum::Workers::~Workers()
{
	cout << "\nБув звільнений " + GetWhoIsIt() + " на ім'я " + GetName() << endl;
}

void museum::Workers::ShowAllInfoAboutWorkers()
{
	cout << "\nІнформація про працівника\n" << endl;
	cout << "Ім'я робітника: " << GetName() << endl;
	cout << "Прізвище: " << GetSecondName() << endl;
	cout << "Посада: " << GetWhoIsIt() << endl;
	cout << "Заробітна плата: " << GetSalary() << endl;
	
	cout << endl;
}

museum::Guardian::Guardian(string _name, string _secondName, int _salary) : Workers(_name, _secondName, _salary)
{
	SetWhoIsIt("охоронець");
}

void museum::Guardian::TheRoleOfTheWorker()
{
	cout << "\nЯ охоронець цього прекрасного музею. " <<
		"Моя задача забезпечувати безпеку у музеї та при необгідності допомагати. "<<
		"Також за час роботи, просто краэм вуха чувши екскурсоводів, я вже сам можу стати екскурсоводом ;)\n" << endl;
}

museum::TourGuide::TourGuide(string _name, string _secondName, int _salary) : Workers(_name, _secondName, _salary)
{
	SetWhoIsIt("екскурсовод");
}

void museum::TourGuide::TheRoleOfTheWorker()
{
	cout << "\nЯ екскурсовод, та маю розповідати нашим гостям про різноманітні знахідки, картини та статуї нашого музею. " <<
		"Я намагаюся розповідати матеріал якнацікавішимb способами.\n" << endl;
}

museum::Cashier::Cashier(string _name, string _secondName, int _salary) : Workers(_name, _secondName, _salary)
{
	SetWhoIsIt("касир");
}

void museum::Cashier::TheRoleOfTheWorker()
{
	cout << "\nЯ касир і моя задача продавати білети до нашого музею." <<
		"Оскільки більшість часу роблю монотону роботу, доводиться якось розважатися, щоб зовсім не знудьгувати :)\n"<< endl;
}

void museum::UnprotectedPersonnel::Help(Guardian &_guardian)
{
	cout << "Охоронець " << _guardian.GetName() << " вже йде на допомогу!" << endl;
}
