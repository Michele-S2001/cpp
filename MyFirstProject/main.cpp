#include <iostream>

int main()
{
  double num_1;
  double num_2;
  int operations[3] = {1, 2, 3};
  int selected_operation_code = 0;

  std::cout << "Inserisci il primo numero: ";
  std::cin >> num_1;

  std::cout << "Inserisci il secondo numero: ";
  std::cin >> num_2;

  std::cout << "Scegli tra le opzioni disponibili" << "\n";
  std::cout << "1. sottrazione 2. addizione 3. divisione: ";
  
  while (selected_operation_code == 0)
  {
    std::cin >> selected_operation_code;
    switch (selected_operation_code)
    {
      case 1:
        std::cout << "Hai scelto sottrazione" << "\n";
        break;

      case 2:
        std::cout << "Hai scelto addizione" << "\n";
        break;

      case 3:
        std::cout << "Hai scelto divisione" << "\n";
        break;
      
      default:
        selected_operation_code = 0;
        std::cout << "Numero operazione non valido" << "\n";
        std::cout << "Prova di nuovo: ";
    }
  }

  std::cout << "Uscito dal ciclooo" << "\n";

  return 0;
}