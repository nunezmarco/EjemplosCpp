#include <iostream>

class Polinomio{
    private:
    int x;
    int a;
    int b;
    int c;
    
  friend void operator<<(std::ostream&,Polinomio);
  friend void operator>>(std::istream&,Polinomio&);
    
  public:
  Polinomio(int un=0,int dos=0, int tre=0);
  int operator()(int val);
    
    

};

Polinomio::Polinomio(int un, int dos, int tre){
    a=un;
    b=dos;
    c=tre;
    

}

int Polinomio::operator()(int val){
    int res=0;
    if(a!=0){
        res=(val*val)*a;
    }
    if(b!=0){
        res+=val*b;
    }
    if(c!=0){
        res+=c;
        
    }
    
    return res;
} 

void operator>>(std::istream& entrada, Polinomio& f){
   entrada>>f.a >>f.b>>f.c;
}
void operator<<(std::ostream& salida, Polinomio f){
  salida<<f.a<< "x^2 +" << f.b << "x +" <<f.c<< "\n";
}

int main(){
    
    Polinomio p{};
    std::cin>>p;
    std::cout<<"El polinomio " <<p;
    std::cout<<"Evaluado en 2 es "<< p(2);
    
}