#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  std::cout << "Argumentos passados: " << argc << std::endl;

  if (argc > 1) {
    std::string command = argv[1];
    std::cout << "O comando passado foi: " << command << std::endl;

    if (command == "add") {
      if (argc > 2) {
        std::string argument = argv[2];
        std::cout << "A tarefa passada foi: " << argument << std::endl;
      } else {
        std::cout
            << "Faltam argumento para o comando add, tente hello add <tarefa>"
            << std::endl;
      }
    }
  } else {
    std::cout << "Faltam argumentos tente <command> <args..>" << std::endl;
  }
  return 0;
}
