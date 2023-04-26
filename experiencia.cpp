#include <iostream>
#include <string>

using namespace std;

class Rectangulo{
    private:
        // Declaracion atributos
        float lado1;
        float lado2;
        float p;
        float a;

    public:

        Rectangulo()    //Constructor
        {lado1 = 0; lado2 = 0;}

        ~Rectangulo(){  //Destructor
            cout<<"Ejecutando destructor..."<<endl;
        }

        //Setters y getters
        float getLado1()
        {return this-> lado1;}

        float getLado2()
        {return this -> lado2;}

        void setLado1(float _lado1)
        {this -> lado1 = _lado1;}

        void setLado2(float _lado2)
        {this -> lado2 = _lado2;}

        float getPerimetro()
        {return this -> p;}

        float getArea()
        {return this -> a;}

        //Creaciones de autoreferencias con calculo del perimetro y areas

        Rectangulo& perimetro(){
            p = (lado1 * 2) + (lado2 * 2) ;
            return *this;
        }

        Rectangulo& area(){
            a = lado1 * lado2;
            return *this;
        }
};

int main(){
    Rectangulo *r1 = new Rectangulo;    //Creacion de nuevo objeto tipo puntero

    r1->setLado1(5);
    r1->setLado2(3);

    cout<<"Lado #1: "<<r1->getLado1()<<endl;
    cout<<"Lado #2: "<<r1->getLado2()<<endl;
    //Impresion por encadenacion
    cout<<"Perimetro: "<<r1->perimetro().getPerimetro()<<endl;  
    cout<<"Area: "<<r1->area().getArea()<<endl;

    return 0;
}
