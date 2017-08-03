//
// Created by ThinkPad on 2017/8/2.
//

#ifndef YUKI_AI_H
#define YUKI_AI_H

#include "Board.h"
#include <signal.h>
#include <unistd.h>
#include <csetjmp>
#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
#include <cstdlib>
#include <ctime>

jmp_buf env;
void alarm_handler(int)
{
    longjmp(env, 1);
}


class Ai
{
public:
    Board brd;
    int currBotcolor = white;
    int GRIDSIZE = gridsize;
    int timeout_turn = 1000;
    int time_left = 0;
    int max_memory = 0;
    int maxdepth = 20;
    int timeout_match = 100000;
    int searchdepth = 0;
    int searchCount = 0;
    Point answer;
    vector<Point> sons;
    void updateMove() {
        brd.procstep(answer.x, answer.y, currBotcolor);
    }
    void restart() {
        brd.restart();
    }
    void open() {
        if (brd.turn == 0) {
            answer = Point(7, 7);
            updateMove();
            print();
        }
        else {
            idfs();
            updateMove();
            print();
        }
    }
    int search(int alpha, int beta, int depth, int color) {
        vector<Point>::iterator iter;
        for (iter = sons.begin(); iter != sons.end(); iter++) {
            brd.procstep(iter->x, iter->y, color);
            if (brd.gameover(iter->x, iter->y, color)) {
                brd.cancelstep(iter->x, iter->y, color);
                answer = *iter;
                return 1000;
            }
            int value = - abpruning(-beta, -alpha, depth - 1, color ^ 1);
            brd.cancelstep(iter->x, iter->y, color);
            (*iter).value = value;
            if (value > alpha) {
                alpha = value;
                answer = *iter;
            }
        }
    }
    int abpruning(int alpha, int beta, int depth, int color) {
        searchCount++;
        if(depth == 0)
            return color == white ? brd.grdVal : -brd.grdVal;
        vector<Point> temp = brd.generateNodes(color);
        if (temp.size() == 0)
            return 0;//平局???
        vector<Point>::iterator iter;
        for (iter = temp.begin(); iter != temp.end(); iter++) {
            brd.procstep(iter->x, iter->y, color);
            if (brd.gameover(iter->x, iter->y, color)) {
                brd.cancelstep(iter->x, iter->y, color);
                return 1000;
            }
            int value = - abpruning(-beta, -alpha, depth - 1, color ^ 1);
            brd.cancelstep(iter->x, iter->y, color);
            if (value >= beta)
                return beta;
            if (value > alpha) {
                alpha = value;
                answer = *iter;
            }
        }
        return alpha;
    }
    int idfs() {
        signal(SIGALRM, alarm_handler);
        ualarm(timeout_turn * 950, 0);
        sons = brd.generateNodes(currBotcolor);
        if (!setjmp(env)) {
            for (searchdepth = 1; searchdepth < maxdepth; searchdepth++) {
                search(-1000, 1000, searchdepth, currBotcolor);
                sort(sons.begin(), sons.end(), compare_point);
            }
        }
    }
    void print() {
        cout << "MESSAGE";
        cout << " level=" << searchdepth;
        cout << " val=" << answer.value;
        cout << " NPS=" << (double)searchCount / ((double) timeout_turn * 0.95 / 1000.0 ) << "k" << endl;
        cout << answer.x << "," << answer.y << endl;
    }
};

#endif //YUKI_AI_H
