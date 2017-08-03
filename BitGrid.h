//
// Created by ThinkPad on 2017/8/2.
//

#ifndef YUKI_BITGRID_H
#define YUKI_BITGRID_H

#include <vector>
#include "constant.h"


using namespace std;





struct Point
{
    int x = -1, y = -1;
    int value = 0;
    Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
    Point() {;}
};

bool compare_point(const Point &a, const Point &b) {
    return a.value > b.value;
}

class BitGrid
{
//private:

public:
    long long state[4] = {0LL};
    void init(long long a, long long b, long long c, long long d) {
        state[0] = a;
        state[1] = b;
        state[2] = c;
        state[3] = d;
    }
    inline void change(int x, int y) {
        state[point_to_grid[x][y][0]] ^= (1LL << point_to_grid[x][y][1]);
    }
    inline bool check(int x, int y) {
        return static_cast<bool>((state[point_to_grid[x][y][0]] >> point_to_grid[x][y][1]) & 1LL);
    }
    bool isTrue() {
        return (bool)(state[0] | state[1] | state[2] | state[3]);
    }
    BitGrid operator & (const BitGrid &a) {
        for (int i = 0; i < 4; i++) {
            state[i] &= a.state[i];
        }
    }
    BitGrid operator ~ () {
        for (int i = 0; i < 4; i++) {
            state[i] = ~state[i];
        }
    }
    BitGrid operator ^ (const BitGrid &a) {
        for (int i = 0; i < 4; i++) {
            state[i] ^= a.state[i];
        }
    }
    BitGrid operator | (const BitGrid &a) {
        for (int i = 0; i < 4; i++) {
            state[i] |= a.state[i];
        }
    }
    int getOnepos(vector<Point> &ret) {
        for (int i = 0; i < 4; i++) {
            int pos = 0;
            for (long long curr = state[i]; curr; curr ^= (1LL << pos)) {
                pos = __builtin_ctzll(curr);
                Point temp;
                temp.x = grid_to_point[i][pos][0];
                temp.y = grid_to_point[i][pos][1];
                ret.push_back(temp);
            }
        }
    }
};

BitGrid bitMask[gridsize][gridsize];

#endif //YUKI_BITGRID_H
