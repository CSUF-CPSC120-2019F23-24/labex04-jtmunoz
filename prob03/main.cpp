// Sales prediction

#include <iostream>

int main()
{

  // constant total sales for last year
  const int LAST_YEARS_SALES = 2103419277; 

  // constant  PREDICTED_GROWTH %18 or  18 / 100;
  const unsigned int PREDICTED_GROWTH = (static_cast<long int>(LAST_YEARS_SALES) * 18) / 100;

  // print last years sales and predicted sales
  std::cout << "Last year's sales $ " << LAST_YEARS_SALES << std::endl;    
  std::cout << "This year's sales $ " << LAST_YEARS_SALES + PREDICTED_GROWTH << std::endl;

  return 0;
}