/*Authors:Matthew scheer
Mad libs game
2/1/2018
*/
#include <iostream>
#include <string>



int main()
{
std::string name1;
int number;
std::string animal;
std::string adj;
char letter;
int number2;

std::cout << "please give a name" << std::endl; 
std::cin >> name1;
std::cout << "please type in a number" << std::endl;
std::cin >> number;
std::cout << "please give an animal" << std::endl;
std::cin >> animal;
std::cout << "please give an adjective" << std::endl;
std::cin >> adj;
std::cout << "please type in a letter" << std::endl;
std::cin >> letter;
std::cout << "please type in another number" << std::endl;
std::cin >> number2;
std::cout <<"while walking down 1st ave " <<  name1 << " attempted to cross the street. unfortunately there was " << number << " of " << animal << " blocking the road " << adj << " with the situation, yells, ' " << letter << "!' and startled all the " << animal << " and caused them to run away" << " satisfied " << name1 << " crosses the street to finish the remaining " << number2 << " miles in their walk." << std::endl;

  return 0;
}
