#include <iostream>
#include <string>
using namespace std;

class Config
{
private:
    string language;

    static int playerCount;
    static Config defaultConfig;

    // Private constructor for the static default object
    Config(string lang, bool isDefault)
    {
        language = lang;

        if (!isDefault)
        {
            playerCount++;
        }
    }

public:
    Config()
    {
        language = "English";
        cout << "Default language selected: English" << endl;
        playerCount++;
    }

    Config(string lang)
    {
        language = lang;
        cout << "Language selected: " << language << endl;
        playerCount++;
    }

    Config(const Config& other)
    {
        language = defaultConfig.language;

        cout << "Language copied from default: "
             << language << endl;

        playerCount++;
    }

    void displayLanguage()
    {
        cout << "Current Language: " << language << endl;
    }

    static void displayPlayerCount()
    {
        cout << "Active Players: " << playerCount << endl;
    }
};

int Config::playerCount = 0;
Config Config::defaultConfig("English", true);

int main()
{
    int n;
    cin >> n;

    Config* players[100];

    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;

        if (type == 0)
        {
            players[i] = new Config();
        }
        else if (type == 1)
        {
            string language;
            cin >> language;
            players[i] = new Config(language);
        }
        else
        {
            players[i] = new Config(*players[0]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        players[i]->displayLanguage();
    }

    Config::displayPlayerCount();

    for (int i = 0; i < n; i++)
    {
        delete players[i];
    }

    return 0;
}