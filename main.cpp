#include <iostream>

int main() {
  
  double dog_age = 0.5; //My dogs age is 5 months
  double human_years;
  
  if (dog_age < 2) {
    human_years = dog_age * 10.5;
  } else {
    double early_years = 21; //first two years
    double later_years = (dog_age - 2) * 4; //each year after 2 counts as 4 human years
  
    human_years = early_years + later_years;
    }
  std::cout << "My name is Arraz! Ruff ruff, I am >> " << human_years << "years old in human years.\n";

  return 0;
}