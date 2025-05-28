#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
class Team
{
private:
    char name[50];
    char city[50];
    int yearOfFoundation;

public:
    Team()
    {
        strcpy(this->name, "");
        this->yearOfFoundation = 1800;
        strcpy(this->city, "");
    }
    Team(const char *name, int yearOfFoundation,const char *city)
    {
        strcpy(this->name, name);
        this->yearOfFoundation = yearOfFoundation;
        strcpy(this->city, city);
    }
    Team(const Team &other)
    {
        strcpy(this->name, other.name);
        this->yearOfFoundation = other.yearOfFoundation;
        strcpy(this->city, other.city);
    }
    void print()
    {
        cout << "Team :" << name << " (" << yearOfFoundation << ") "
             << " City: " << city << endl;
    }
    const char *GetName() const
    {
        return name;
    }
    ~Team()
    {
    }
};
class Game
{
private:
    Team home;
    Team away;
    int goalshome;
    int goalsaway;

public:
    Game(Team &home, Team &away, int goalshome, int goalsaway)
    {
        this->home = home;
        this->away = away;
        this->goalshome = goalshome;
        this->goalsaway = goalsaway;
    }
    void print()
    {
        cout << "Team home :"<<endl;
        home.print();
        cout << "Team away :"<<endl;
        away.print();
        cout << "Goals home :" << goalshome <<endl;
        cout<< "Goals away :" << goalsaway << endl;
    }
    int GetGoalsaway() const
    {
        return goalsaway;
    }
    int GetGoalshome() const
    {
        return goalshome;
    }
    friend void rematch(Game &game1, Game &game2);
    ~Game()
    {
    }
};
void rematch(Game &game1, Game &game2)
{
   if (strcmp(game1.home.GetName(), game2.away.GetName()) == 0
        && strcmp(game1.away.GetName(), game2.home.GetName()) == 0)
    {
        int totalHome=game1.goalshome+game2.goalsaway;
        int totalAway=game2.goalsaway+game2.goalshome;
        if (totalHome>totalAway)
        {
            game1.home.print();
        }
        else if (totalHome<totalAway)
        {
            game2.home.print();
        }
    }
    else{
        cout<<"Equal both winers"<<endl;
    }
}

int main()
{
    Team team("Real Madrid", 1890, "Madrid");
    Team team2("Barca", 1899, "Barcelona");

    Game game(team, team2, 4, 2); //copy-constructor of class Team us called IMPLICITLY
    game.print();

    Game game2(team2, team, 2, 3);
    game.print();

     rematch(game, game2);
    return 0;
}
