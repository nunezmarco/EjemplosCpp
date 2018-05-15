#include <iostream>
template<typename Tipo>
class Pila{
    private:
    int tope;
    Tipo *arreglo;
    int max;
    
    public:
    Pila(int tam); //Constructor
    ~Pila();       //Destructor
    void Push(Tipo dato);
    Tipo Pop();
};

template<typename Tipo>
Pila<Tipo>::Pila(int tam){
    max=tam;
    tope=0;
    arreglo=new Tipo[max];
}

template<typename Tipo>
void Pila<Tipo>::Push(Tipo dato){
    tope++;
    arreglo[tope]=dato;
}

template<typename Tipo>
Tipo Pila<Tipo>::Pop(){
    Tipo aux;
    aux=arreglo[tope];
    tope--;
    return aux;
}

template<typename Tipo>
Pila<Tipo>::~Pila(){
    delete []arreglo;
}

int main(){
    Pila<int>miPila(5);
    miPila.Push(3);
    miPila.Push(7);
    int x=miPila.Pop();
    std::cout<< x << "\n";
    x=miPila.Pop();
    std::cout<< x << "\n";
    x=miPila.Pop();
    std::cout<< x << "\n";
}