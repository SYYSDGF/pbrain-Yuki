//
// Created by ThinkPad on 2017/8/2.
//

#ifndef YUKI_BOARD_H
#define YUKI_BOARD_H

#include "BitGrid.h"
#include "Line.h"
#include "constant.h"
#include <stack>

#define black 1
#define white 0

void init() {
    bitMask[0][0].init(30065229830,0,0,0);
    bitMask[0][1].init(64425492493,0,0,0);
    bitMask[0][2].init(133146017819,0,0,0);
    bitMask[0][3].init(266292035638,0,0,0);
    bitMask[0][4].init(532584071276,0,0,0);
    bitMask[0][5].init(1065168142552,0,0,0);
    bitMask[0][6].init(2130336285104,0,0,0);
    bitMask[0][7].init(4260672570208,0,0,0);
    bitMask[0][8].init(8521345140416,0,0,0);
    bitMask[0][9].init(17042690280832,0,0,0);
    bitMask[0][10].init(34085380561664,0,0,0);
    bitMask[0][11].init(68170761123328,0,0,0);
    bitMask[0][12].init(136341522246656,0,0,0);
    bitMask[0][13].init(131943408621568,0,0,0);
    bitMask[0][14].init(123147181371392,0,0,0);
    bitMask[1][0].init(1970354902138887,0,0,0);
    bitMask[1][1].init(4222189076021263,0,0,0);
    bitMask[1][2].init(8725857423786015,0,0,0);
    bitMask[1][3].init(17451714847572030,0,0,0);
    bitMask[1][4].init(34903429695144060,0,0,0);
    bitMask[1][5].init(69806859390288120,0,0,0);
    bitMask[1][6].init(139613718780576240,0,0,0);
    bitMask[1][7].init(279227437561152480,0,0,0);
    bitMask[1][8].init(558454875122304960,0,0,0);
    bitMask[1][9].init(1116909750244609920,0,0,0);
    bitMask[1][10].init(2233819500489219840,0,0,0);
    bitMask[1][11].init(4467639000978439680,0,0,0);
    bitMask[1][12].init(8935278001956879360,0,0,0);
    bitMask[1][13].init(8647043227423111168,0,0,0);
    bitMask[1][14].init(8070573678355574784,0,0,0);
    bitMask[2][0].init(1970350607237127,7,0,0);
    bitMask[2][1].init(4222180486217743,15,0,0);
    bitMask[2][2].init(8725840244178975,31,0,0);
    bitMask[2][3].init(17451680488357950,62,0,0);
    bitMask[2][4].init(34903360976715900,124,0,0);
    bitMask[2][5].init(69806721953431800,248,0,0);
    bitMask[2][6].init(139613443906863600,496,0,0);
    bitMask[2][7].init(279226887813727200,992,0,0);
    bitMask[2][8].init(558453775627454400,1984,0,0);
    bitMask[2][9].init(1116907551254908800,3968,0,0);
    bitMask[2][10].init(2233815102509817600,7936,0,0);
    bitMask[2][11].init(4467630205019635200,15872,0,0);
    bitMask[2][12].init(8935260410039270400,31744,0,0);
    bitMask[2][13].init(8647008043587893248,30720,0,0);
    bitMask[2][14].init(8070503310685138944,28672,0,0);
    bitMask[3][0].init(1688879925493760,458759,0,0);
    bitMask[3][1].init(3659239122731008,983055,0,0);
    bitMask[3][2].init(7599957517205504,2031647,0,0);
    bitMask[3][3].init(15199915034411008,4063294,0,0);
    bitMask[3][4].init(30399830068822016,8126588,0,0);
    bitMask[3][5].init(60799660137644032,16253176,0,0);
    bitMask[3][6].init(121599320275288064,32506352,0,0);
    bitMask[3][7].init(243198640550576128,65012704,0,0);
    bitMask[3][8].init(486397281101152256,130025408,0,0);
    bitMask[3][9].init(972794562202304512,260050816,0,0);
    bitMask[3][10].init(1945589124404609024,520101632,0,0);
    bitMask[3][11].init(3891178248809218048,1040203264,0,0);
    bitMask[3][12].init(7782356497618436096,2080406528,0,0);
    bitMask[3][13].init(6341200218746257408,2013296640,0,0);
    bitMask[3][14].init(3458887661001900032,1879076864,0,0);
    bitMask[4][0].init(1970354901745664,30065229830,0,0);
    bitMask[4][1].init(4222189075169280,64425492493,0,0);
    bitMask[4][2].init(8725857422016512,133146017819,0,0);
    bitMask[4][3].init(17451714844033024,266292035638,0,0);
    bitMask[4][4].init(34903429688066048,532584071276,0,0);
    bitMask[4][5].init(69806859376132096,1065168142552,0,0);
    bitMask[4][6].init(139613718752264192,2130336285104,0,0);
    bitMask[4][7].init(279227437504528384,4260672570208,0,0);
    bitMask[4][8].init(558454875009056768,8521345140416,0,0);
    bitMask[4][9].init(1116909750018113536,17042690280832,0,0);
    bitMask[4][10].init(2233819500036227072,34085380561664,0,0);
    bitMask[4][11].init(4467639000072454144,68170761123328,0,0);
    bitMask[4][12].init(8935278000144908288,136341522246656,0,0);
    bitMask[4][13].init(8647043225946685440,131943408621568,0,0);
    bitMask[4][14].init(8070573677550239744,123147181371392,0,0);
    bitMask[5][0].init(1970324836974592,1970354902138887,0,0);
    bitMask[5][1].init(4222124650659840,4222189076021263,0,0);
    bitMask[5][2].init(8725724278030336,8725857423786015,0,0);
    bitMask[5][3].init(17451448556060672,17451714847572030,0,0);
    bitMask[5][4].init(34902897112121344,34903429695144060,0,0);
    bitMask[5][5].init(69805794224242688,69806859390288120,0,0);
    bitMask[5][6].init(139611588448485376,139613718780576240,0,0);
    bitMask[5][7].init(279223176896970752,279227437561152480,0,0);
    bitMask[5][8].init(558446353793941504,558454875122304960,0,0);
    bitMask[5][9].init(1116892707587883008,1116909750244609920,0,0);
    bitMask[5][10].init(2233785415175766016,2233819500489219840,0,0);
    bitMask[5][11].init(4467570830351532032,4467639000978439680,0,0);
    bitMask[5][12].init(8935141660703064064,8935278001956879360,0,0);
    bitMask[5][13].init(8646911284551352320,8647043227423111168,0,0);
    bitMask[5][14].init(8070450532247928832,8070573678355574784,0,0);
    bitMask[6][0].init(0,1970350607237127,7,0);
    bitMask[6][1].init(0,4222180486217743,15,0);
    bitMask[6][2].init(0,8725840244178975,31,0);
    bitMask[6][3].init(0,17451680488357950,62,0);
    bitMask[6][4].init(0,34903360976715900,124,0);
    bitMask[6][5].init(0,69806721953431800,248,0);
    bitMask[6][6].init(0,139613443906863600,496,0);
    bitMask[6][7].init(0,279226887813727200,992,0);
    bitMask[6][8].init(0,558453775627454400,1984,0);
    bitMask[6][9].init(0,1116907551254908800,3968,0);
    bitMask[6][10].init(0,2233815102509817600,7936,0);
    bitMask[6][11].init(0,4467630205019635200,15872,0);
    bitMask[6][12].init(0,8935260410039270400,31744,0);
    bitMask[6][13].init(0,8647008043587893248,30720,0);
    bitMask[6][14].init(0,8070503310685138944,28672,0);
    bitMask[7][0].init(0,1688879925493760,458759,0);
    bitMask[7][1].init(0,3659239122731008,983055,0);
    bitMask[7][2].init(0,7599957517205504,2031647,0);
    bitMask[7][3].init(0,15199915034411008,4063294,0);
    bitMask[7][4].init(0,30399830068822016,8126588,0);
    bitMask[7][5].init(0,60799660137644032,16253176,0);
    bitMask[7][6].init(0,121599320275288064,32506352,0);
    bitMask[7][7].init(0,243198640550576128,65012704,0);
    bitMask[7][8].init(0,486397281101152256,130025408,0);
    bitMask[7][9].init(0,972794562202304512,260050816,0);
    bitMask[7][10].init(0,1945589124404609024,520101632,0);
    bitMask[7][11].init(0,3891178248809218048,1040203264,0);
    bitMask[7][12].init(0,7782356497618436096,2080406528,0);
    bitMask[7][13].init(0,6341200218746257408,2013296640,0);
    bitMask[7][14].init(0,3458887661001900032,1879076864,0);
    bitMask[8][0].init(0,1970354901745664,30065229830,0);
    bitMask[8][1].init(0,4222189075169280,64425492493,0);
    bitMask[8][2].init(0,8725857422016512,133146017819,0);
    bitMask[8][3].init(0,17451714844033024,266292035638,0);
    bitMask[8][4].init(0,34903429688066048,532584071276,0);
    bitMask[8][5].init(0,69806859376132096,1065168142552,0);
    bitMask[8][6].init(0,139613718752264192,2130336285104,0);
    bitMask[8][7].init(0,279227437504528384,4260672570208,0);
    bitMask[8][8].init(0,558454875009056768,8521345140416,0);
    bitMask[8][9].init(0,1116909750018113536,17042690280832,0);
    bitMask[8][10].init(0,2233819500036227072,34085380561664,0);
    bitMask[8][11].init(0,4467639000072454144,68170761123328,0);
    bitMask[8][12].init(0,8935278000144908288,136341522246656,0);
    bitMask[8][13].init(0,8647043225946685440,131943408621568,0);
    bitMask[8][14].init(0,8070573677550239744,123147181371392,0);
    bitMask[9][0].init(0,1970324836974592,1970354902138887,0);
    bitMask[9][1].init(0,4222124650659840,4222189076021263,0);
    bitMask[9][2].init(0,8725724278030336,8725857423786015,0);
    bitMask[9][3].init(0,17451448556060672,17451714847572030,0);
    bitMask[9][4].init(0,34902897112121344,34903429695144060,0);
    bitMask[9][5].init(0,69805794224242688,69806859390288120,0);
    bitMask[9][6].init(0,139611588448485376,139613718780576240,0);
    bitMask[9][7].init(0,279223176896970752,279227437561152480,0);
    bitMask[9][8].init(0,558446353793941504,558454875122304960,0);
    bitMask[9][9].init(0,1116892707587883008,1116909750244609920,0);
    bitMask[9][10].init(0,2233785415175766016,2233819500489219840,0);
    bitMask[9][11].init(0,4467570830351532032,4467639000978439680,0);
    bitMask[9][12].init(0,8935141660703064064,8935278001956879360,0);
    bitMask[9][13].init(0,8646911284551352320,8647043227423111168,0);
    bitMask[9][14].init(0,8070450532247928832,8070573678355574784,0);
    bitMask[10][0].init(0,0,1970350607237127,7);
    bitMask[10][1].init(0,0,4222180486217743,15);
    bitMask[10][2].init(0,0,8725840244178975,31);
    bitMask[10][3].init(0,0,17451680488357950,62);
    bitMask[10][4].init(0,0,34903360976715900,124);
    bitMask[10][5].init(0,0,69806721953431800,248);
    bitMask[10][6].init(0,0,139613443906863600,496);
    bitMask[10][7].init(0,0,279226887813727200,992);
    bitMask[10][8].init(0,0,558453775627454400,1984);
    bitMask[10][9].init(0,0,1116907551254908800,3968);
    bitMask[10][10].init(0,0,2233815102509817600,7936);
    bitMask[10][11].init(0,0,4467630205019635200,15872);
    bitMask[10][12].init(0,0,8935260410039270400,31744);
    bitMask[10][13].init(0,0,8647008043587893248,30720);
    bitMask[10][14].init(0,0,8070503310685138944,28672);
    bitMask[11][0].init(0,0,1688879925493760,458759);
    bitMask[11][1].init(0,0,3659239122731008,983055);
    bitMask[11][2].init(0,0,7599957517205504,2031647);
    bitMask[11][3].init(0,0,15199915034411008,4063294);
    bitMask[11][4].init(0,0,30399830068822016,8126588);
    bitMask[11][5].init(0,0,60799660137644032,16253176);
    bitMask[11][6].init(0,0,121599320275288064,32506352);
    bitMask[11][7].init(0,0,243198640550576128,65012704);
    bitMask[11][8].init(0,0,486397281101152256,130025408);
    bitMask[11][9].init(0,0,972794562202304512,260050816);
    bitMask[11][10].init(0,0,1945589124404609024,520101632);
    bitMask[11][11].init(0,0,3891178248809218048,1040203264);
    bitMask[11][12].init(0,0,7782356497618436096,2080406528);
    bitMask[11][13].init(0,0,6341200218746257408,2013296640);
    bitMask[11][14].init(0,0,3458887661001900032,1879076864);
    bitMask[12][0].init(0,0,1970354901745664,30065229830);
    bitMask[12][1].init(0,0,4222189075169280,64425492493);
    bitMask[12][2].init(0,0,8725857422016512,133146017819);
    bitMask[12][3].init(0,0,17451714844033024,266292035638);
    bitMask[12][4].init(0,0,34903429688066048,532584071276);
    bitMask[12][5].init(0,0,69806859376132096,1065168142552);
    bitMask[12][6].init(0,0,139613718752264192,2130336285104);
    bitMask[12][7].init(0,0,279227437504528384,4260672570208);
    bitMask[12][8].init(0,0,558454875009056768,8521345140416);
    bitMask[12][9].init(0,0,1116909750018113536,17042690280832);
    bitMask[12][10].init(0,0,2233819500036227072,34085380561664);
    bitMask[12][11].init(0,0,4467639000072454144,68170761123328);
    bitMask[12][12].init(0,0,8935278000144908288,136341522246656);
    bitMask[12][13].init(0,0,8647043225946685440,131943408621568);
    bitMask[12][14].init(0,0,8070573677550239744,123147181371392);
    bitMask[13][0].init(0,0,1970324836974592,30065164295);
    bitMask[13][1].init(0,0,4222124650659840,64425361423);
    bitMask[13][2].init(0,0,8725724278030336,133145755679);
    bitMask[13][3].init(0,0,17451448556060672,266291511358);
    bitMask[13][4].init(0,0,34902897112121344,532583022716);
    bitMask[13][5].init(0,0,69805794224242688,1065166045432);
    bitMask[13][6].init(0,0,139611588448485376,2130332090864);
    bitMask[13][7].init(0,0,279223176896970752,4260664181728);
    bitMask[13][8].init(0,0,558446353793941504,8521328363456);
    bitMask[13][9].init(0,0,1116892707587883008,17042656726912);
    bitMask[13][10].init(0,0,2233785415175766016,34085313453824);
    bitMask[13][11].init(0,0,4467570830351532032,68170626907648);
    bitMask[13][12].init(0,0,8935141660703064064,136341253815296);
    bitMask[13][13].init(0,0,8646911284551352320,131942871758848);
    bitMask[13][14].init(0,0,8070450532247928832,123146107645952);
    bitMask[14][0].init(0,0,0,25770262535);
    bitMask[14][1].init(0,0,0,55835557903);
    bitMask[14][2].init(0,0,0,115966148639);
    bitMask[14][3].init(0,0,0,231932297278);
    bitMask[14][4].init(0,0,0,463864594556);
    bitMask[14][5].init(0,0,0,927729189112);
    bitMask[14][6].init(0,0,0,1855458378224);
    bitMask[14][7].init(0,0,0,3710916756448);
    bitMask[14][8].init(0,0,0,7421833512896);
    bitMask[14][9].init(0,0,0,14843667025792);
    bitMask[14][10].init(0,0,0,29687334051584);
    bitMask[14][11].init(0,0,0,59374668103168);
    bitMask[14][12].init(0,0,0,118749336206336);
    bitMask[14][13].init(0,0,0,96759036540928);
    bitMask[14][14].init(0,0,0,52778437210112);
}

class Board
{
public:
    Line horizontal[gridsize];
    Line vertical[gridsize];
    Line dia1[gridsize * 2 - 1];
    Line dia2[gridsize * 2 - 1];
    BitGrid grd[2];
    BitGrid validArea;
    int grdVal = 0;//站在白方角度的价值
    stack<BitGrid> validarea;
    stack<int> grdval;
    int turn = 0;
public:
    Board() {
        init();
    }
    void restart() {
        for (int i = 0; i < gridsize; i++) {
            horizontal[i].value = vertical[i].value = 0;
            horizontal[i].mask = vertical[i].mask = 0;
        }
        for (int i = 0; i < gridsize * 2 - 1; i++) {
            dia1[i].value = dia2[i].value = 0;
            dia1[i].mask = dia2[i].mask = 0;
        }
        grd[0].init(0LL, 0LL, 0LL, 0LL);
        grd[1].init(0LL, 0LL, 0LL, 0LL);
        validArea.init(0LL, 0LL, 0LL, 0LL);
        grdVal = 0;
        while (!validarea.empty())
                validarea.pop();
        while (!grdval.empty())
            grdval.pop();
        turn = 0;
    }
    void changeState(int x, int y, int color) {
        horizontal[indexH[x][y]].change(pos_in_lineH[color][x][y]);
        vertical[indexH[x][y]].change(pos_in_lineV[color][x][y]);
        dia1[indexDia1[x][y]].change(pos_in_lineDia1[color][x][y]);
        dia2[indexDia2[x][y]].change(pos_in_lineDia2[color][x][y]);
        grd[color].change(x, y);
    }
    bool gameover(int x, int y, int color) {
        return (horizontal[indexH[x][y]].Five(pos_in_lineH[color][x][y])
                || vertical[indexV[x][y]].Five(pos_in_lineV[color][x][y])
                || dia1[indexDia1[x][y]].Five(pos_in_lineDia1[color][x][y])
                || dia2[indexDia2[x][y]].Five(pos_in_lineDia2[color][x][y]));
    }
    void procstep(int x, int y, int color) {
        changeState(x, y, color);
        update_validArea_set(x, y);
        update_grdVal(x, y, color);
        turn++;
    }
    void cancelstep(int x, int y, int color) {
        changeState(x, y, color);
        validArea = validarea.top();
        validarea.pop();
        grdVal = grdval.top();
        grdval.pop();
        turn--;
    }
    void update_grdVal(int x, int y, int color) {
        grdval.push(grdVal);
        grdVal += horizontal[indexH[x][y]].deltaVal();
        grdVal += vertical[indexV[x][y]].deltaVal();
        grdVal += dia1[indexDia1[x][y]].deltaVal();
        grdVal += dia2[indexDia2[x][y]].deltaVal();
    }
    int eval_point(Point temp, int color) {
        int value = 0;
        value += horizontal[indexH[temp.x][temp.y]].eval_point(pos_in_lineH[color][temp.x][temp.y]);
        value += vertical[indexV[temp.x][temp.y]].eval_point(pos_in_lineV[color][temp.x][temp.y]);
        value += dia1[indexDia1[temp.x][temp.y]].eval_point(pos_in_lineDia1[color][temp.x][temp.y]);
        value += dia2[indexDia2[temp.x][temp.y]].eval_point(pos_in_lineDia2[color][temp.x][temp.y]);
        return value * (color == white ? 1 : -1);
    }
    void update_validArea_set(int x, int y) {
        validarea.push(validArea);
        validArea = validArea | bitMask[x][y];
        validArea.change(x, y);
    }
    vector<Point> generateNodes(int color) {
        vector<Point> ret;
        validArea.getOnepos(ret);
        vector<Point>::iterator iter;
        for (iter = ret.begin(); iter != ret.end(); iter++) {
            iter->value = eval_point((*iter), color);
        }
        sort(ret.begin(), ret.end(), compare_point);
        return ret;
    }
};



#endif //YUKI_BOARD_H
