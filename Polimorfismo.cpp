// Polimorfismo significa "Muchas Cosas" esta relacionado con las clases y la herencia que se relaciona con otras clases

// CLase Padre

class Animal {
  public:
  void animalSound() {
    cout << "EL animal hace un ruido \n";
  }
};

// CLase derivada de la clase padre

class Cat: public Animal {
  public:
  void animalSound() {
    cout << " El gato hace miau \n";
  }
};

class Dog: public Animal {
  public:
  void animalSound() {
    cout <<"El perro hace wow \n";
  }
};

int main() {
  Animal myanimal;
  Cat mycat;
  Dog mydog;
  
  myanimal.animalSound();
  mycat.animalSound();
  mydog.animalSound();
  
  return 0;
}


  
