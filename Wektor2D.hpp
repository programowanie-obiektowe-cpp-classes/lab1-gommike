class Wektor2D
{
private:
    double x;
    double y;

public:
    // konstruktor
    Wektor2D(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    Wektor2D() {}

    void setX(double x_set) { this->x = x_set; }

    void setY(double y_set) { this->y = y_set; }

    double getX() { return x; }

    double getY() { return y; }

    Wektor2D operator+(Wektor2D const& obj)
    {
        Wektor2D res(this->x + obj.x, this->y + obj.y);
        return res;
    }

    double operator*(Wektor2D const& obj)
    {
        double wynik;
        wynik = (this->x * obj.x) + (this->y * obj.y);
    }
};
