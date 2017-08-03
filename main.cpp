#include <iostream>
#include "constant.h"
#include "BitGrid.h"
#include "Ai.h"
#include <string>
#include <sstream>

using namespace std;

Ai Yuki;

void gomoku() {
    string command;
    Point input;
    char dot;
    int size = 15;
    while (1) {
        cin >> command;
        for (size_t i = 0; i < command.size(); i++) {
            char &c = command[i];
            if (c >= 'a' && c <= 'z') {
                c += 'A' - 'a';
            }
        }
        if (command == "START") {
            cin >> size;
            if (size != gridsize) {
                cout << "ERROR" << endl;
            } else {
                cout << "OK" << endl;
            }
        } else if (command == "RESTART") {
            Yuki.restart();
            cout << "OK" << endl;
        } else if (command == "BEGIN") {
            Yuki.currBotcolor = black;
            Yuki.open();
        } else if (command == "TURN") {
            cin >> input.x >> dot >> input.y;
            if (input.x < 0 || input.x >= gridsize || input.y < 0 || input.y >= gridsize)
                cout << "ERROR" << endl;
            else {
                Yuki.brd.procstep(input.x, input.y, Yuki.currBotcolor ^ 1);
                Yuki.idfs();
                Yuki.updateMove();
                Yuki.print();
            }
        } else if (command == "BOARD") {
            int c;
            Point m;
            stringstream ss;
            Yuki.restart();
            cin >> command;
            while (command != "DONE") {
                ss.clear();
                ss << command;
                ss >> m.x >> dot >> m.y >> dot >> c;
                if (m.x < 0 || m.x >= gridsize || m.y < 0 || m.y >= gridsize) {
                    cout << "ERROR" << endl;
                } else {
                    Yuki.brd.procstep(m.x, m.y, c == 1 ? Yuki.currBotcolor : Yuki.currBotcolor ^ 1);
                }
                cin >> command;
            }
            if (c == 2) {
                Yuki.idfs();
                Yuki.updateMove();
                Yuki.print();
            }
        } else if (command == "INFO") {
            int value;
            string key;
            cin >> key;
            if (key == "timeout_turn") {
                cin >> value;
                if (value != 0)
                    Yuki.timeout_turn = value;

            } else if (key == "timeout_match") {
                cin >> value;
                if (value != 0)
                    Yuki.timeout_match = value;

            } else if (key == "time_left") {
                cin >> value;
                if (value != 0)
                    Yuki.time_left = value;

            } else if (key == "max_memory") {
                cin >> value;
                Yuki.max_memory = value;
                // TODO
            } else if (key == "game_type") {
                cin >> value;
                // TODO
            } else if (key == "rule") {
                cin >> value;
                // TODO
            } else if (key == "folder") {
                string t;
                cin >> t;
            }
        } else if (command == "END") {
            break;
        }
    }
}

int main() {
    gomoku();
}