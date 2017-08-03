//
// Created by ThinkPad on 2017/8/2.
//

#ifndef YUKI_LINE_H
#define YUKI_LINE_H

#include <cstdint>
#include <algorithm>
#include "constant.h"

using namespace std;

class Line
{
public:
    int mask = 0;
    int value = 0;
    bool Five(int pos_in_line) {
        for (int movebit = max(pos_in_line > 14 ? 15 : 0, pos_in_line - 4); movebit <= pos_in_line; movebit++) {
            if ((bool)(mask >> movebit & constantFive))
                return true;
        }
        return false;
    }
    void change(int pos_in_line) {
        mask ^= ((int16_t) 1 << pos_in_line);
    }
    bool check(int pos_in_line) {
        return static_cast<bool>(mask >> pos_in_line & (int16_t) 1);
    }
    int eval_point(int pos_in_line) {
        //以白方角度进行估值
        int myValue = 0, opValue = 0;
        for (int movebit = max(pos_in_line - 4, 0); movebit <= pos_in_line; movebit++) {
            if ((bool)(mask >> (movebit + 15) & 31))
                continue;
            myValue += Score[mask >> movebit & 31];
        }
        for (int movebit = max(pos_in_line - 4, 15); movebit <= pos_in_line; movebit++) {
            if ((bool)(mask >> (movebit - 15) & 31))
                continue;
            opValue += Score[mask >> movebit & 31];
        }
        return myValue - opValue;
    }
    int deltaVal() {
        //以白方角度进行估值
        int startPos, endPos;
        int opstart, opend;
        int myValue = 0, opValue = 0;
        startPos = __builtin_ctz(mask);
        endPos = 31 - __builtin_clz(mask & 32767);
        opstart = __builtin_ctz(mask & (32767 << 15));
        opend = 31 - __builtin_clz(mask);
        for (int movebit = max(startPos - 4, 0); movebit <= endPos; movebit++) {
            if ((bool)(mask >> (movebit + 15) & 31))
                continue;
            myValue += Score[mask >> movebit & 31];
        }
        for (int movebit = max(opstart - 4, 15); movebit <= opend; movebit++) {
            if ((bool)(mask >> (movebit - 15) &31))
                continue;
            opValue += Score[mask >> movebit & 31];
        }
        int oldValue = value;
        value = myValue - opValue;
        return value - oldValue;
        /*
        if (mycolor == 0) {
            startPos = __builtin_ctz(mask);
            endPos = 31 - __builtin_clz(mask & 32767);
            opstart = __builtin_ctz(mask & (32767 << 15));
            opend = 31 - __builtin_clz(mask);
            for (int movebit = max(startPos - 4, 0); movebit <= endPos; movebit++) {
                if ((bool)(mask >> (movebit + 15) & 31))
                    continue;
                myValue += Score[mask >> movebit & 31];
            }
            for (int movebit = max(opstart - 4, 15); movebit <= opend; movebit++) {
                if ((bool)(mask >> (movebit - 15) &31))
                    continue;
                opValue += Score[mask >> movebit & 31];
            }
        } else {
            startPos = __builtin_ctz(mask & (32767 << 15));
            endPos = 31 - __builtin_clz(mask);
            opstart = __builtin_ctz(mask);
            opend  = 31 - __builtin_clz(mask & 32767);
            for (int movebit = max(startPos - 4, 15); movebit <= endPos; movebit++) {
                if ((bool)(mask >> (movebit - 15) & 31))
                    continue;
                myValue += Score[mask >> movebit & 31];
            }
            for (int movebit = max(opstart - 4, 0); movebit <= opend; movebit++) {
                if ((bool)(mask >> (movebit + 15) &31))
                    continue;
                opValue += Score[mask >> movebit & 31];
            }
        }*/

    }
};

#endif //YUKI_LINE_H
