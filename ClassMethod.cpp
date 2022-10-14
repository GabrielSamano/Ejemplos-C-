// Metodos de la clase : son funciones que pertenecen a la clase

class car {
  public:
  
  int speed (int masSpeed);
};

int car :: speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  
  car Myobj;
  
  cout << "La velocidad maxima es: " << Myobj.speed(180);
  
  return 0;
}





  
