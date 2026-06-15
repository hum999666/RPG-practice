<<<<<<< HEAD
#pragma once
#include<iostream>
#include<string>

class Skill
{
private:
    std::string name;
    int damage;
    int mpCost;
public:
    Skill();
    Skill(const std::string& n, int d, int m);
    int use() const;
    void showinfo() const;

    std::string getName() const;
    int getDamage() const;
    int getMpCost() const;
   
    void setName(const std::string& n);
    void setDamage(int d);
    void setMpCost(int m);
};




=======
#pragma once
#include<iostream>
#include<string>

class Skill
{
private:
    std::string name;
    int damage;
    int mpCost;
public:
    Skill();
    Skill(const std::string& n, int d, int m);
    int use() const;
    void showinfo() const;

    std::string getName() const;
    int getDamage() const;
    int getMpCost() const;
   
    void setName(const std::string& n);
    void setDamage(int d);
    void setMpCost(int m);
};




>>>>>>> 2a02f3d3c8af848691b3de99613daa5d7e8ca20b
