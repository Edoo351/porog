
class Hero {
protected:
char name[41];
double attackDamage;
double attackSpeed;
double abilityPower;

public:
Hero(const char* name, double attackDamage, double attackSpeed, double abilityPower) {
strncpy(this->name, name, 40);
this->name[40] = '\0'; // Ensure null-terminated string
this->attackDamage = attackDamage;
this->attackSpeed = attackSpeed;
this->abilityPower = abilityPower;
}

virtual void displayInfo() = 0;
virtual float power() = 0;
};

class LegendaryHero : virtual public Hero {
protected:
int hiddenPowers;

public:
LegendaryHero(const char* name, double attackDamage, double attackSpeed, double abilityPower, int hiddenPowers)
: Hero(name, attackDamage, attackSpeed, abilityPower), hiddenPowers(hiddenPowers) {}

float power() override {
return (0.4 * attackDamage * hiddenPowers) + (0.25 * attackSpeed * hiddenPowers) + (0.35 * abilityPower * hiddenPowers);
}

void displayInfo() override {
cout << "LegendaryHero: " << name << endl;
cout << "Number of hidden powers: " << hiddenPowers << endl;
cout << "Attack damage: " << attackDamage << endl;
cout << "Attack speed: " << attackSpeed << endl;
cout << "Ability power: " << abilityPower << endl;
cout << "Power: " << power() << endl;
}
};

class SuperHero : virtual public Hero {
protected:
bool isShapeshifter;

public:
SuperHero(const char* name, double attackDamage, double attackSpeed, double abilityPower, bool isShapeshifter)
: Hero(name, attackDamage, attackSpeed, abilityPower), isShapeshifter(isShapeshifter) {}

float power() override {
float basePower = attackDamage + attackSpeed + abilityPower;
return isShapeshifter ? 2 * basePower : basePower;
}

void displayInfo() override {
cout << "SuperHero: " << name << endl;
cout << "Shapeshifter: " << (isShapeshifter ? "Yes" : "No") << endl;
cout << "Attack damage: " << attackDamage << endl;
cout << "Attack speed: " << attackSpeed << endl;
cout << "Ability power: " << abilityPower << endl;
cout << "Power: " << power() << endl;
}
};

class LegendarySuperHero : public LegendaryHero, public SuperHero {
public:
LegendarySuperHero(const char* name, double attackDamage, double attackSpeed, double abilityPower, int hiddenPowers, bool isShapeshifter)
: Hero(name, attackDamage, attackSpeed, abilityPower),
LegendaryHero(name, attackDamage, attackSpeed, abilityPower, hiddenPowers),
SuperHero(name, attackDamage, attackSpeed, abilityPower, isShapeshifter) {}

float power() override {
return (LegendaryHero::power() + SuperHero::power()) / 2;
}

void displayInfo() override {
cout << "LegendarySuperHero: " << name << endl;
cout << "Attack damage: " << attackDamage << endl;
cout << "Attack speed: " << attackSpeed << endl;
cout << "Ability power: " << abilityPower << endl;
cout << "Power: " << power() << endl;
}
};

Hero* mostPowerfulLegendaryHero(Hero** heroes, int n) {
Hero* mostPowerful = nullptr;
float maxPower = -1;

for (int i = 0; i < n; ++i) {
LegendaryHero* lh = dynamic_cast<LegendaryHero *>(heroes[i]);
if (lh && lh->power() > maxPower) {
mostPowerful = lh;
maxPower = lh->power();
}
}
return mostPowerful;
}
int main() {
char name[50];
double attackDamage;
double attackSpeed;
double abilityPower;
int hiddenPowers;
bool isShapeshifter;
int n;
int choice;

cin>>choice;
if(choice==1)
{
cin>>name;
LegendarySuperHero legendarySuperHero(name, 55, 43, 70, 2, true);
legendarySuperHero.displayInfo();
}
else {

cin >> n;

Hero **h = new Hero *[n];
for (int i = 0; i < n; i++) {
cin >> choice;
if (choice == 1) {
c
