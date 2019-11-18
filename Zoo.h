#include <iostream>
using namespace std;

class Zoo
{
    private:
    string zoo_name;
    int visit_in_year;
    int how_many_animal;
    
    public:
    string exclusive_animal;
    int area_of_fields;     //in square meters
    
    Zoo(int visit_in_year, string zoo_name,int how_many_animal, int year_of_foundatoin, int visit_in_day, int area_of_fields, string exclusive_animal);
   // Zoo();
    ~Zoo();

    void setVisit_in_Year(int visit_in_year);
    void getVisit_in_Year();
    void setZoo_Name(string zoo_name);
    void getZoo_Name();
    void setHow_Many_Animal(int how_many_animal);
    void getHow_Many_Animal();
    void setYear_of_foundatoin(int year_of_foundatoin);
    void getYear_of_foundatoin();
    void setVisit_in_Day(int visit_in_day);
    void getVisit_in_Day();

	void setArea_of_Fields(int area_of_fields);
	void getArea_of_Fields();
	void setExclusive_Animal(string exclusive_animal);
	void getExclusive_Animal();

    void getInfo(Zoo obj);
    
    protected:
    int year_of_foundatoin;
    int visit_in_day;
};