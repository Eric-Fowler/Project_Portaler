

class Base_Player
{
private:
    double m;
    double posX;
    double posY;
    double momX;
    double momY;
    double Vx;
    double Vy;

public:
    Base_Player(double a = 0.0, double b = 0.0, double c = 0.0, double d = 0.0, double e = 0.0)
    {
        m = a;
        posX = b;
        posY = c;
        Vx = d;
        Vy = e;
        momX = m * Vx;
        momY = m * Vy;
    };
};