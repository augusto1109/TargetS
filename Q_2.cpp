#include <iostream>
#include <string>
using namespace std;

int main() {
  string entrada;
  int contador = 0;

  cout << "Digite uma string: ";
  getline(cin, entrada);

  for (char c : entrada) {

    if (c == 'a' || c == 'A') {
      contador++;
    }
  }

  if (contador > 0) {
    cout << "\nA letra 'a' (maiúscula ou minúscula) aparece " << contador
         << " vez(es) na string." << endl;
  } else {
    cout << "\nA letra 'a' (maiúscula ou minúscula) não aparece na string."
         << endl;
  }

  return 0;
}
