#ifndef COMBATANT_H
#define COMBATANT_H
#include <string>
#include <vector>

enum damageType
{
    slashing,
    piercing,
    bludgeoning,
    cold,
    fire,
    lightning,
    thunder,
    necrotic,
    force,
    poison,
    psychic,
    acid,
    radiant
};

struct damage
{
private:
    int damageAmount;
    damageType type;
public:
    damage();
    damage(int d, damageType t);
    int getdamageAmount();
    damageType getdamageType();
};

struct damageDie
{
private:
    int die;
    damageType type;
public:
    damageDie();
    damageDie(int d, damageType type);
    int getDie();
    damageType getType();
    damage rollDamage();
};

struct attack
{
private:
    std::vector<damageDie> dice;
    damage damageBonus;
    int hitBonus;
public:
    attack();
    attack(std::vector<damageDie> d, int hitbonus);
    std::vector<int> getDice();
    int getdamageBonus();
    void setDice(std::vector<int> d);
    void setflatBonus(int b);
    int rollToHit();
    int rollDamage();
};

class combatant
{
private:
    int HP;
    int tempHP;
    std::string name;

    //stats
    int stg;
    int dex;
    int con;
    int wis;
    int intel;
    int cha;

    //armor class
    int ac;


    std::vector<attack> attacks;
    std::vector<damageType> resistances;
public:
    combatant(int hp, int STG, int DEX, int CON, 
    int WIS, int INTEL, int CHA, int AC,
     std::vector<attack> ATTACK, std::vector<damageType> RES, std::string NAME);
    combatant();
    void takeDamage(int damage);
    void heal(int healing);
    int getHP();
    int gettempHP();
    std::string getName();
    int getDex();
    int getCOn();
    int getWis();
    int getIntel();
    int getCha();
    int getAC();
    std::vector<attack> getAttacks();
    std::vector<damageType> getResistances();


};
#endif