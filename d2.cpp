#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
int TOP_counter = 2;
void Menu();
void set_active(int TOP_activation);
void enter_func(int st, int fin);



class TOP {
public:
    TOP* top1, * top2, * top3, * top4, * top5, * top6, * top7, * top8;
    int TOP_number;
    int con1, con2, con3, con4, con5, con6, con7, con8;

    int flag_activ = 0;
    void activate(int activ) {
        TOP_number = activ;
        flag_activ = 1;

    }
    void activate_connections(TOP* endTOP, int number) {
        if (number == 1)
            top1 = endTOP;
        if (number == 2)
            top2 = endTOP;
        if (number == 3)
            top3 = endTOP;
        if (number == 4)
            top4 = endTOP;
        if (number == 5)
            top5 = endTOP;
        if (number == 6)
            top6 = endTOP;
        if (number == 7)
            top7 = endTOP;
        if (number == 8)
            top8 = endTOP;
    }
    void set_connection(int connect) {
        if ((connect == 1) && (top1->flag_activ == 1))
            con1 = 1;
        if ((connect == 2) && (top2->flag_activ == 1))
            con2 = 1;
        if ((connect == 3) && (top3->flag_activ == 1))
            con3 = 1;
        if ((connect == 4) && (top4->flag_activ == 1))
            con4 = 1;
        if ((connect == 5) && (top5->flag_activ == 1))
            con5 = 1;
        if ((connect == 6) && (top6->flag_activ == 1))
            con6 = 1;
        if ((connect == 7) && (top7->flag_activ == 1))
            con7 = 1;
        if ((connect == 8) && (top4->flag_activ == 1))
            con8 = 1;
    }
};

TOP* t1, * t2, * t3, * t4, * t5, * t6, * t7, * t8;

int main()
{
    t1 = new TOP;
    t2 = new TOP;
    t3 = new TOP;
    t4 = new TOP;
    t5 = new TOP;
    t6 = new TOP;
    t7 = new TOP;
    t8 = new TOP;

    cout << "Dobro pogalovat!" << endl;
    cout << "Vvedite kol-vo vershin ot 2 do 8" << endl;
    cin >> TOP_counter;
    cout << endl;
    set_active(TOP_counter);
    Menu();

    return 0;
}



void Menu() {
    int flag_menu = 0;
    while (flag_menu != 3)
    {
        system("cls");
        cout << "1. Enter new connection" << endl;
        cout << "2. Display graf" << endl;
        cout << "3. Exit" << endl;
        cin >> flag_menu;
        cout << endl;


        if (flag_menu == 1) {
            int start_top_number = 0;
            int finish_top_number = 0;
            system("cls");
            cout << "Enter start top number:" << endl;
            cin >> start_top_number;
            cout << "Enter finish top number:" << endl;
            cin >> finish_top_number;
            enter_func(start_top_number, finish_top_number);
        }
        if (flag_menu == 2) {
            system("cls");
            cout << "Close!" << endl;
            sf::RenderWindow window(sf::VideoMode(370, 370), "Current graf");
            sf::RectangleShape Cub(sf::Vector2f(270.f, 270.f));
            Cub.setPosition(50.f, 50.f);
            //arcabaleno
            sf::RectangleShape c1(sf::Vector2f(30.f, 30.f));
            c1.setPosition(50, 50);
            c1.setFillColor(sf::Color::Red);

            sf::RectangleShape c2(sf::Vector2f(30.f, 30.f));
            c2.setPosition(50, 290);
            c2.setFillColor(sf::Color::Yellow);

            sf::RectangleShape c3(sf::Vector2f(30.f, 30.f));
            c3.setPosition(290, 50);
            c3.setFillColor(sf::Color::Blue);

            sf::RectangleShape c4(sf::Vector2f(30.f, 30.f));
            c4.setPosition(290, 290);
            c4.setFillColor(sf::Color::Green);

            sf::RectangleShape c5(sf::Vector2f(30.f, 30.f));
            c5.setPosition(170, 110);
            c5.setFillColor(sf::Color::Magenta);

            sf::RectangleShape c6(sf::Vector2f(30.f, 30.f));
            c6.setPosition(170, 230);
            c6.setFillColor(sf::Color::Cyan);

            sf::RectangleShape c7(sf::Vector2f(30.f, 30.f));
            c7.setPosition(110, 170);
            c7.setFillColor(sf::Color(128, 128, 128));

            sf::RectangleShape c8(sf::Vector2f(30.f, 30.f));
            c8.setPosition(230, 170);
            c8.setFillColor(sf::Color(128, 128, 0));

            //lines
            sf::RectangleShape c1c4(sf::Vector2f(340.f, 1.f));
            c1c4.rotate(45.f);
            // c1c4.setFillColor(sf::Color::Red);
            c1c4.setOutlineThickness(2.f);
            // c1c4.setOutlineColor(sf::Color::Green);
            c1c4.setPosition(65, 65);

            sf::RectangleShape c1c2(sf::Vector2f(250.f, 1.f));
            c1c2.rotate(90.f);
            //c1c2.setFillColor(sf::Color::Red);
            c1c2.setOutlineThickness(2.f);
            //c1c2.setOutlineColor(sf::Color::Yellow);

            c1c2.setPosition(65, 65);

            sf::RectangleShape c1c3(sf::Vector2f(250.f, 1.f));
            c1c3.rotate(0.f);
            //c1c3.setFillColor(sf::Color::Red);
            c1c3.setOutlineThickness(2.f);
            //c1c3.setOutlineColor(sf::Color::Blue);
            c1c3.setPosition(65, 65);

            sf::RectangleShape c1c5(sf::Vector2f(140.f, 1.f));
            c1c5.rotate(25.f);
            //  c1c5.setFillColor(sf::Color::Red);
            c1c5.setOutlineThickness(2.f);
            //  c1c5.setOutlineColor(sf::Color::Magenta);
            c1c5.setPosition(65, 65);

            sf::RectangleShape c1c7(sf::Vector2f(140.f, 1.f));
            c1c7.rotate(60.f);
            // c1c7.setFillColor(sf::Color::Red);
            c1c7.setOutlineThickness(2.f);
            //  c1c7.setOutlineColor(sf::Color(128, 128, 128));
            c1c7.setPosition(65, 65);

            sf::RectangleShape c1c6(sf::Vector2f(215.f, 1.f));
            c1c6.rotate(52.f);
            //  c1c6.setFillColor(sf::Color::Red);
            c1c6.setOutlineThickness(2.f);
            //  c1c6.setOutlineColor(sf::Color::Cyan);
            c1c6.setPosition(65, 65);

            sf::RectangleShape c1c8(sf::Vector2f(215.f, 1.f));
            c1c8.rotate(38.f);
            // c1c8.setFillColor(sf::Color::Red);
            c1c8.setOutlineThickness(2.f);
            // c1c8.setOutlineColor(sf::Color(128, 128, 0));
            c1c8.setPosition(65, 65);

            sf::RectangleShape c3c5(sf::Vector2f(140.f, 1.f));
            c3c5.rotate(155.f);
            // c3c5.setFillColor(sf::Color::Blue);
            c3c5.setOutlineThickness(2.f);
            // c3c5.setOutlineColor(sf::Color::Magenta);
            c3c5.setPosition(305, 65);

            sf::RectangleShape c3c8(sf::Vector2f(140.f, 1.f));
            c3c8.rotate(115.f);
            //c3c8.setFillColor(sf::Color::Blue);
            c3c8.setOutlineThickness(2.f);
            //c3c8.setOutlineColor(sf::Color(128, 128, 0));
            c3c8.setPosition(305, 65);

            sf::RectangleShape c3c7(sf::Vector2f(215.f, 1.f));
            c3c7.rotate(145.f);
            // c3c7.setFillColor(sf::Color::Blue);
            c3c7.setOutlineThickness(2.f);
            //c3c7.setOutlineColor(sf::Color(128, 128, 128));
            c3c7.setPosition(305, 65);

            sf::RectangleShape c3c6(sf::Vector2f(215.f, 1.f));
            c3c6.rotate(125.f);
            //c3c6.setFillColor(sf::Color::Blue);
            c3c6.setOutlineThickness(2.f);
            // c3c6.setOutlineColor(sf::Color::Cyan);
            c3c6.setPosition(305, 65);

            sf::RectangleShape c3c4(sf::Vector2f(250.f, 1.f));
            c3c4.rotate(90.f);
            // c3c4.setFillColor(sf::Color::Green);
            c3c4.setOutlineThickness(2.f);
            // c3c4.setOutlineColor(sf::Color::Blue);
            c3c4.setPosition(305, 65);

            sf::RectangleShape c3c2(sf::Vector2f(340.f, 1.f));
            c3c2.rotate(135.f);
            // c3c2.setFillColor(sf::Color::Yellow);
            c3c2.setOutlineThickness(2.f);
            // c3c2.setOutlineColor(sf::Color::Blue);
            c3c2.setPosition(305, 65);

            sf::RectangleShape c2c4(sf::Vector2f(250.f, 1.f));
            c2c4.rotate(0.f);
            // c2c4.setFillColor(sf::Color::Yellow);
            c2c4.setOutlineThickness(2.f);
            // c2c4.setOutlineColor(sf::Color::Green);
            c2c4.setPosition(65, 305);

            sf::RectangleShape c2c7(sf::Vector2f(140.f, 1.f));
            c2c7.rotate(300.f);
            // c2c7.setFillColor(sf::Color::Yellow);
            c2c7.setOutlineThickness(2.f);
            // c2c7.setOutlineColor(sf::Color(128, 128, 128));
            c2c7.setPosition(65, 305);

            sf::RectangleShape c2c6(sf::Vector2f(140.f, 1.f));
            c2c6.rotate(-25.f);
            //c2c6.setFillColor(sf::Color::Yellow);
            c2c6.setOutlineThickness(2.f);
            // c2c6.setOutlineColor(sf::Color::Cyan);
            c2c6.setPosition(65, 305);

            sf::RectangleShape c2c5(sf::Vector2f(215.f, 1.f));
            c2c5.rotate(-55.f);
            //c2c5.setFillColor(sf::Color::Yellow);
            c2c5.setOutlineThickness(2.f);
            //c2c5.setOutlineColor(sf::Color::Magenta);
            c2c5.setPosition(65, 305);

            sf::RectangleShape c2c8(sf::Vector2f(215.f, 1.f));
            c2c8.rotate(-35.f);
            // c2c8.setFillColor(sf::Color::Yellow);
            c2c8.setOutlineThickness(2.f);
            // c2c8.setOutlineColor(sf::Color(128, 128, 0));
            c2c8.setPosition(65, 305);

            sf::RectangleShape c4c8(sf::Vector2f(140.f, 1.f));
            c4c8.rotate(-120.f);
            // c4c8.setFillColor(sf::Color::Green);
            c4c8.setOutlineThickness(2.f);
            // c4c8.setOutlineColor(sf::Color(128, 128, 0));
            c4c8.setPosition(305, 305);

            sf::RectangleShape c4c6(sf::Vector2f(140.f, 1.f));
            c4c6.rotate(-150.f);
            // c4c6.setFillColor(sf::Color::Green);
            c4c6.setOutlineThickness(2.f);
            // c4c6.setOutlineColor(sf::Color::Cyan);
            c4c6.setPosition(305, 305);

            sf::RectangleShape c4c5(sf::Vector2f(215.f, 1.f));
            c4c5.rotate(-125.f);
            // c4c5.setFillColor(sf::Color::Green);
            c4c5.setOutlineThickness(2.f);
            //  c4c5.setOutlineColor(sf::Color::Magenta);
            c4c5.setPosition(305, 305);

            sf::RectangleShape c4c7(sf::Vector2f(215.f, 1.f));
            c4c7.rotate(-145.f);
            // c4c7.setFillColor(sf::Color::Green);
            c4c7.setOutlineThickness(2.f);
            //  c4c7.setOutlineColor(sf::Color(128, 128, 128));
            c4c7.setPosition(305, 305);

            sf::RectangleShape c5c7(sf::Vector2f(80.f, 1.f));
            c5c7.rotate(135.f);
            //c5c7.setFillColor(sf::Color::Magenta);
            c5c7.setOutlineThickness(2.f);
            // c5c7.setOutlineColor(sf::Color(128, 128, 128));
            c5c7.setPosition(185, 125);

            sf::RectangleShape c5c8(sf::Vector2f(80.f, 1.f));
            c5c8.rotate(45.f);
            // c5c8.setFillColor(sf::Color::Magenta);
            c5c8.setOutlineThickness(2.f);
            //c5c8.setOutlineColor(sf::Color(128, 128, 0));
            c5c8.setPosition(185, 125);

            sf::RectangleShape c6c8(sf::Vector2f(80.f, 1.f));
            c6c8.rotate(-45.f);
            // c6c8.setFillColor(sf::Color::Cyan);
            c6c8.setOutlineThickness(2.f);
            // c6c8.setOutlineColor(sf::Color(128, 128, 0));
            c6c8.setPosition(185, 245);

            sf::RectangleShape c6c7(sf::Vector2f(80.f, 1.f));
            c6c7.rotate(-135.f);
            // c6c7.setFillColor(sf::Color::Cyan);
            c6c7.setOutlineThickness(2.f);
            // c6c7.setOutlineColor(sf::Color(128, 128, 128));
            c6c7.setPosition(185, 245);

            //loop
            sf::RectangleShape c1c1(sf::Vector2f(30.f, 30.f));
            c1c1.setPosition(35, 35);
            c1c1.setOutlineThickness(1.f);

            sf::RectangleShape c2c2(sf::Vector2f(30.f, 30.f));
            c2c2.setPosition(35, 305);
            c2c2.setOutlineThickness(1.f);
            // c2c2.setFillColor(sf::Color::Transparent);
            // c2c2.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c3c3(sf::Vector2f(30.f, 30.f));
            c3c3.setPosition(305, 35);
            //  c3c3.setFillColor(sf::Color::Transparent);
            c3c3.setOutlineThickness(1.f);
            // c3c3.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c4c4(sf::Vector2f(30.f, 30.f));
            c4c4.setPosition(305, 305);
            // c4c4.setFillColor(sf::Color::Transparent);
            c4c4.setOutlineThickness(1.f);
            // c4c4.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c5c5(sf::Vector2f(30.f, 30.f));#include <SFML/Graphics.hpp>
#include <iostream>

using namespace std;
int TOP_counter = 2;
void Menu();
void set_active(int TOP_activation);
void enter_func(int st, int fin);
void check_connectivity();


class TOP {
public:
    TOP* top1, * top2, * top3, * top4, * top5, * top6, * top7, * top8;
    int TOP_number;
    int con1, con2, con3, con4, con5, con6, con7, con8;
    TOP() {
        con1 = 0;
        con2 = 0;
        con3 = 0;
        con4 = 0;
        con5 = 0;
        con6 = 0;
        con7 = 0;
        con8 = 0;
    }
    int flag_activ = 0;
    void activate(int activ) {
        TOP_number = activ;
        flag_activ = 1;

    }
    void activate_connections(TOP* endTOP, int number) {
        if (number == 1)
            top1 = endTOP;
        if (number == 2)
            top2 = endTOP;
        if (number == 3)
            top3 = endTOP;
        if (number == 4)
            top4 = endTOP;
        if (number == 5)
            top5 = endTOP;
        if (number == 6)
            top6 = endTOP;
        if (number == 7)
            top7 = endTOP;
        if (number == 8)
            top8 = endTOP;
    }
    void set_connection(int connect) {
        if ((connect == 1) && (top1->flag_activ == 1))
            con1 = 1;
        if ((connect == 2) && (top2->flag_activ == 1))
            con2 = 1;
        if ((connect == 3) && (top3->flag_activ == 1))
            con3 = 1;
        if ((connect == 4) && (top4->flag_activ == 1))
            con4 = 1;
        if ((connect == 5) && (top5->flag_activ == 1))
            con5 = 1;
        if ((connect == 6) && (top6->flag_activ == 1))
            con6 = 1;
        if ((connect == 7) && (top7->flag_activ == 1))
            con7 = 1;
        if ((connect == 8) && (top4->flag_activ == 1))
            con8 = 1;
    }
};

TOP* t1, * t2, * t3, * t4, * t5, * t6, * t7, * t8;


int main()
{
    t1 = new TOP;
    t2 = new TOP;
    t3 = new TOP;
    t4 = new TOP;
    t5 = new TOP;
    t6 = new TOP;
    t7 = new TOP;
    t8 = new TOP;

    cout << "Dobro pogalovat!" << endl;
    cout << "Vvedite kol-vo vershin ot 2 do 8" << endl;
    cin >> TOP_counter;
    cout << endl;
    set_active(TOP_counter);
    Menu();

    return 0;
}

void Menu() {
    int flag_menu = 0;
    while (flag_menu != 4)
    {
        system("cls");
        cout << "1. Enter new connection" << endl;
        cout << "2. Display graf" << endl;
        cout << "3. Check connectivity" << endl;
        cout << "4. Exit" << endl;
        cin >> flag_menu;
        cout << endl;


        if (flag_menu == 1) {
            int start_top_number = 0;
            int finish_top_number = 0;
            system("cls");
            cout << "Enter start top number:" << endl;
            cin >> start_top_number;
            cout << "Enter finish top number:" << endl;
            cin >> finish_top_number;
            enter_func(start_top_number, finish_top_number);
        }

        if (flag_menu == 2) {
            system("cls");
            cout << "Close!" << endl;
            sf::RenderWindow window(sf::VideoMode(370, 370), "Current graf");
            sf::RectangleShape Cub(sf::Vector2f(270.f, 270.f));
            Cub.setPosition(50.f, 50.f);
            //arcabaleno
            sf::RectangleShape c1(sf::Vector2f(30.f, 30.f));
            c1.setPosition(50, 50);
            c1.setFillColor(sf::Color::Red);

            sf::RectangleShape c2(sf::Vector2f(30.f, 30.f));
            c2.setPosition(50, 290);
            c2.setFillColor(sf::Color::Yellow);

            sf::RectangleShape c3(sf::Vector2f(30.f, 30.f));
            c3.setPosition(290, 50);
            c3.setFillColor(sf::Color::Blue);

            sf::RectangleShape c4(sf::Vector2f(30.f, 30.f));
            c4.setPosition(290, 290);
            c4.setFillColor(sf::Color::Green);

            sf::RectangleShape c5(sf::Vector2f(30.f, 30.f));
            c5.setPosition(170, 110);
            c5.setFillColor(sf::Color::Magenta);

            sf::RectangleShape c6(sf::Vector2f(30.f, 30.f));
            c6.setPosition(170, 230);
            c6.setFillColor(sf::Color::Cyan);

            sf::RectangleShape c7(sf::Vector2f(30.f, 30.f));
            c7.setPosition(110, 170);
            c7.setFillColor(sf::Color(128, 128, 128));

            sf::RectangleShape c8(sf::Vector2f(30.f, 30.f));
            c8.setPosition(230, 170);
            c8.setFillColor(sf::Color(128, 128, 0));

            //lines
            sf::RectangleShape c1c4(sf::Vector2f(340.f, 1.f));
            c1c4.rotate(45.f);
            // c1c4.setFillColor(sf::Color::Red);
            c1c4.setOutlineThickness(2.f);
            // c1c4.setOutlineColor(sf::Color::Green);
            c1c4.setPosition(65, 65);

            sf::RectangleShape c1c2(sf::Vector2f(250.f, 1.f));
            c1c2.rotate(90.f);
            //c1c2.setFillColor(sf::Color::Red);
            c1c2.setOutlineThickness(2.f);
            //c1c2.setOutlineColor(sf::Color::Yellow);

            c1c2.setPosition(65, 65);

            sf::RectangleShape c1c3(sf::Vector2f(250.f, 1.f));
            c1c3.rotate(0.f);
            //c1c3.setFillColor(sf::Color::Red);
            c1c3.setOutlineThickness(2.f);
            //c1c3.setOutlineColor(sf::Color::Blue);
            c1c3.setPosition(65, 65);

            sf::RectangleShape c1c5(sf::Vector2f(140.f, 1.f));
            c1c5.rotate(25.f);
            //  c1c5.setFillColor(sf::Color::Red);
            c1c5.setOutlineThickness(2.f);
            //  c1c5.setOutlineColor(sf::Color::Magenta);
            c1c5.setPosition(65, 65);

            sf::RectangleShape c1c7(sf::Vector2f(140.f, 1.f));
            c1c7.rotate(60.f);
            // c1c7.setFillColor(sf::Color::Red);
            c1c7.setOutlineThickness(2.f);
            //  c1c7.setOutlineColor(sf::Color(128, 128, 128));
            c1c7.setPosition(65, 65);

            sf::RectangleShape c1c6(sf::Vector2f(215.f, 1.f));
            c1c6.rotate(52.f);
            //  c1c6.setFillColor(sf::Color::Red);
            c1c6.setOutlineThickness(2.f);
            //  c1c6.setOutlineColor(sf::Color::Cyan);
            c1c6.setPosition(65, 65);

            sf::RectangleShape c1c8(sf::Vector2f(215.f, 1.f));
            c1c8.rotate(38.f);
            // c1c8.setFillColor(sf::Color::Red);
            c1c8.setOutlineThickness(2.f);
            // c1c8.setOutlineColor(sf::Color(128, 128, 0));
            c1c8.setPosition(65, 65);

            sf::RectangleShape c3c5(sf::Vector2f(140.f, 1.f));
            c3c5.rotate(155.f);
            // c3c5.setFillColor(sf::Color::Blue);
            c3c5.setOutlineThickness(2.f);
            // c3c5.setOutlineColor(sf::Color::Magenta);
            c3c5.setPosition(305, 65);

            sf::RectangleShape c3c8(sf::Vector2f(140.f, 1.f));
            c3c8.rotate(115.f);
            //c3c8.setFillColor(sf::Color::Blue);
            c3c8.setOutlineThickness(2.f);
            //c3c8.setOutlineColor(sf::Color(128, 128, 0));
            c3c8.setPosition(305, 65);

            sf::RectangleShape c3c7(sf::Vector2f(215.f, 1.f));
            c3c7.rotate(145.f);
            // c3c7.setFillColor(sf::Color::Blue);
            c3c7.setOutlineThickness(2.f);
            //c3c7.setOutlineColor(sf::Color(128, 128, 128));
            c3c7.setPosition(305, 65);

            sf::RectangleShape c3c6(sf::Vector2f(215.f, 1.f));
            c3c6.rotate(125.f);
            //c3c6.setFillColor(sf::Color::Blue);
            c3c6.setOutlineThickness(2.f);
            // c3c6.setOutlineColor(sf::Color::Cyan);
            c3c6.setPosition(305, 65);

            sf::RectangleShape c3c4(sf::Vector2f(250.f, 1.f));
            c3c4.rotate(90.f);
            // c3c4.setFillColor(sf::Color::Green);
            c3c4.setOutlineThickness(2.f);
            // c3c4.setOutlineColor(sf::Color::Blue);
            c3c4.setPosition(305, 65);

            sf::RectangleShape c3c2(sf::Vector2f(340.f, 1.f));
            c3c2.rotate(135.f);
            // c3c2.setFillColor(sf::Color::Yellow);
            c3c2.setOutlineThickness(2.f);
            // c3c2.setOutlineColor(sf::Color::Blue);
            c3c2.setPosition(305, 65);

            sf::RectangleShape c2c4(sf::Vector2f(250.f, 1.f));
            c2c4.rotate(0.f);
            // c2c4.setFillColor(sf::Color::Yellow);
            c2c4.setOutlineThickness(2.f);
            // c2c4.setOutlineColor(sf::Color::Green);
            c2c4.setPosition(65, 305);

            sf::RectangleShape c2c7(sf::Vector2f(140.f, 1.f));
            c2c7.rotate(300.f);
            // c2c7.setFillColor(sf::Color::Yellow);
            c2c7.setOutlineThickness(2.f);
            // c2c7.setOutlineColor(sf::Color(128, 128, 128));
            c2c7.setPosition(65, 305);

            sf::RectangleShape c2c6(sf::Vector2f(140.f, 1.f));
            c2c6.rotate(-25.f);
            //c2c6.setFillColor(sf::Color::Yellow);
            c2c6.setOutlineThickness(2.f);
            // c2c6.setOutlineColor(sf::Color::Cyan);
            c2c6.setPosition(65, 305);

            sf::RectangleShape c2c5(sf::Vector2f(215.f, 1.f));
            c2c5.rotate(-55.f);
            //c2c5.setFillColor(sf::Color::Yellow);
            c2c5.setOutlineThickness(2.f);
            //c2c5.setOutlineColor(sf::Color::Magenta);
            c2c5.setPosition(65, 305);

            sf::RectangleShape c2c8(sf::Vector2f(215.f, 1.f));
            c2c8.rotate(-35.f);
            // c2c8.setFillColor(sf::Color::Yellow);
            c2c8.setOutlineThickness(2.f);
            // c2c8.setOutlineColor(sf::Color(128, 128, 0));
            c2c8.setPosition(65, 305);

            sf::RectangleShape c4c8(sf::Vector2f(140.f, 1.f));
            c4c8.rotate(-120.f);
            // c4c8.setFillColor(sf::Color::Green);
            c4c8.setOutlineThickness(2.f);
            // c4c8.setOutlineColor(sf::Color(128, 128, 0));
            c4c8.setPosition(305, 305);

            sf::RectangleShape c4c6(sf::Vector2f(140.f, 1.f));
            c4c6.rotate(-150.f);
            // c4c6.setFillColor(sf::Color::Green);
            c4c6.setOutlineThickness(2.f);
            // c4c6.setOutlineColor(sf::Color::Cyan);
            c4c6.setPosition(305, 305);

            sf::RectangleShape c4c5(sf::Vector2f(215.f, 1.f));
            c4c5.rotate(-125.f);
            // c4c5.setFillColor(sf::Color::Green);
            c4c5.setOutlineThickness(2.f);
            //  c4c5.setOutlineColor(sf::Color::Magenta);
            c4c5.setPosition(305, 305);

            sf::RectangleShape c4c7(sf::Vector2f(215.f, 1.f));
            c4c7.rotate(-145.f);
            // c4c7.setFillColor(sf::Color::Green);
            c4c7.setOutlineThickness(2.f);
            //  c4c7.setOutlineColor(sf::Color(128, 128, 128));
            c4c7.setPosition(305, 305);

            sf::RectangleShape c5c7(sf::Vector2f(80.f, 1.f));
            c5c7.rotate(135.f);
            //c5c7.setFillColor(sf::Color::Magenta);
            c5c7.setOutlineThickness(2.f);
            // c5c7.setOutlineColor(sf::Color(128, 128, 128));
            c5c7.setPosition(185, 125);

            sf::RectangleShape c5c8(sf::Vector2f(80.f, 1.f));
            c5c8.rotate(45.f);
            // c5c8.setFillColor(sf::Color::Magenta);
            c5c8.setOutlineThickness(2.f);
            //c5c8.setOutlineColor(sf::Color(128, 128, 0));
            c5c8.setPosition(185, 125);

            sf::RectangleShape c6c8(sf::Vector2f(80.f, 1.f));
            c6c8.rotate(-45.f);
            // c6c8.setFillColor(sf::Color::Cyan);
            c6c8.setOutlineThickness(2.f);
            // c6c8.setOutlineColor(sf::Color(128, 128, 0));
            c6c8.setPosition(185, 245);

            sf::RectangleShape c6c7(sf::Vector2f(80.f, 1.f));
            c6c7.rotate(-135.f);
            // c6c7.setFillColor(sf::Color::Cyan);
            c6c7.setOutlineThickness(2.f);
            // c6c7.setOutlineColor(sf::Color(128, 128, 128));
            c6c7.setPosition(185, 245);

            //loop
            sf::RectangleShape c1c1(sf::Vector2f(30.f, 30.f));
            c1c1.setPosition(35, 35);
            c1c1.setOutlineThickness(1.f);

            sf::RectangleShape c2c2(sf::Vector2f(30.f, 30.f));
            c2c2.setPosition(35, 305);
            c2c2.setOutlineThickness(1.f);
            // c2c2.setFillColor(sf::Color::Transparent);
            // c2c2.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c3c3(sf::Vector2f(30.f, 30.f));
            c3c3.setPosition(305, 35);
            //  c3c3.setFillColor(sf::Color::Transparent);
            c3c3.setOutlineThickness(1.f);
            // c3c3.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c4c4(sf::Vector2f(30.f, 30.f));
            c4c4.setPosition(305, 305);
            // c4c4.setFillColor(sf::Color::Transparent);
            c4c4.setOutlineThickness(1.f);
            // c4c4.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c5c5(sf::Vector2f(30.f, 30.f));
            c5c5.setPosition(155, 95);
            //  c5c5.setFillColor(sf::Color::Transparent);
            c5c5.setOutlineThickness(1.f);
            //  c5c5.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c6c6(sf::Vector2f(30.f, 30.f));
            c6c6.setPosition(155, 215);
            //  c6c6.setFillColor(sf::Color::Transparent);
            c6c6.setOutlineThickness(1.f);
            // c6c6.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c7c7(sf::Vector2f(30.f, 30.f));
            c7c7.setPosition(95, 155);
            //  c7c7.setFillColor(sf::Color::Transparent);
            c7c7.setOutlineThickness(1.f);
            // c7c7.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c8c8(sf::Vector2f(30.f, 30.f));
            c8c8.setPosition(215, 155);
            // c8c8.setFillColor(sf::Color::Transparent);
            c8c8.setOutlineThickness(1.f);
            // c8c8.setOutlineColor(sf::Color::Blue);

            while (window.isOpen())
            {
                sf::Event event;
                while (window.pollEvent(event))
                {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }
                window.clear();

                //lines activations
                if (TOP_counter >= 2)
                    if ((t1->top2->flag_activ == 1) && (TOP_counter >= 2)) {
                        if (t1->con2 == 1) {
                            c1c2.setFillColor(sf::Color::Red);
                            c1c2.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c2);
                        }
                        if (t1->top2->con1 == 1) {
                            c1c2.setFillColor(sf::Color::Transparent);
                            c1c2.setOutlineColor(sf::Color::Yellow);
                            window.draw(c1c2);
                        }
                        if ((t1->con2 == 1) && (t1->top2->con1 == 1)) {
                            c1c2.setFillColor(sf::Color::Red);
                            c1c2.setOutlineColor(sf::Color::Yellow);
                            window.draw(c1c2);
                        }
                        // window.draw(c1c2);
                    }
                if (TOP_counter >= 3)
                    if ((t1->top3->flag_activ == 1) && (TOP_counter >= 3)) {
                        if (t1->con3 == 1) {
                            c1c3.setFillColor(sf::Color::Red);
                            c1c3.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c3);
                        }
                        if (t1->top3->con1 == 1) { // аналогично (t3->con1 == 1)
                            c1c3.setFillColor(sf::Color::Transparent);
                            c1c3.setOutlineColor(sf::Color::Blue);
                            window.draw(c1c3);
                        }
                        if ((t1->con3 == 1) && (t1->top3->con1 == 1)) {
                            c1c3.setFillColor(sf::Color::Red);
                            c1c3.setOutlineColor(sf::Color::Blue);
                            window.draw(c1c3);
                        }

                    }
                if (TOP_counter >= 4)
                    if ((t1->top4->flag_activ == 1) && (TOP_counter >= 4)) {
                        if (t1->con4 == 1) {
                            c1c4.setFillColor(sf::Color::Red);
                            c1c4.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c4);
                        }
                        if (t1->top4->con1 == 1) {
                            c1c4.setFillColor(sf::Color::Transparent);
                            c1c4.setOutlineColor(sf::Color::Green);
                            window.draw(c1c4);
                        }
                        if ((t1->con4 == 1) && (t1->top4->con1 == 1)) {
                            c1c4.setFillColor(sf::Color::Red);
                            c1c4.setOutlineColor(sf::Color::Green);
                            window.draw(c1c4);
                        }

                    }
                if (TOP_counter >= 5)
                    if ((t1->top5->flag_activ == 1) && (TOP_counter >= 5)) {
                        if (t1->con5 == 1) {
                            c1c5.setFillColor(sf::Color::Red);
                            c1c5.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c5);
                        }
                        if (t1->top5->con1 == 1) {
                            c1c5.setFillColor(sf::Color::Transparent);
                            c1c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c1c5);
                        }
                        if ((t1->con5 == 1) && (t1->top5->con1 == 1)) {
                            c1c5.setFillColor(sf::Color::Red);
                            c1c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c1c5);
                        }

                    }
                if (TOP_counter >= 6)
                    if ((t1->top6->flag_activ == 1) && (TOP_counter >= 6)) {
                        if (t1->con6 == 1) {
                            c1c6.setFillColor(sf::Color::Red);
                            c1c6.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c6);
                        }
                        if (t1->top6->con1 == 1) {
                            c1c6.setFillColor(sf::Color::Transparent);
                            c1c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c1c6);

                        }
                        if ((t1->con6 == 1) && (t1->top6->con1 == 1)) {
                            c1c6.setFillColor(sf::Color::Red);
                            c1c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c1c6);
                        }
                    }
                if (TOP_counter >= 7)
                    if ((t1->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t1->con7 == 1) {
                            c1c7.setFillColor(sf::Color::Red);
                            c1c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c7);
                        }
                        if (t1->top7->con1 == 1) {
                            c1c7.setFillColor(sf::Color::Transparent);
                            c1c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c1c7);
                        }
                        if ((t1->con7 == 1) && (t1->top7->con1 == 1)) {
                            c1c7.setFillColor(sf::Color::Red);
                            c1c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c1c7);
                        }

                    }
                if (TOP_counter >= 8)
                    if ((t1->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t1->con8 == 1) {
                            c1c8.setFillColor(sf::Color::Red);
                            c1c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c8);

                        }
                        if (t1->top8->con1 == 1) {
                            c1c8.setFillColor(sf::Color::Transparent);
                            c1c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c1c8);
                        }
                        if ((t1->con8 == 1) && (t1->top8->con1 == 1)) {
                            c1c8.setFillColor(sf::Color::Red);
                            c1c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c1c8);
                        }

                    }

                //t2t3 ++
                if (TOP_counter >= 4)
                    if ((t2->top4->flag_activ == 1) && (TOP_counter >= 4)) {
                        if (t2->con4 == 1) {
                            c2c4.setFillColor(sf::Color::Yellow);
                            c2c4.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c4);
                        }
                        if (t2->top4->con2 == 1) {
                            c2c4.setFillColor(sf::Color::Transparent);
                            c2c4.setOutlineColor(sf::Color::Green);
                            window.draw(c2c4);
                        }
                        if ((t2->con4 == 1) && (t2->top4->con2 == 1)) {
                            c2c4.setFillColor(sf::Color::Yellow);
                            c2c4.setOutlineColor(sf::Color::Green);
                            window.draw(c2c4);
                        }

                    }
                if (TOP_counter >= 5)
                    if ((t2->top5->flag_activ == 1) && (TOP_counter >= 5)) {
                        if (t2->con5 == 1) {
                            c2c5.setFillColor(sf::Color::Yellow);
                            c2c5.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c5);
                        }
                        if (t2->top5->con2 == 1) {
                            c2c5.setFillColor(sf::Color::Transparent);
                            c2c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c2c5);
                        }
                        if ((t2->con5 == 1) && (t2->top5->con2 == 1)) {
                            c2c5.setFillColor(sf::Color::Yellow);
                            c2c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c2c5);
                        }

                    }
                if (TOP_counter >= 6)
                    if ((t2->top6->flag_activ == 1) && (TOP_counter >= 6)) {
                        if (t2->con6 == 1) {
                            c2c6.setFillColor(sf::Color::Yellow);
                            c2c6.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c6);
                        }
                        if (t2->top6->con2 == 1) {
                            c2c6.setFillColor(sf::Color::Transparent);
                            c2c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c2c6);
                        }
                        if ((t2->con6 == 1) && (t2->top6->con2 == 1)) {
                            c2c6.setFillColor(sf::Color::Yellow);
                            c2c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c2c6);
                        }

                    }
                if (TOP_counter >= 7)
                    if ((t2->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t2->con7 == 1) {
                            c2c7.setFillColor(sf::Color::Yellow);
                            c2c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c7);
                        }
                        if (t2->top7->con2 == 1) {
                            c2c7.setFillColor(sf::Color::Transparent);
                            c2c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c2c7);
                        }
                        if ((t2->con7 == 1) && (t2->top7->con2 == 1)) {
                            c2c7.setFillColor(sf::Color::Yellow);
                            c2c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c2c7);
                        }

                    }
                if (TOP_counter >= 8)
                    if ((t2->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t2->con8 == 1) {
                            c2c8.setFillColor(sf::Color::Yellow);
                            c2c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c8);
                        }
                        if (t2->top8->con2 == 1) {
                            c2c8.setFillColor(sf::Color::Transparent);
                            c2c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c2c8);
                        }
                        if ((t2->con8 == 1) && (t2->top8->con2 == 1)) {
                            c2c8.setFillColor(sf::Color::Yellow);
                            c2c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c2c8);
                        }

                    }

                //34++
                if (TOP_counter >= 5)
                    if ((t3->top5->flag_activ == 1) && (TOP_counter >= 5)) {
                        if (t3->con5 == 1) {
                            c3c5.setFillColor(sf::Color::Blue);
                            c3c5.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c5);
                        }
                        if (t3->top5->con3 == 1) {
                            c3c5.setFillColor(sf::Color::Transparent);
                            c3c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c3c5);
                        }
                        if ((t3->con5 == 1) && (t3->top5->con3 == 1)) {
                            c3c5.setFillColor(sf::Color::Blue);
                            c3c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c3c5);
                        }

                    }
                //36++ 37++
                if (TOP_counter >= 8)
                    if ((t3->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t3->con8 == 1) {
                            c3c8.setFillColor(sf::Color::Blue);
                            c3c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c8);
                        }
                        if (t3->top8->con3 == 1) {
                            c3c8.setFillColor(sf::Color::Transparent);
                            c3c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c3c8);
                        }
                        if ((t3->con8 == 1) && (t3->top8->con3 == 1)) {
                            c3c8.setFillColor(sf::Color::Blue);
                            c3c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c3c8);
                        }

                    }
                if (TOP_counter >= 7)
                    if ((t3->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t3->con7 == 1) {
                            c3c7.setFillColor(sf::Color::Blue);
                            c3c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c7);
                        }
                        if (t3->top7->con3 == 1) {
                            c3c7.setFillColor(sf::Color::Transparent);
                            c3c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c3c7);
                        }
                        if ((t3->con7 == 1) && (t3->top7->con3 == 1)) {
                            c3c7.setFillColor(sf::Color::Blue);
                            c3c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c3c7);
                        }

                    }
                if (TOP_counter >= 6)
                    if ((t3->top6->flag_activ == 1) && (TOP_counter >= 6)) {
                        if (t3->con6 == 1) {
                            c3c6.setFillColor(sf::Color::Blue);
                            c3c6.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c6);
                        }
                        if (t3->top6->con3 == 1) {
                            c3c6.setFillColor(sf::Color::Transparent);
                            c3c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c3c6);
                        }
                        if ((t3->con6 == 1) && (t3->top6->con3 == 1)) {
                            c3c6.setFillColor(sf::Color::Blue);
                            c3c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c3c6);
                        }

                    }
                if (TOP_counter >= 4)
                    if ((t3->top4->flag_activ == 1) && (TOP_counter >= 4)) {
                        if (t3->con4 == 1) {
                            c3c4.setFillColor(sf::Color::Blue);
                            c3c4.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c4);
                        }
                        if (t3->top4->con3 == 1) {
                            c3c4.setFillColor(sf::Color::Transparent);
                            c3c4.setFillColor(sf::Color::Green);
                            window.draw(c3c4);
                        }
                        if ((t3->con4 == 1) && (t3->top4->con3 == 1)) {
                            c3c4.setFillColor(sf::Color::Blue);
                            c3c4.setFillColor(sf::Color::Green);
                            window.draw(c3c4);
                        }

                    }
                if (TOP_counter > 2)
                    if ((t3->top2->flag_activ == 1) && (TOP_counter >= 2)) {
                        if (t3->con2 == 1) {
                            c3c2.setFillColor(sf::Color::Blue);
                            c3c2.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c2);
                        }
                        if (t3->top2->con3 == 1) {
                            c3c2.setFillColor(sf::Color::Transparent);
                            c3c2.setFillColor(sf::Color::Yellow);
                            window.draw(c3c2);
                        }
                        if ((t3->con2 == 1) && (t3->top2->con3 == 1)) {
                            c3c2.setFillColor(sf::Color::Blue);
                            c3c2.setFillColor(sf::Color::Yellow);
                            window.draw(c3c2);
                        }

                    }

                if (TOP_counter >= 8)
                    if ((t4->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t4->con8 == 1) {
                            c4c8.setFillColor(sf::Color::Green);
                            c4c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c4c8);
                        }
                        if (t4->top8->con4 == 1) {
                            c4c8.setFillColor(sf::Color::Transparent);
                            c4c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c4c8);
                        }
                        if ((t4->con8 == 1) && (t4->top8->con4 == 1)) {
                            c4c8.setFillColor(sf::Color::Green);
                            c4c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c4c8);
                        }

                    }

                if (TOP_counter >= 6)
                    if ((t4->top6->flag_activ == 1) && (TOP_counter >= 6)) {
                        if (t4->con6 == 1) {
                            c4c6.setFillColor(sf::Color::Green);
                            c4c6.setOutlineColor(sf::Color::Transparent);
                            window.draw(c4c6);
                        }
                        if (t4->top6->con4 == 1) {
                            c4c6.setFillColor(sf::Color::Transparent);
                            c4c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c4c6);
                        }
                        if ((t4->con6 == 1) && (t4->top6->con4 == 1)) {
                            c4c6.setFillColor(sf::Color::Green);
                            c4c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c4c6);
                        }

                    }
                if (TOP_counter >= 5)
                    if ((t4->top5->flag_activ == 1) && (TOP_counter >= 5)) {
                        if (t4->con5 == 1) {
                            c4c5.setFillColor(sf::Color::Green);
                            c4c5.setOutlineColor(sf::Color::Transparent);
                            window.draw(c4c6);
                        }
                        if (t4->top5->con4 == 1) {
                            c4c5.setFillColor(sf::Color::Transparent);
                            c4c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c4c6);
                        }
                        if ((t4->con5 == 1) && (t4->top5->con4 == 1)) {
                            c4c8.setFillColor(sf::Color::Green);
                            c4c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c4c6);
                        }

                    }
                if (TOP_counter >= 7)
                    if (t4->top7->flag_activ == 1) {
                        if (t4->con7 == 1) {
                            c4c7.setFillColor(sf::Color::Green);
                            c4c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c4c7);
                        }
                        if (t4->top7->con4 == 1) {
                            c4c7.setFillColor(sf::Color::Transparent);
                            c4c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c4c7);
                        }
                        if ((t4->con7 == 1) && (t4->top7->con4 == 1)) {
                            c4c7.setFillColor(sf::Color::Green);
                            c4c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c4c7);
                        }

                    }


                if (TOP_counter >= 7)
                    if ((t5->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t5->con7 == 1) {
                            c5c7.setFillColor(sf::Color::Magenta);
                            c5c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c5c7);
                        }
                        if (t5->top7->con5 == 1) {
                            c5c7.setFillColor(sf::Color::Transparent);
                            c5c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c5c7);
                        }
                        if ((t5->con7 == 1) && (t5->top7->con5 == 1)) {
                            c5c7.setFillColor(sf::Color::Magenta);
                            c5c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c5c7);
                        }

                    }
                if (TOP_counter >= 8)
                    if ((t5->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t5->con8 == 1) {
                            c5c8.setFillColor(sf::Color::Magenta);
                            c5c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c5c8);
                        }
                        if (t5->top8->con5 == 1) {
                            c5c8.setFillColor(sf::Color::Transparent);
                            c5c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c5c8);
                        }
                        if ((t5->con8 == 1) && (t5->top8->con5 == 1)) {
                            c5c8.setFillColor(sf::Color::Magenta);
                            c5c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c5c8);
                        }

                    }

                if (TOP_counter >= 8)
                    if ((t6->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t6->con8 == 1) {
                            c6c8.setFillColor(sf::Color::Cyan);
                            c6c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c6c8);
                        }
                        if (t6->top8->con6 == 1) {
                            c6c8.setFillColor(sf::Color::Transparent);
                            c6c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c6c8);
                        }
                        if ((t6->con8 == 1) && (t6->top8->con6 == 1)) {
                            c6c8.setFillColor(sf::Color::Cyan);
                            c5c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c6c8);
                        }

                    }
                if (TOP_counter >= 7)
                    if ((t6->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t6->con7 == 1) {
                            c6c7.setFillColor(sf::Color::Cyan);
                            c6c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c6c7);

                        }
                        if (t6->top7->con6 == 1) {
                            c6c7.setFillColor(sf::Color::Transparent);
                            c6c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c6c7);
                        }
                        if ((t6->con7 == 1) && (t6->top7->con6 == 1)) {
                            c6c7.setFillColor(sf::Color::Cyan);
                            c6c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c6c7);
                        }

                    }

                //65 78
                //loop
                if (TOP_counter >= 1)
                    if (t1->top1->flag_activ == 1) {
                        if (t1->con1 == 1) {
                            c1c1.setFillColor(sf::Color::Transparent);
                            c1c1.setOutlineColor(sf::Color::Blue);
                            window.draw(c1c1);
                        }
                    }

                if (TOP_counter >= 2)
                    if (t2->top2->flag_activ == 1) {
                        if (t2->con2 == 1) {
                            c2c2.setFillColor(sf::Color::Transparent);
                            c2c2.setOutlineColor(sf::Color::Blue);
                            window.draw(c2c2);
                        }
                    }

                if (TOP_counter >= 3)
                    if (t3->top3->flag_activ == 1) {
                        if (t3->con3 == 1) {
                            c3c3.setFillColor(sf::Color::Transparent);
                            c3c3.setOutlineColor(sf::Color::Blue);
                            window.draw(c3c3);
                        }
                    }

                if (TOP_counter >= 4)
                    if (t4->top4->flag_activ == 1) {
                        if (t4->con4 == 1) {
                            c4c4.setFillColor(sf::Color::Transparent);
                            c4c4.setOutlineColor(sf::Color::Blue);
                            window.draw(c4c4);
                        }
                    }

                if (TOP_counter >= 5)
                    if (t5->top5->flag_activ == 1) {
                        if (t5->con5 == 1) {
                            c5c5.setFillColor(sf::Color::Transparent);
                            c5c5.setOutlineColor(sf::Color::Blue);
                            window.draw(c5c5);
                        }
                    }

                if (TOP_counter >= 6)
                    if (t6->top6->flag_activ == 1) {
                        if (t6->con6 == 1) {
                            c6c6.setFillColor(sf::Color::Transparent);
                            c6c6.setOutlineColor(sf::Color::Blue);
                            window.draw(c6c6);
                        }
                    }

                if (TOP_counter >= 7)
                    if (t7->top7->flag_activ == 1) {
                        if (t7->con7 == 1) {
                            c7c7.setFillColor(sf::Color::Transparent);
                            c7c7.setOutlineColor(sf::Color::Blue);
                            window.draw(c7c7);
                        }
                    }

                if (TOP_counter >= 8)
                    if (t8->top8->flag_activ == 1) {
                        if (t8->con8 == 1) {
                            c8c8.setFillColor(sf::Color::Transparent);
                            c8c8.setOutlineColor(sf::Color::Blue);
                            window.draw(c8c8);
                        }
                    }

                //TOPs activathion
                if (t1->flag_activ == 1)
                    window.draw(c1);
                if (t2->flag_activ == 1)
                    window.draw(c2);
                if (t3->flag_activ == 1)
                    window.draw(c3);
                if (t4->flag_activ == 1)
                    window.draw(c4);
                if (t5->flag_activ == 1)
                    window.draw(c5);
                if (t6->flag_activ == 1)
                    window.draw(c6);
                if (t7->flag_activ == 1)
                    window.draw(c7);
                if (t8->flag_activ == 1)
                    window.draw(c8);
                window.display();
            }

        }

        if (flag_menu == 3) {

            int back = 0;
            system("cls");
            cout << "Let's start" << endl;
            check_connectivity();
            cout << "If you wanna come back to the Menu enter 0!" << endl;
            cin >> back;
        }

        if (flag_menu == 4) {
            cout << "Buy" << endl;
        }

        if ((flag_menu != 1) && (flag_menu != 2) && (flag_menu != 3) && (flag_menu != 4)) {
            cout << "Lets try again!!!" << endl;
        }

    }
}

void set_active(int TOP_activation) {
    if (TOP_activation >= 2) {
        t1->activate(1);
        t2->activate(2);

        t1->activate_connections(t1, 1);
        t1->activate_connections(t2, 2);

        t2->activate_connections(t1, 1);
        t2->activate_connections(t2, 2);
    } 

    if (TOP_activation >= 4) {
        t3->activate(3);
        t4->activate(4);

        t1->activate_connections(t3, 3);
        t1->activate_connections(t4, 4);

        t2->activate_connections(t3, 3);
        t2->activate_connections(t4, 4);

        t3->activate_connections(t1, 1);
        t3->activate_connections(t2, 2);
        t3->activate_connections(t3, 3);
        t3->activate_connections(t4, 4);

        t4->activate_connections(t1, 1);
        t4->activate_connections(t2, 2);
        t4->activate_connections(t3, 3);
        t4->activate_connections(t4, 4);
    }

    if (TOP_activation >= 6) {
        t5->activate(5);
        t6->activate(6);

        t1->activate_connections(t5, 5);
        t1->activate_connections(t6, 6);

        t2->activate_connections(t5, 5);
        t2->activate_connections(t6, 6);

        t3->activate_connections(t5, 5);
        t3->activate_connections(t6, 6);

        t4->activate_connections(t5, 5);
        t4->activate_connections(t6, 6);

        t5->activate_connections(t1, 1);
        t5->activate_connections(t2, 2);
        t5->activate_connections(t3, 3);
        t5->activate_connections(t4, 4);
        t5->activate_connections(t5, 5);
        t5->activate_connections(t6, 6);

        t6->activate_connections(t1, 1);
        t6->activate_connections(t2, 2);
        t6->activate_connections(t3, 3);
        t6->activate_connections(t4, 4);
        t6->activate_connections(t5, 5);
        t6->activate_connections(t6, 6);
    }

    if (TOP_activation == 8) {
        t7->activate(7);
        t8->activate(8);

        t1->activate_connections(t7, 7);
        t1->activate_connections(t8, 8);

        t2->activate_connections(t7, 7);
        t2->activate_connections(t8, 8);

        t3->activate_connections(t7, 7);
        t3->activate_connections(t8, 8);

        t4->activate_connections(t7, 7);
        t4->activate_connections(t8, 8);

        t5->activate_connections(t7, 7);
        t5->activate_connections(t8, 8);

        t6->activate_connections(t7, 7);
        t6->activate_connections(t8, 8);

        t7->activate_connections(t1, 1);
        t7->activate_connections(t2, 2);
        t7->activate_connections(t3, 3);
        t7->activate_connections(t4, 4);
        t7->activate_connections(t5, 5);
        t7->activate_connections(t6, 6);
        t7->activate_connections(t7, 7);
        t7->activate_connections(t8, 8);

        t8->activate_connections(t1, 1);
        t8->activate_connections(t2, 2);
        t8->activate_connections(t3, 3);
        t8->activate_connections(t4, 4);
        t8->activate_connections(t5, 5);
        t8->activate_connections(t6, 6);
        t8->activate_connections(t7, 7);
        t8->activate_connections(t8, 8);
    }
}

void enter_func(int st, int fin) {
    if (st == 1) t1->set_connection(fin);
    if (st == 2) t2->set_connection(fin);
    if (st == 3) t3->set_connection(fin);
    if (st == 4) t4->set_connection(fin);
    if (st == 5) t5->set_connection(fin);
    if (st == 6) t6->set_connection(fin);
    if (st == 7) t7->set_connection(fin);
    if (st == 8) t8->set_connection(fin);
}

void check_connectivity() {
    // (n-1)*(n-2)/2
    int summ = 0;
    int CHECK_connectivity = 0;
    int flags_dangerous[9];
    int flag_BIG_DANGEROS = 0;

    for (int i = 0; i < 9; ++i) {
        flags_dangerous[i] = 0;
    }

    if ((t1->con2 == 1) || (t2->con1 == 1)) {
        CHECK_connectivity++;
    }
    if (t1->con2 == t2->con1) {
        if (t1->con2 == 0) {
            flags_dangerous[1]++;
            flags_dangerous[2]++;
        }
        if (t1->con2 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t1->con3 == 1) || (t3->con1 == 1)) {
        CHECK_connectivity++;
    }
    if (t1->con3 == t3->con1) {
        if ((t1->con3 == 0) && (TOP_counter >= 3)) {
            flags_dangerous[1]++; 
            flags_dangerous[3]++;
        }
        if (t1->con3 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t1->con4 == 1) || (t4->con1 == 1)) {
        CHECK_connectivity++;
    }
    if (t1->con4 == t4->con1) {
        if ((t1->con4 == 0) && (TOP_counter >= 4)) {
            flags_dangerous[1]++; 
            flags_dangerous[4]++;
        }
        if (t1->con4 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t1->con5 == 1) || (t5->con1 == 1)) {
        CHECK_connectivity++;
    }
    if (t1->con5 == t5->con1) {
        if ((t1->con5 == 0) && (TOP_counter >= 5)) {
            flags_dangerous[1]++; 
            flags_dangerous[5]++;
        }
        if (t1->con5 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t1->con6 == 1) || (t6->con1 == 1)) {
        CHECK_connectivity++;
    }
    if (t1->con6 == t6->con1) {
        if ((t1->con6 == 0) && (TOP_counter >= 6)){
            flags_dangerous[1]++;
            flags_dangerous[6]++;
        }
        if (t1->con6 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t1->con7 == 1) || (t7->con1 == 1)) {
        CHECK_connectivity++;
    }
    if (t1->con7 == t7->con1) {
        if ((t1->con7 == 0) && (TOP_counter >= 7)) {
            flags_dangerous[1]++;
            flags_dangerous[7]++;
        }
        if (t1->con7 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t1->con8 == 1) || (t8->con1 == 1)) {
        CHECK_connectivity++;
    }
    if (t1->con8 == t8->con1) {
        if ((t1->con8 == 0) && (TOP_counter >= 8)) {
            flags_dangerous[1]++;
            flags_dangerous[8]++;
        }
        if (t1->con8 == 1) {
            CHECK_connectivity++;
        }
    }



    if ((t2->con3 == 1) || (t3->con2 == 1)) {
        CHECK_connectivity++;
    }
    if (t2->con3 == t3->con2) {
        if ((t2->con3 == 0) && (TOP_counter >= 3)){
            flags_dangerous[2]++;
            flags_dangerous[3]++;
}
        if (t2->con3 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t2->con4 == 1) || (t4->con2 == 1)) {
        CHECK_connectivity++;
    }
    if (t2->con4 == t4->con2)  {
        if ((t2->con4 == 0) && (TOP_counter >= 4)) {
            flags_dangerous[2]++;
            flags_dangerous[4]++;
        }
        if (t2->con4 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t2->con5 == 1) || (t5->con2 == 1)) {
        CHECK_connectivity++;
    }
    if (t2->con5 == t5->con2) {
        if ((t2->con5 == 0) && (TOP_counter >= 5)) {
            flags_dangerous[2]++;
            flags_dangerous[5]++;
        }
        if (t2->con5 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t2->con6 == 1) || (t6->con2 == 1)) {
        CHECK_connectivity++;
    }
    if (t2->con6 == t6->con2) {
        if ((t2->con6 == 0) && (TOP_counter >= 6)) {
            flags_dangerous[2]++;
            flags_dangerous[6]++;
        }
        if (t2->con6 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t2->con7 == 1) || (t7->con2 == 1)) {
        CHECK_connectivity++;
    }
    if (t2->con7 == t7->con2) {
        if ((t2->con7 == 0) && (TOP_counter >= 7)) {
            flags_dangerous[2]++;
            flags_dangerous[7]++;
        }
        if (t2->con7 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t2->con8 == 1) || (t8->con2 == 1)) {
        CHECK_connectivity++;
    }
    if (t2->con8 == t8->con2) {
        if ((t2->con8 == 0) && (TOP_counter >= 8)) {
            flags_dangerous[2]++;
            flags_dangerous[8]++;
        }
        if (t2->con8 == 1) {
            CHECK_connectivity++;
        }
    }


    if ((t3->con4 == 1) || (t4->con3 == 1)) {
        CHECK_connectivity++;
    }
    if (t3->con4 == t4->con3) {
        if ((t3->con4 == 0) && (TOP_counter >= 4)) {
            flags_dangerous[3]++;
            flags_dangerous[4]++;
        }
        if (t3->con4 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t3->con5 == 1) || (t5->con3 == 1)) {
        CHECK_connectivity++;
    }
    if (t3->con5 == t5->con3) {
        if ((t3->con5 == 0) && (TOP_counter >= 5)) {
            flags_dangerous[3]++;
            flags_dangerous[5]++;
        }
        if (t3->con5 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t3->con6 == 1) || (t6->con3 == 1)) {
        CHECK_connectivity++;
    }
    if (t3->con6 == t6->con3) {
        if ((t3->con6 == 0) && (TOP_counter >= 6)) {
            flags_dangerous[3]++;
            flags_dangerous[6]++;
        }
        if (t3->con6 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t3->con7 == 1) || (t7->con3 == 1)) {
        CHECK_connectivity++;
    }
    if ((t3->con7 == t7->con3) && (TOP_counter >= 7)) {
        if (t3->con7 == 0) {
            flags_dangerous[3]++;
            flags_dangerous[7]++;
        }
        if (t3->con7 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t3->con8 == 1) || (t8->con3 == 1)) {
        CHECK_connectivity++;
    }
    if ((t3->con8 == t8->con3) && (TOP_counter >= 7)) {
        if (t3->con8 == 0) {
            flags_dangerous[3]++;
            flags_dangerous[8]++;
        }
        if (t3->con8 == 1) {
            CHECK_connectivity++;
        }
    }


    if ((t4->con5 == 1) || (t5->con4 == 1)) {
        CHECK_connectivity++;
    }
    if (t4->con5 == t5->con4) {
        if ((t4->con5 == 0) && (TOP_counter >= 5)) {
            flags_dangerous[4]++;
            flags_dangerous[5]++;
        }
        if (t4->con5 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t4->con6 == 1) || (t6->con4 == 1)) {
        CHECK_connectivity++;
    }
    if ((t4->con6 == t6->con4) && (TOP_counter >= 6)) {
        if (t4->con6 == 0) {
            flags_dangerous[4]++;
            flags_dangerous[6]++;
        }
        if (t4->con6 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t4->con7 == 1) || (t7->con4 == 1)) {
        CHECK_connectivity++;
    }
    if (t4->con7 == t7->con4) {
        if ((t4->con7 == 0) && (TOP_counter >= 7)) {
             flags_dangerous[4]++;
             flags_dangerous[7]++;
        }
        if (t4->con7 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t4->con8 == 1) || (t8->con4 == 1)) {
        CHECK_connectivity++;
    }
    if ((t4->con8 == t8->con4) && (TOP_counter >= 7)){
        if (t4->con8 == 0) {
            flags_dangerous[4]++;
            flags_dangerous[8]++;
        }
        if (t4->con8 == 1) {
            CHECK_connectivity++;
        }
    }


    if ((t5->con6 == 1) || (t6->con5 == 1)) {
        CHECK_connectivity++;
    }
    if (t5->con6 == t6->con5) {
        if ((t5->con6 == 0) && (TOP_counter >= 6)){
            flags_dangerous[5]++;
            flags_dangerous[6]++;
        }
        if (t5->con6 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t5->con7 == 1) || (t7->con5 == 1)) {
        CHECK_connectivity++;
    }
    if (t5->con7 == t7->con5) {
        if ((t5->con7 == 0) && (TOP_counter >= 7)) {
            flags_dangerous[5]++;
            flags_dangerous[7]++;
        }
        if (t5->con7 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t5->con8 == 1) || (t8->con5 == 1)) {
        CHECK_connectivity++;
    }
    if (t5->con8 == t8->con5) {
        if ((t5->con8 == 0) && (TOP_counter >= 8)){
            flags_dangerous[5]++;
            flags_dangerous[8]++;
        }
        if (t5->con8 == 1) {
            CHECK_connectivity++;
        }
    }


    if ((t6->con7 == 1) || (t7->con6 == 1)) {
        CHECK_connectivity++;
    }
    if (t6->con7 == t7->con6) {
        if ((t6->con7 == 0) && (TOP_counter >= 7)){
            flags_dangerous[6]++;
            flags_dangerous[7]++;
        }
        if (t6->con7 == 1) {
            CHECK_connectivity++;
        }
    }

    if ((t6->con8 == 1) || (t8->con6 == 1)) {
        CHECK_connectivity++;
    }
    if (t6->con8 == t8->con6) {
        if ((t6->con8 == 0) && (TOP_counter >= 8)){
            flags_dangerous[6]++;
            flags_dangerous[8]++;
        }
        if (t6->con8 == 1) {
            CHECK_connectivity++;
        }
    }


    if ((t7->con8 == 1) || (t8->con7 == 1)) {
        CHECK_connectivity++;
    }
    if (t7->con8 == t8->con7) {
        if ((t7->con8 == 0) && (TOP_counter >= 8)){
            flags_dangerous[7]++;
            flags_dangerous[8]++;
        }
        if (t7->con8 == 1) {
            CHECK_connectivity++;
        }
    }


    summ = ((TOP_counter - 1) * (TOP_counter - 2)) / 2;

    for (int i = 0; i < 9; ++i) {
        if (flags_dangerous[i] == (TOP_counter - 1))
            flag_BIG_DANGEROS = 1;
    }

    if ((CHECK_connectivity >= summ) && (flag_BIG_DANGEROS != 1)) {
        cout << "Connected graf" << endl;
    }
    else
        cout << "Not connected graf" << endl;
}
            c5c5.setPosition(155, 95);
            //  c5c5.setFillColor(sf::Color::Transparent);
            c5c5.setOutlineThickness(1.f);
            //  c5c5.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c6c6(sf::Vector2f(30.f, 30.f));
            c6c6.setPosition(155, 215);
            //  c6c6.setFillColor(sf::Color::Transparent);
            c6c6.setOutlineThickness(1.f);
            // c6c6.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c7c7(sf::Vector2f(30.f, 30.f));
            c7c7.setPosition(95, 155);
            //  c7c7.setFillColor(sf::Color::Transparent);
            c7c7.setOutlineThickness(1.f);
            // c7c7.setOutlineColor(sf::Color::Blue);

            sf::RectangleShape c8c8(sf::Vector2f(30.f, 30.f));
            c8c8.setPosition(215, 155);
            // c8c8.setFillColor(sf::Color::Transparent);
            c8c8.setOutlineThickness(1.f);
            // c8c8.setOutlineColor(sf::Color::Blue);

            while (window.isOpen())
            {
                sf::Event event;
                while (window.pollEvent(event))
                {
                    if (event.type == sf::Event::Closed)
                        window.close();
                }
                window.clear();

                //lines activations
                if (TOP_counter >= 2)
                    if ((t1->top2->flag_activ == 1) && (TOP_counter >= 2)) {
                        if (t1->con2 == 1) {
                            c1c2.setFillColor(sf::Color::Red);
                            c1c2.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c2);
                        }
                        if (t1->top2->con1 == 1) {
                            c1c2.setFillColor(sf::Color::Transparent);
                            c1c2.setOutlineColor(sf::Color::Yellow);
                            window.draw(c1c2);
                        }
                        if ((t1->con2 == 1) && (t1->top2->con1 == 1)) {
                            c1c2.setFillColor(sf::Color::Red);
                            c1c2.setOutlineColor(sf::Color::Yellow);
                            window.draw(c1c2);
                        }
                        // window.draw(c1c2);
                    }
                if (TOP_counter >= 3)
                    if ((t1->top3->flag_activ == 1) && (TOP_counter >= 3)) {
                        if (t1->con3 == 1) {
                            c1c3.setFillColor(sf::Color::Red);
                            c1c3.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c3);
                        }
                        if (t1->top3->con1 == 1) { // аналогично (t3->con1 == 1)
                            c1c3.setFillColor(sf::Color::Transparent);
                            c1c3.setOutlineColor(sf::Color::Blue);
                            window.draw(c1c3);
                        }
                        if ((t1->con3 == 1) && (t1->top3->con1 == 1)) {
                            c1c3.setFillColor(sf::Color::Red);
                            c1c3.setOutlineColor(sf::Color::Blue);
                            window.draw(c1c3);
                        }

                    }
                if (TOP_counter >= 4)
                    if ((t1->top4->flag_activ == 1) && (TOP_counter >= 4)) {
                        if (t1->con4 == 1) {
                            c1c4.setFillColor(sf::Color::Red);
                            c1c4.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c4);
                        }
                        if (t1->top4->con1 == 1) {
                            c1c4.setFillColor(sf::Color::Transparent);
                            c1c4.setOutlineColor(sf::Color::Green);
                            window.draw(c1c4);
                        }
                        if ((t1->con4 == 1) && (t1->top4->con1 == 1)) {
                            c1c4.setFillColor(sf::Color::Red);
                            c1c4.setOutlineColor(sf::Color::Green);
                            window.draw(c1c4);
                        }

                    }
                if (TOP_counter >= 5)
                    if ((t1->top5->flag_activ == 1) && (TOP_counter >= 5)) {
                        if (t1->con5 == 1) {
                            c1c5.setFillColor(sf::Color::Red);
                            c1c5.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c5);
                        }
                        if (t1->top5->con1 == 1) {
                            c1c5.setFillColor(sf::Color::Transparent);
                            c1c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c1c5);
                        }
                        if ((t1->con5 == 1) && (t1->top5->con1 == 1)) {
                            c1c5.setFillColor(sf::Color::Red);
                            c1c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c1c5);
                        }

                    }
                if (TOP_counter >= 6)
                    if ((t1->top6->flag_activ == 1) && (TOP_counter >= 6)) {
                        if (t1->con6 == 1) {
                            c1c6.setFillColor(sf::Color::Red);
                            c1c6.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c6);
                        }
                        if (t1->top6->con1 == 1) {
                            c1c6.setFillColor(sf::Color::Transparent);
                            c1c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c1c6);

                        }
                        if ((t1->con6 == 1) && (t1->top6->con1 == 1)) {
                            c1c6.setFillColor(sf::Color::Red);
                            c1c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c1c6);
                        }
                    }
                if (TOP_counter >= 7)
                    if ((t1->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t1->con7 == 1) {
                            c1c7.setFillColor(sf::Color::Red);
                            c1c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c7);
                        }
                        if (t1->top7->con1 == 1) {
                            c1c7.setFillColor(sf::Color::Transparent);
                            c1c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c1c7);
                        }
                        if ((t1->con7 == 1) && (t1->top7->con1 == 1)) {
                            c1c7.setFillColor(sf::Color::Red);
                            c1c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c1c7);
                        }

                    }
                if (TOP_counter >= 8)
                    if ((t1->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t1->con8 == 1) {
                            c1c8.setFillColor(sf::Color::Red);
                            c1c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c1c8);

                        }
                        if (t1->top8->con1 == 1) {
                            c1c8.setFillColor(sf::Color::Transparent);
                            c1c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c1c8);
                        }
                        if ((t1->con8 == 1) && (t1->top8->con1 == 1)) {
                            c1c8.setFillColor(sf::Color::Red);
                            c1c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c1c8);
                        }

                    }

                //t2t3 ++
                if (TOP_counter >= 4)
                    if ((t2->top4->flag_activ == 1) && (TOP_counter >= 4)) {
                        if (t2->con4 == 1) {
                            c2c4.setFillColor(sf::Color::Yellow);
                            c2c4.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c4);
                        }
                        if (t2->top4->con2 == 1) {
                            c2c4.setFillColor(sf::Color::Transparent);
                            c2c4.setOutlineColor(sf::Color::Green);
                            window.draw(c2c4);
                        }
                        if ((t2->con4 == 1) && (t2->top4->con2 == 1)) {
                            c2c4.setFillColor(sf::Color::Yellow);
                            c2c4.setOutlineColor(sf::Color::Green);
                            window.draw(c2c4);
                        }

                    }
                if (TOP_counter >= 5)
                    if ((t2->top5->flag_activ == 1) && (TOP_counter >= 5)) {
                        if (t2->con5 == 1) {
                            c2c5.setFillColor(sf::Color::Yellow);
                            c2c5.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c5);
                        }
                        if (t2->top5->con2 == 1) {
                            c2c5.setFillColor(sf::Color::Transparent);
                            c2c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c2c5);
                        }
                        if ((t2->con5 == 1) && (t2->top5->con2 == 1)) {
                            c2c5.setFillColor(sf::Color::Yellow);
                            c2c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c2c5);
                        }

                    }
                if (TOP_counter >= 6)
                    if ((t2->top6->flag_activ == 1) && (TOP_counter >= 6)) {
                        if (t2->con6 == 1) {
                            c2c6.setFillColor(sf::Color::Yellow);
                            c2c6.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c6);
                        }
                        if (t2->top6->con2 == 1) {
                            c2c6.setFillColor(sf::Color::Transparent);
                            c2c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c2c6);
                        }
                        if ((t2->con6 == 1) && (t2->top6->con2 == 1)) {
                            c2c6.setFillColor(sf::Color::Yellow);
                            c2c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c2c6);
                        }

                    }
                if (TOP_counter >= 7)
                    if ((t2->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t2->con7 == 1) {
                            c2c7.setFillColor(sf::Color::Yellow);
                            c2c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c7);
                        }
                        if (t2->top7->con2 == 1) {
                            c2c7.setFillColor(sf::Color::Transparent);
                            c2c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c2c7);
                        }
                        if ((t2->con7 == 1) && (t2->top7->con2 == 1)) {
                            c2c7.setFillColor(sf::Color::Yellow);
                            c2c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c2c7);
                        }

                    }
                if (TOP_counter >= 8)
                    if ((t2->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t2->con8 == 1) {
                            c2c8.setFillColor(sf::Color::Yellow);
                            c2c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c2c8);
                        }
                        if (t2->top8->con2 == 1) {
                            c2c8.setFillColor(sf::Color::Transparent);
                            c2c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c2c8);
                        }
                        if ((t2->con8 == 1) && (t2->top8->con2 == 1)) {
                            c2c8.setFillColor(sf::Color::Yellow);
                            c2c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c2c8);
                        }

                    }

                //34++
                if (TOP_counter >= 5)
                    if ((t3->top5->flag_activ == 1) && (TOP_counter >= 5)) {
                        if (t3->con5 == 1) {
                            c3c5.setFillColor(sf::Color::Blue);
                            c3c5.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c5);
                        }
                        if (t3->top5->con3 == 1) {
                            c3c5.setFillColor(sf::Color::Transparent);
                            c3c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c3c5);
                        }
                        if ((t3->con5 == 1) && (t3->top5->con3 == 1)) {
                            c3c5.setFillColor(sf::Color::Blue);
                            c3c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c3c5);
                        }

                    }
                //36++ 37++
                if (TOP_counter >= 8)
                    if ((t3->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t3->con8 == 1) {
                            c3c8.setFillColor(sf::Color::Blue);
                            c3c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c8);
                        }
                        if (t3->top8->con3 == 1) {
                            c3c8.setFillColor(sf::Color::Transparent);
                            c3c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c3c8);
                        }
                        if ((t3->con8 == 1) && (t3->top8->con3 == 1)) {
                            c3c8.setFillColor(sf::Color::Blue);
                            c3c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c3c8);
                        }

                    }
                if (TOP_counter >= 7)
                    if ((t3->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t3->con7 == 1) {
                            c3c7.setFillColor(sf::Color::Blue);
                            c3c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c7);
                        }
                        if (t3->top7->con3 == 1) {
                            c3c7.setFillColor(sf::Color::Transparent);
                            c3c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c3c7);
                        }
                        if ((t3->con7 == 1) && (t3->top7->con3 == 1)) {
                            c3c7.setFillColor(sf::Color::Blue);
                            c3c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c3c7);
                        }

                    }
                if (TOP_counter >= 6)
                    if ((t3->top6->flag_activ == 1) && (TOP_counter >= 6)) {
                        if (t3->con6 == 1) {
                            c3c6.setFillColor(sf::Color::Blue);
                            c3c6.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c6);
                        }
                        if (t3->top6->con3 == 1) {
                            c3c6.setFillColor(sf::Color::Transparent);
                            c3c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c3c6);
                        }
                        if ((t3->con6 == 1) && (t3->top6->con3 == 1)) {
                            c3c6.setFillColor(sf::Color::Blue);
                            c3c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c3c6);
                        }

                    }
                if (TOP_counter >= 4)
                    if ((t3->top4->flag_activ == 1) && (TOP_counter >= 4)) {
                        if (t3->con4 == 1) {
                            c3c4.setFillColor(sf::Color::Blue);
                            c3c4.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c4);
                        }
                        if (t3->top4->con3 == 1) {
                            c3c4.setFillColor(sf::Color::Transparent);
                            c3c4.setFillColor(sf::Color::Green);
                            window.draw(c3c4);
                        }
                        if ((t3->con4 == 1) && (t3->top4->con3 == 1)) {
                            c3c4.setFillColor(sf::Color::Blue);
                            c3c4.setFillColor(sf::Color::Green);
                            window.draw(c3c4);
                        }

                    }
                if (TOP_counter > 2)
                    if ((t3->top2->flag_activ == 1) && (TOP_counter >= 2)) {
                        if (t3->con2 == 1) {
                            c3c2.setFillColor(sf::Color::Blue);
                            c3c2.setOutlineColor(sf::Color::Transparent);
                            window.draw(c3c2);
                        }
                        if (t3->top2->con3 == 1) {
                            c3c2.setFillColor(sf::Color::Transparent);
                            c3c2.setFillColor(sf::Color::Yellow);
                            window.draw(c3c2);
                        }
                        if ((t3->con2 == 1) && (t3->top2->con3 == 1)) {
                            c3c2.setFillColor(sf::Color::Blue);
                            c3c2.setFillColor(sf::Color::Yellow);
                            window.draw(c3c2);
                        }

                    }

                if (TOP_counter >= 8)
                    if ((t4->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t4->con8 == 1) {
                            c4c8.setFillColor(sf::Color::Green);
                            c4c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c4c8);
                        }
                        if (t4->top8->con4 == 1) {
                            c4c8.setFillColor(sf::Color::Transparent);
                            c4c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c4c8);
                        }
                        if ((t4->con8 == 1) && (t4->top8->con4 == 1)) {
                            c4c8.setFillColor(sf::Color::Green);
                            c4c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c4c8);
                        }

                    }

                if (TOP_counter >= 6)
                    if ((t4->top6->flag_activ == 1) && (TOP_counter >= 6)) {
                        if (t4->con6 == 1) {
                            c4c6.setFillColor(sf::Color::Green);
                            c4c6.setOutlineColor(sf::Color::Transparent);
                            window.draw(c4c6);
                        }
                        if (t4->top6->con4 == 1) {
                            c4c6.setFillColor(sf::Color::Transparent);
                            c4c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c4c6);
                        }
                        if ((t4->con6 == 1) && (t4->top6->con4 == 1)) {
                            c4c6.setFillColor(sf::Color::Green);
                            c4c6.setOutlineColor(sf::Color::Cyan);
                            window.draw(c4c6);
                        }

                    }
                if (TOP_counter >= 5)
                    if ((t4->top5->flag_activ == 1) && (TOP_counter >= 5)) {
                        if (t4->con5 == 1) {
                            c4c5.setFillColor(sf::Color::Green);
                            c4c5.setOutlineColor(sf::Color::Transparent);
                            window.draw(c4c6);
                        }
                        if (t4->top5->con4 == 1) {
                            c4c5.setFillColor(sf::Color::Transparent);
                            c4c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c4c6);
                        }
                        if ((t4->con5 == 1) && (t4->top5->con4 == 1)) {
                            c4c8.setFillColor(sf::Color::Green);
                            c4c5.setOutlineColor(sf::Color::Magenta);
                            window.draw(c4c6);
                        }

                    }
                if (TOP_counter >= 7)
                    if (t4->top7->flag_activ == 1) {
                        if (t4->con7 == 1) {
                            c4c7.setFillColor(sf::Color::Green);
                            c4c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c4c7);
                        }
                        if (t4->top7->con4 == 1) {
                            c4c7.setFillColor(sf::Color::Transparent);
                            c4c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c4c7);
                        }
                        if ((t4->con7 == 1) && (t4->top7->con4 == 1)) {
                            c4c7.setFillColor(sf::Color::Green);
                            c4c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c4c7);
                        }

                    }


                if (TOP_counter >= 7)
                    if ((t5->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t5->con7 == 1) {
                            c5c7.setFillColor(sf::Color::Magenta);
                            c5c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c5c7);
                        }
                        if (t5->top7->con5 == 1) {
                            c5c7.setFillColor(sf::Color::Transparent);
                            c5c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c5c7);
                        }
                        if ((t5->con7 == 1) && (t5->top7->con5 == 1)) {
                            c5c7.setFillColor(sf::Color::Magenta);
                            c5c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c5c7);
                        }

                    }
                if (TOP_counter >= 8)
                    if ((t5->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t5->con8 == 1) {
                            c5c8.setFillColor(sf::Color::Magenta);
                            c5c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c5c8);
                        }
                        if (t5->top8->con5 == 1) {
                            c5c8.setFillColor(sf::Color::Transparent);
                            c5c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c5c8);
                        }
                        if ((t5->con8 == 1) && (t5->top8->con5 == 1)) {
                            c5c8.setFillColor(sf::Color::Magenta);
                            c5c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c5c8);
                        }

                    }

                if (TOP_counter >= 8)
                    if ((t6->top8->flag_activ == 1) && (TOP_counter >= 8)) {
                        if (t6->con8 == 1) {
                            c6c8.setFillColor(sf::Color::Cyan);
                            c6c8.setOutlineColor(sf::Color::Transparent);
                            window.draw(c6c8);
                        }
                        if (t6->top8->con6 == 1) {
                            c6c8.setFillColor(sf::Color::Transparent);
                            c6c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c6c8);
                        }
                        if ((t6->con8 == 1) && (t6->top8->con6 == 1)) {
                            c6c8.setFillColor(sf::Color::Cyan);
                            c5c8.setOutlineColor(sf::Color(128, 128, 0));
                            window.draw(c6c8);
                        }

                    }
                if (TOP_counter >= 7)
                    if ((t6->top7->flag_activ == 1) && (TOP_counter >= 7)) {
                        if (t6->con7 == 1) {
                            c6c7.setFillColor(sf::Color::Cyan);
                            c6c7.setOutlineColor(sf::Color::Transparent);
                            window.draw(c6c7);

                        }
                        if (t6->top7->con6 == 1) {
                            c6c7.setFillColor(sf::Color::Transparent);
                            c6c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c6c7);
                        }
                        if ((t6->con7 == 1) && (t6->top7->con6 == 1)) {
                            c6c7.setFillColor(sf::Color::Cyan);
                            c6c7.setOutlineColor(sf::Color(128, 128, 128));
                            window.draw(c6c7);
                        }

                    }

                //65 78
                //loop
                if (TOP_counter >= 1)
                    if (t1->top1->flag_activ == 1) {
                        if (t1->con1 == 1) {
                            c1c1.setFillColor(sf::Color::Transparent);
                            c1c1.setOutlineColor(sf::Color::Blue);
                            window.draw(c1c1);
                        }
                    }

                if (TOP_counter >= 2)
                    if (t2->top2->flag_activ == 1) {
                        if (t2->con2 == 1) {
                            c2c2.setFillColor(sf::Color::Transparent);
                            c2c2.setOutlineColor(sf::Color::Blue);
                            window.draw(c2c2);
                        }
                    }

                if (TOP_counter >= 3)
                    if (t3->top3->flag_activ == 1) {
                        if (t3->con3 == 1) {
                            c3c3.setFillColor(sf::Color::Transparent);
                            c3c3.setOutlineColor(sf::Color::Blue);
                            window.draw(c3c3);
                        }
                    }

                if (TOP_counter >= 4)
                    if (t4->top4->flag_activ == 1) {
                        if (t4->con4 == 1) {
                            c4c4.setFillColor(sf::Color::Transparent);
                            c4c4.setOutlineColor(sf::Color::Blue);
                            window.draw(c4c4);
                        }
                    }

                if (TOP_counter >= 5)
                    if (t5->top5->flag_activ == 1) {
                        if (t5->con5 == 1) {
                            c5c5.setFillColor(sf::Color::Transparent);
                            c5c5.setOutlineColor(sf::Color::Blue);
                            window.draw(c5c5);
                        }
                    }

                if (TOP_counter >= 6)
                    if (t6->top6->flag_activ == 1) {
                        if (t6->con6 == 1) {
                            c6c6.setFillColor(sf::Color::Transparent);
                            c6c6.setOutlineColor(sf::Color::Blue);
                            window.draw(c6c6);
                        }
                    }

                if (TOP_counter >= 7)
                    if (t7->top7->flag_activ == 1) {
                        if (t7->con7 == 1) {
                            c7c7.setFillColor(sf::Color::Transparent);
                            c7c7.setOutlineColor(sf::Color::Blue);
                            window.draw(c7c7);
                        }
                    }

                if (TOP_counter >= 8)
                    if (t8->top8->flag_activ == 1) {
                        if (t8->con8 == 1) {
                            c8c8.setFillColor(sf::Color::Transparent);
                            c8c8.setOutlineColor(sf::Color::Blue);
                            window.draw(c8c8);
                        }
                    }

                //TOPs activathion
                if (t1->flag_activ == 1)
                    window.draw(c1);
                if (t2->flag_activ == 1)
                    window.draw(c2);
                if (t3->flag_activ == 1)
                    window.draw(c3);
                if (t4->flag_activ == 1)
                    window.draw(c4);
                if (t5->flag_activ == 1)
                    window.draw(c5);
                if (t6->flag_activ == 1)
                    window.draw(c6);
                if (t7->flag_activ == 1)
                    window.draw(c7);
                if (t8->flag_activ == 1)
                    window.draw(c8);
                window.display();
            }

        }

        if (flag_menu == 3) {
            cout << "Buy" << endl;
        }

        if ((flag_menu != 1) && (flag_menu != 2) && (flag_menu != 3)) {
            cout << "Lets try again!!!" << endl;
        }


    }

}

void set_active(int TOP_activation) {
    if (TOP_activation >= 2) {
        t1->activate(1);
        t2->activate(2);

        t1->activate_connections(t1, 1);
        t1->activate_connections(t2, 2);

        t2->activate_connections(t1, 1);
        t2->activate_connections(t2, 2);
    } 

    if (TOP_activation >= 4) {
        t3->activate(3);
        t4->activate(4);

        t1->activate_connections(t3, 3);
        t1->activate_connections(t4, 4);

        t2->activate_connections(t3, 3);
        t2->activate_connections(t4, 4);

        t3->activate_connections(t1, 1);
        t3->activate_connections(t2, 2);
        t3->activate_connections(t3, 3);
        t3->activate_connections(t4, 4);

        t4->activate_connections(t1, 1);
        t4->activate_connections(t2, 2);
        t4->activate_connections(t3, 3);
        t4->activate_connections(t4, 4);
    }

    if (TOP_activation >= 6) {
        t5->activate(5);
        t6->activate(6);

        t1->activate_connections(t5, 5);
        t1->activate_connections(t6, 6);

        t2->activate_connections(t5, 5);
        t2->activate_connections(t6, 6);

        t3->activate_connections(t5, 5);
        t3->activate_connections(t6, 6);

        t4->activate_connections(t5, 5);
        t4->activate_connections(t6, 6);

        t5->activate_connections(t1, 1);
        t5->activate_connections(t2, 2);
        t5->activate_connections(t3, 3);
        t5->activate_connections(t4, 4);
        t5->activate_connections(t5, 5);
        t5->activate_connections(t6, 6);

        t6->activate_connections(t1, 1);
        t6->activate_connections(t2, 2);
        t6->activate_connections(t3, 3);
        t6->activate_connections(t4, 4);
        t6->activate_connections(t5, 5);
        t6->activate_connections(t6, 6);
    }

    if (TOP_activation == 8) {
        t7->activate(7);
        t8->activate(8);

        t1->activate_connections(t7, 7);
        t1->activate_connections(t8, 8);

        t2->activate_connections(t7, 7);
        t2->activate_connections(t8, 8);

        t3->activate_connections(t7, 7);
        t3->activate_connections(t8, 8);

        t4->activate_connections(t7, 7);
        t4->activate_connections(t8, 8);

        t5->activate_connections(t7, 7);
        t5->activate_connections(t8, 8);

        t6->activate_connections(t7, 7);
        t6->activate_connections(t8, 8);

        t7->activate_connections(t1, 1);
        t7->activate_connections(t2, 2);
        t7->activate_connections(t3, 3);
        t7->activate_connections(t4, 4);
        t7->activate_connections(t5, 5);
        t7->activate_connections(t6, 6);
        t7->activate_connections(t7, 7);
        t7->activate_connections(t8, 8);

        t8->activate_connections(t1, 1);
        t8->activate_connections(t2, 2);
        t8->activate_connections(t3, 3);
        t8->activate_connections(t4, 4);
        t8->activate_connections(t5, 5);
        t8->activate_connections(t6, 6);
        t8->activate_connections(t7, 7);
        t8->activate_connections(t8, 8);
    }

}
void enter_func(int st, int fin) {
    if (st == 1) t1->set_connection(fin);
    if (st == 2) t2->set_connection(fin);
    if (st == 3) t3->set_connection(fin);
    if (st == 4) t4->set_connection(fin);
    if (st == 5) t5->set_connection(fin);
    if (st == 6) t6->set_connection(fin);
    if (st == 7) t7->set_connection(fin);
    if (st == 8) t8->set_connection(fin);
}
