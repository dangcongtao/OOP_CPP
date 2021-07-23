#include<iostream>

class Fraction
{
private:
    /* data */
    int numerator = 0;
    int denominator = 1;
public:

    // Constructor.
    Fraction();
    Fraction(/* args */ int a, int b);
    ~Fraction();

    // Supported function
    int UCLN(int a, int b){
        while (a != b){
            if ( a>b){
                a = a-b;
            }
            if (a< b) {
                b = b-a;
            }
        }
        return a;
    }

    void rutGon () {
        if ( numerator == denominator){
            this->numerator =1;
            this->denominator = 1;
        }
        int temp = UCLN(this->denominator, this->numerator);
        this->denominator = denominator/temp;
        this->numerator = numerator/temp;
    }
    
    int getNumerator () { return this->numerator;}
    int getDenominator () {return this->denominator;}
    void changeNumerator (int _numerator) { this->numerator = _numerator;}
    void changeDenominator (int _denominator) { this->denominator = _denominator;}

    void Print(){
        if ( denominator != 1) printf("%d/%d", this->numerator, this->denominator);
        else printf("%d", numerator);

    }

    Fraction operator + (Fraction b) {

        Fraction result;    
        int _numerator = (this->numerator* b.getDenominator()) + (b.getNumerator() * this->denominator);
        int _denominator = this->denominator * b.getNumerator();
        result.changeDenominator(_denominator);
        result.changeNumerator(_numerator);

        result.rutGon();
        return result;
    }

    Fraction operator * (Fraction b) {
        Fraction result;

        result.changeNumerator(this->numerator* b.getNumerator());
        result.changeDenominator(this->denominator*b.getDenominator());

        result.rutGon();
        return result;
    }
};
Fraction::Fraction(){};

Fraction::Fraction(/* args */int _numerator, int _denominator)
{
    this->denominator = _denominator;
    this->numerator = _numerator;
}

Fraction::~Fraction()
{
}



int main () {

    Fraction a = Fraction(2,5);
    Fraction b = Fraction(3,2);

    (a+b).Print();
    printf("\n");
    (a*b).Print();

    return 0;
}