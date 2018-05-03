#include <iostream>
class Fraccion{
    private:
    int numerador;
    int denominador;
    
    public:
    Fraccion(int num=0, int den=0);
    Fraccion operator+(Fraccion a);
    Fraccion operator-(Fraccion a);
    Fraccion operator/(Fraccion a);
    Fraccion operator*(Fraccion a);
    int dimeNumerador();
    int dimeDen();
    void imprime();
};

Fraccion::Fraccion(int a, int b){
    numerador=a;
    denominador=b;
}

Fraccion  Fraccion::operator+(Fraccion a){
    Fraccion f3{0,0};
    f3.denominador=this->denominador*a.denominador;
    f3.numerador=(this->numerador*a.denominador)+(this->denominador*a.numerador);
    return f3;
}

Fraccion  Fraccion::operator-(Fraccion a){
    Fraccion f3{0,0};
    f3.denominador=this->denominador*a.denominador;
    f3.numerador=(this->numerador*a.denominador)-(this->denominador*a.numerador);
    return f3;
}

Fraccion  Fraccion::operator/(Fraccion a){
    Fraccion f3{0,0};
    f3.denominador=this->numerador*a.denominador;
    f3.numerador=this->denominador*a.numerador;
    return f3;
}

Fraccion  Fraccion::operator*(Fraccion a){
    Fraccion f3{0,0};
    f3.denominador=this->denominador*a.denominador;
    f3.numerador=this->numerador*a.numerador;
    return f3;
}

int Fraccion::dimeNumerador(){
    
    return numerador;
}

int Fraccion::dimeDen(){
    
    return denominador;
}

void Fraccion::imprime(){
    std:: cout << numerador << " / " << denominador << std::endl; 
    
}



int main(){
  Fraccion f1{3,8};
  Fraccion f2{4,5};
  Fraccion f3=f1+(f2);
  std::cout << "El resultado de la suma es: " << f3.dimeNumerador() << " / " << f3.dimeDen() << std::endl;
   f3=f1-(f2);
  std::cout << "El resultado de la resta es: " << f3.dimeNumerador() << " / " << f3.dimeDen() << std::endl;
   f3=f1/(f2);
  std::cout << "El resultado de la division es: " << f3.dimeNumerador() << " / " << f3.dimeDen() << std::endl;
   f3=f1*(f2);
   std::cout << "El resultado de la multiplicacion  es: " << f3.dimeNumerador() << " / " << f3.dimeDen() << std::endl;
}