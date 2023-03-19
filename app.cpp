#include <iostream>
#include "profile.hpp"

int main() {

  Profile sam("Sella", 27, "Tamil Nadu", "India", "he/him");
  sam.add_hobby("listening to audiobooks and podcasts");
  std::cout << sam.view_profile();
  

}