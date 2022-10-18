// Clase base o padre

class MyClass {
  public:
  void MyFunction() {
    cout << " ALgo de contenido en esta clase\n";
  }
};

// CLase Hijo

class MyChild: public MyClass {
};

// Clase derivada de la clase hijo

class MyGrandChild: public MyChild {
};


int main() {
  MyGrandChild myOBj;
  
  myOBj.MyFunction();
  
  return 0;
}


