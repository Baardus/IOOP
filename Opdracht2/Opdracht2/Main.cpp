#include <iostream>
#include "Docent.h"
#include "Student.h"

int main() 
{
	Docent docent("Jan van Oudebeek", 45);
	docent.getLeeftijd();
	docent.getNaam();
	docent.naKijkWerk = "Wiskunde opdracht 2.";
	
	std::cout << "De naam van de docent is: " << docent.getNaam() << std::endl;
	std::cout << "De leeftijd van de docent is: " << docent.getLeeftijd() << std::endl;
	std::cout << "Het nakijkwerk van de docent is: " << docent.naKijkWerk << std::endl;

	system("pause");



	Student student("Kian Kreikamp", 21);
	student.getLeeftijd();
	student.getNaam();
	student.huiswerk = "Wiskunde opdracht 3.";

	std::cout << "De naam van de docent is: " << student.getNaam() << std::endl;
	std::cout << "De leeftijd van de student is: " << student.getLeeftijd() << std::endl;
	std::cout << "Het huiswerk van de student is: " << student.huiswerk << std::endl;

	system("pause");
}