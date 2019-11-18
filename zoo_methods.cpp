#include <iostream>
#include "Zoo.h"
using namespace std;

void Zoo::setVisit_in_Year(int visit_in_year1)
{
	visit_in_year = visit_in_year1;
}

void Zoo::getVisit_in_Year()
{
    cout<<"Visit_in_Year: "<< visit_in_year << endl;
}

void Zoo::setZoo_Name(string zoo_name1)
{
	zoo_name = zoo_name1;
}

void Zoo::getZoo_Name()
{
    cout<<"zoo_name: "<< zoo_name << endl;
}

void Zoo::setHow_Many_Animal(int how_many_animal1)
{
	how_many_animal = how_many_animal1;
}

void Zoo::getHow_Many_Animal()
{
    cout<<"how_many_animal: "<< how_many_animal << endl;
}

void Zoo::setYear_of_foundatoin(int year_of_foundatoin1)
{
    year_of_foundatoin = year_of_foundatoin1;
}


void Zoo::getYear_of_foundatoin()
{
    cout<<"year_of_foundatoin: "<<year_of_foundatoin<< endl;
}

void Zoo::setVisit_in_Day(int visit_in_day1)
{
	visit_in_day = visit_in_day1;
}

void Zoo::getVisit_in_Day()
{
    cout<<"visit_in_day: "<< visit_in_day << endl;
}

void Zoo::setArea_of_Fields(int area_of_fields1)
{
	area_of_fields = area_of_fields1;
}

void Zoo::getArea_of_Fields()
{
	cout << "area_of_fields: " << area_of_fields << endl;
}

void Zoo::setExclusive_Animal(string exclusive_animal1)
{
	exclusive_animal = exclusive_animal1;
}

void Zoo::getExclusive_Animal()
{
	cout << "exclusive_animal: " << exclusive_animal << endl;
}


void Zoo::getInfo(Zoo obj)
{
    obj.getVisit_in_Year();
    obj.getZoo_Name();
    obj.getHow_Many_Animal();
    obj.getYear_of_foundatoin();
    obj.getVisit_in_Day();
	obj.getArea_of_Fields();
	obj.getExclusive_Animal();
}



Zoo::Zoo(int visit_in_year, string zoo_name, int how_many_animal, int year_of_foundatoin, int visit_in_day, int area_of_fields, string exclusive_animal)
{
    setVisit_in_Year(visit_in_year);
    setZoo_Name(zoo_name);
    setHow_Many_Animal(how_many_animal);
    setYear_of_foundatoin(year_of_foundatoin);
    setVisit_in_Day(visit_in_day);
	setArea_of_Fields(area_of_fields);
	setExclusive_Animal(exclusive_animal);
	
}

Zoo::~Zoo()
{
    cout<< "Closing zoo..."<< endl;
}