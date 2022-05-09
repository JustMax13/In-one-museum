#pragma once

#include <iostream>
#include "windows.h"
using namespace std;


namespace museum
{
	class Exhibist
	{
		virtual void ExhibistThisIsAbstractClass() = 0;
	private:
		int _yearOfCreation;
		double _price;

		string _name = "Невідома назва"; // реализовать єто в конструкторе без параметров
		string _author = "Невідомий"; // реализовать єто в конструкторе без параметров
		string _countryOfOrigin = "Невідомa"; // реализовать єто в конструкторе без параметров
		string _storyOfExhibist = "Історії цього експонату немає. Ви можете її написати яерез метод WriteTheStory()."; // реализовать єто в конструкторе без параметров

	protected:
		enum TypeOfExhibist
		{
			NONE,
			PAINTING,
			SCULPTURE,
			VINTAGETOOLS
		};

		TypeOfExhibist WhatIsIt = NONE;
		string EnumToString(Exhibist::TypeOfExhibist _typeOfExhibist);

	public:
		Exhibist(int _yearOfCreation, long double _price);
		Exhibist(int _yearOfCreation, long double _price, string _name);
		Exhibist(int _yearOfCreation, long double _price, string _name, string _author);
		Exhibist(int _yearOfCreation, long double _price, string _name, string _author, string _countryOfOrigin);

		void ShowAllInfoInConcole();

		int GetYearOfCreation();
		void SetYearOfCreation(int _yearOfCreation);
		double GetPrice();
		void SetPrice(double _price);

		string GetName();
		void SetName(string _name);
		string GetAuthor();
		void SetAuthor(string _author);
		string GetCountryOfOrigin();
		void SetCountryOfOrigin(string _countryOfOrigin);

		TypeOfExhibist GetWhatIsIt();

		void WriteTheStory(string _storyOfExhibist);
		void Story();

	};
	class Painting : public Exhibist
	{
		void ExhibistThisIsAbstractClass() override {}

	public:
		Painting(int _yearOfCreation, long double _price);
		Painting(int _yearOfCreation, long double _price, string _name);
		Painting(int _yearOfCreation, long double _price, string _name, string _author);
		Painting(int _yearOfCreation, long double _price, string _name, string _author, string _countryOfOrigin);
	};
	class Sculpture : public Exhibist
	{
		void ExhibistThisIsAbstractClass() override {}
	public:
		Sculpture(int _yearOfCreation, long double _price);
		Sculpture(int _yearOfCreation, long double _price, string _name);
		Sculpture(int _yearOfCreation, long double _price, string _name, string _author);
		Sculpture(int _yearOfCreation, long double _price, string _name, string _author, string _countryOfOrigin);
	};
	class VintageTools : public Exhibist
	{
		void ExhibistThisIsAbstractClass() override {}
	public:
		VintageTools(int _yearOfCreation, long double _price);
		VintageTools(int _yearOfCreation, long double _price, string _name);
		VintageTools(int _yearOfCreation, long double _price, string _name, string _author);
		VintageTools(int _yearOfCreation, long double _price, string _name, string _author, string _countryOfOrigin);
	};
}