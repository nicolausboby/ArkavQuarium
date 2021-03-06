#include "../Coin/Coin.hpp"
#include "../../main/oop.hpp"

#include <string>

#ifndef FISH_HPP
#define FISH_HPP

#define INTERVAL_TO_DIE 8000 //8000 ms
#define INTERVAL_FULL 10000 //10000 ms

using namespace std;

class Fish{
    private:
        double timeDirection;
        int ID;
        int stateGambar;
        double directionTo;     // Lagi ngadep kemana
        Location location;
        bool isFull;            // Lagi kenyang(?)
        double hungerTime;
        const int intervalToDie;      // Batas waktu dia harus nyari makan
        const int intervalFull;       // Batas waktu dia kenyang berapa lama
    public:
        Fish();
        double getTimeDirection();
        void setTimeDirection(double);
        int getStateGambar();
        void setStateGambar(int);
        virtual Coin* generateCoin() = 0; //Method Override, didefinisikan di class turunannya
        void Eat();             // Method Overloading, dia makannya makan apa(?) definisiin saat di class turunannya
        void Move(double,double);         // MARK perubahan tipe parameter

        /*Get & Set Location*/
        int getX()const;
        int getY()const;
        void setX(int);
        void setY(int);

        /*Get & Set isFull*/
        void setIsFull(bool);
        bool getIsFull() const;

        /*Get & Set LifeTime*/
        void setHungerTime(long);
        double getHungerTime();

        /*Get & set */
        void setID(int);
        int getID();

        /*get and set*/
        void setDirectionTo(double);
        double getDirectionTo();

        virtual void printFish(string[]) = 0; //Print si ikan, ngadepnya ngikutin variable string directionTo
        void findNearestFoodOrFish(); //(MARK) Buat nyari makan, overloading
};

#endif
