// Son metodos especiales que se llaman automaticamente cuando se crea un objeto 

class car {
  public:
  
  string brand;
  string model;
  int year;
  
  car(string x, string y, int z);
};

car:: car(string x, string y, int z){
  
  brand = x;
  model = y;
  year = z;
}

int main() {
  
  car carObj1("Ferrari","x5", 1990);
  car carObj2("BMW", "RX", 1985);
  
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  
  return 0;
  
}


