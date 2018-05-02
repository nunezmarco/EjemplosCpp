#include <iostream>
class Calentador{
 private:
 int temperatura;
 int incremento; 
 int min;
 int max;

public:
Calentador(int min, int max, int temperatura=0); //el 0 hace que si no pongo ningun valor, entonces lo toma como 0
void operator++();
void enfriar();
void imprimeTemperatura() const;
void imprimeFarenheit() const;
int accedeTemperatura() const;
bool operator==(Calentador a);
};  //punto y come obligatorio papá

Calentador::Calentador(int min, int max,int temperatura){
    if(max<min){
       std::cout << "Error en el rango min-max" << std::endl;
        std::exit(EXIT_FAILURE);
        
    }
    if(temperatura<=max&&temperatura>=min){
    this->temperatura=temperatura;
    }
    else{
        this->temperatura=min;
    }
    incremento=3;
    
    this->min=min;
    this->max=max;
    
    
}

void Calentador::operator++(){
    if(temperatura+incremento<=this->max){
        temperatura+=incremento;  
    }
}

bool Calentador:: operator==(Calentador otro){
if(this->temperatura==otro.temperatura){
    return true;
}    else {
return false;
}
}

void Calentador::imprimeFarenheit() const{
    float farenheit = temperatura*1.8+32;
    std::cout <<"La temperatura es: " << farenheit
    << "F " << std::endl;
    
    
}
void Calentador::enfriar(){
    if(temperatura-incremento>=this->min){
    temperatura-=incremento;
    }
    
}
int Calentador::accedeTemperatura() const{
    
    return temperatura;
}
int main(){
   
    Calentador cl{0,30,10};
    Calentador c2{0,30,10};
    
        ++cl;
        //c2.enfriar();
        cl.imprimeTemperatura();
        cl.imprimeFarenheit();
        c2.imprimeTemperatura();
        c2.imprimeFarenheit();
        if(cl==c2){
        std::cout << "Iguales";    
        
        }
        else{
            std::cout << "Diferentes";
        }
    
    
   
    
}

void Calentador::imprimeTemperatura() const{
    
    std::cout << "La temperatura es " << temperatura << "C" << std::endl;
}