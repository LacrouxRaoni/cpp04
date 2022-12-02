#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
	Animal* animal1 = new Dog;
	Animal* animal2 = new Cat;

	Animal* animals[2] = {animal1, animal2 };
	animals[0]->makeSound();
	animals[1]->makeSound();
}