// Clase padre 

class Vehiculo {
  public:
  string Brand= "Ferrari";
  void honk(){
    cout<< "Tuu, tuu \n";
  }
};

// Clase hijo 

class Car: public Vehiculo {
  public:
  
  string Model = "RX7";
};

int main() {
  Car mycar;
  mycar.honk();
  cout<< mycar.Brand + " " + mycar.Model;
  
  return 0;
}


  


  
  
