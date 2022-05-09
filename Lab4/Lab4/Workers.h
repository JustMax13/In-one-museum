#pragma once

#include <iostream>
using namespace std;

namespace museum
{
	
	class Workers
	{
	private:
		string _whoIsIt;
		string _name;
		string _secondName;
		int _salary = 0;

	protected:
		void SetWhoIsIt(string _whoIsIt);

	public:
		Workers(string _name, string _secondName, int _salary);
		~Workers();

		void ShowAllInfoAboutWorkers();
		virtual void TheRoleOfTheWorker() = 0;
		
		string GetWhoIsIt();
		void SetName(string _name);
		string GetName();
		void SetSecondName(string _secondName);
		string GetSecondName();
		void SetSalary(int _salary);
		int GetSalary();
		
	};
		
	class Guardian : public Workers
	{
	public:
		Guardian(string _name, string _secondName, int _salary);
		void TheRoleOfTheWorker() override;
	};

	class UnprotectedPersonnel
	{
		virtual void UnprotectedPersonnelIsAbstractClass() = 0;
	public:
		void Help(Guardian &_guardian);
	};

	class TourGuide : public Workers, public UnprotectedPersonnel
	{
	private:
		void UnprotectedPersonnelIsAbstractClass() override{}
	public:
		TourGuide(string _name, string _secondName, int _salary);
		void TheRoleOfTheWorker() override;
	};

	class Cashier : public Workers, public UnprotectedPersonnel
	{
	private:
		void UnprotectedPersonnelIsAbstractClass() override {}
	public:
		Cashier(string _name, string _secondName, int _salary);
		void TheRoleOfTheWorker() override;
	};


}

