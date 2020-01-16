#include <iostream>
#include <string>

//Tells the compiler we are using "std::" commands
using namespace std;

//Entry Point
int main()
{

    //Displays Title
    cout << "Welcome to VOID-RPG Character Creator!" << endl;

    //Creates a space between the lines in the output.
    cout << "" << endl;

    //Prompts the user to press a key to move forward.
    system("pause");

    cout << "" << endl;

    cout << "Please enter your character's name:" << endl;

    //Creates a variable for the character's name
    string name;

    //User inputs name
    cin >> name;

    cout << "" << endl;

    cout << name << ", that is an interesting name!" << endl;

    cout << "" << endl;

    cout << "Please enter " << name << "'s species." << endl;

    //Collects the character's species
    string species;

    cin >> species;

    cout << "" << endl;

    cout << "Please enter the " << species << " race ability." << endl;

    //Collects the character's special ability
    string special;

    cin >> special;

    cout << "" << endl;

    cout << "Great! Please enter " << name << "'s age." << endl;

    //Collects the character's age as an integer.
    int age;

    //Initializes default age as 18
    age = 18;

    cin >> age;

    cout << "" << endl;

    cout << "Now that you have created your character, you will create the stats!" << endl;

    cout << "" << endl;

    //Prompts user to "press any key to continue"
    system("pause");

    cout << "" << endl;

    cout << "Please enter " << name << "'s health stat." << endl;

    int health;

    health = 100;

    cin >> health;

    cout << "" << endl;

    cout << "Please enter " << name << "'s magic stat." << endl;

    int magic;

    magic = 100;

    cin >> magic;

    cout << "" << endl;

    cout << "Please enter " << name << "'s strength stat." << endl;

    int strength;

    strength = 100;

    cin >> strength;

    cout << "" << endl;

    cout << "Please enter " << name << "'s speed stat." << endl;

    int speed;

    speed = 100;

    cin >> speed;

    cout << "" << endl;

    cout << "Please enter " << name << "'s intelligence stat." << endl;

    int intelligence;

    intelligence = 100;

    cin >> intelligence;

    cout << "" << endl;

    cout << "Great! " << name << ". Has been created!" << endl;

    cout << "" << endl;

    cout << "Displaying " << name << "'s stats:" << endl;

    cout << "Species: " << species << endl;

    cout << "Race Ability: " << special << endl;

    cout << "Age: " << age << endl;

    cout << "Health: " << health << endl;

    cout << "Magic: " << magic << endl;

    cout << "Strength: " << strength << endl;

    cout << "Speed: " << speed << endl;

    cout << "Intelligence: " << intelligence << endl;

    cout << "" << endl;

    //Pause the output so the window doesn't close.
    system("pause");

    return 0;
}
