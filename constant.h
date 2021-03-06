//
// Created by ThinkPad on 2017/8/3.
//

#ifndef YUKI_CONSTANT_H
#define YUKI_CONSTANT_H


#define constantFive 31
#define gridsize 15

/*
 * -------------------->X
 * |
 * |
 * |
 * |
 * |
 * |
 * |
 * |
 * |
 * Y
 * H:horizontal
 * V:vertical
 * Dia1:right-down
 * Dia2:left-down
 *
 */

#define black 1
#define white 0

const int indexH[gridsize][gridsize] = {
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}
};

const int indexV[gridsize][gridsize] = {
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
        {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
        {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
        {5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
        {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
        {7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
        {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10},
        {11,11,11,11,11,11,11,11,11,11,11,11,11,11,11},
        {12,12,12,12,12,12,12,12,12,12,12,12,12,12,12},
        {13,13,13,13,13,13,13,13,13,13,13,13,13,13,13},
        {14,14,14,14,14,14,14,14,14,14,14,14,14,14,14}
};

const int indexDia2[gridsize][gridsize] = {
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
        {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},
        {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},
        {3,4,5,6,7,8,9,10,11,12,13,14,15,16,17},
        {4,5,6,7,8,9,10,11,12,13,14,15,16,17,18},
        {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19},
        {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},
        {7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
        {8,9,10,11,12,13,14,15,16,17,18,19,20,21,22},
        {9,10,11,12,13,14,15,16,17,18,19,20,21,22,23},
        {10,11,12,13,14,15,16,17,18,19,20,21,22,23,24},
        {11,12,13,14,15,16,17,18,19,20,21,22,23,24,25},
        {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26},
        {13,14,15,16,17,18,19,20,21,22,23,24,25,26,27},
        {14,15,16,17,18,19,20,21,22,23,24,25,26,27,28}
};

const int indexDia1[gridsize][gridsize] = {
        {14,15,16,17,18,19,20,21,22,23,24,25,26,27,28},
        {13,14,15,16,17,18,19,20,21,22,23,24,25,26,27},
        {12,13,14,15,16,17,18,19,20,21,22,23,24,25,26},
        {11,12,13,14,15,16,17,18,19,20,21,22,23,24,25},
        {10,11,12,13,14,15,16,17,18,19,20,21,22,23,24},
        {9,10,11,12,13,14,15,16,17,18,19,20,21,22,23},
        {8,9,10,11,12,13,14,15,16,17,18,19,20,21,22},
        {7,8,9,10,11,12,13,14,15,16,17,18,19,20,21},
        {6,7,8,9,10,11,12,13,14,15,16,17,18,19,20},
        {5,6,7,8,9,10,11,12,13,14,15,16,17,18,19},
        {4,5,6,7,8,9,10,11,12,13,14,15,16,17,18},
        {3,4,5,6,7,8,9,10,11,12,13,14,15,16,17},
        {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16},
        {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},
        {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}
};

const int pos_in_lineDia1[2][gridsize][gridsize] = {
        {
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                {0,1,2,2,2,2,2,2,2,2,2,2,2,2,2},
                {0,1,2,3,3,3,3,3,3,3,3,3,3,3,3},
                {0,1,2,3,4,4,4,4,4,4,4,4,4,4,4},
                {0,1,2,3,4,5,5,5,5,5,5,5,5,5,5},
                {0,1,2,3,4,5,6,6,6,6,6,6,6,6,6},
                {0,1,2,3,4,5,6,7,7,7,7,7,7,7,7},
                {0,1,2,3,4,5,6,7,8,8,8,8,8,8,8},
                {0,1,2,3,4,5,6,7,8,9,9,9,9,9,9},
                {0,1,2,3,4,5,6,7,8,9,10,10,10,10,10},
                {0,1,2,3,4,5,6,7,8,9,10,11,11,11,11},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,12,12},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,13},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}
        },
        {
                {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                {15,16,16,16,16,16,16,16,16,16,16,16,16,16,16},
                {15,16,17,17,17,17,17,17,17,17,17,17,17,17,17},
                {15,16,17,18,18,18,18,18,18,18,18,18,18,18,18},
                {15,16,17,18,19,19,19,19,19,19,19,19,19,19,19},
                {15,16,17,18,19,20,20,20,20,20,20,20,20,20,20},
                {15,16,17,18,19,20,21,21,21,21,21,21,21,21,21},
                {15,16,17,18,19,20,21,22,22,22,22,22,22,22,22},
                {15,16,17,18,19,20,21,22,23,23,23,23,23,23,23},
                {15,16,17,18,19,20,21,22,23,24,24,24,24,24,24},
                {15,16,17,18,19,20,21,22,23,24,25,25,25,25,25},
                {15,16,17,18,19,20,21,22,23,24,25,26,26,26,26},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,27,27},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,28},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29}
        }

};

const int pos_in_lineDia2[2][gridsize][gridsize] = {
        {
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,13},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,12,12},
                {0,1,2,3,4,5,6,7,8,9,10,11,11,11,11},
                {0,1,2,3,4,5,6,7,8,9,10,10,10,10,10},
                {0,1,2,3,4,5,6,7,8,9,9,9,9,9,9},
                {0,1,2,3,4,5,6,7,8,8,8,8,8,8,8},
                {0,1,2,3,4,5,6,7,7,7,7,7,7,7,7},
                {0,1,2,3,4,5,6,6,6,6,6,6,6,6,6},
                {0,1,2,3,4,5,5,5,5,5,5,5,5,5,5},
                {0,1,2,3,4,4,4,4,4,4,4,4,4,4,4},
                {0,1,2,3,3,3,3,3,3,3,3,3,3,3,3},
                {0,1,2,2,2,2,2,2,2,2,2,2,2,2,2},
                {0,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}
        },
        {
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,28},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,27,27},
                {15,16,17,18,19,20,21,22,23,24,25,26,26,26,26},
                {15,16,17,18,19,20,21,22,23,24,25,25,25,25,25},
                {15,16,17,18,19,20,21,22,23,24,24,24,24,24,24},
                {15,16,17,18,19,20,21,22,23,23,23,23,23,23,23},
                {15,16,17,18,19,20,21,22,22,22,22,22,22,22,22},
                {15,16,17,18,19,20,21,21,21,21,21,21,21,21,21},
                {15,16,17,18,19,20,20,20,20,20,20,20,20,20,20},
                {15,16,17,18,19,19,19,19,19,19,19,19,19,19,19},
                {15,16,17,18,18,18,18,18,18,18,18,18,18,18,18},
                {15,16,17,17,17,17,17,17,17,17,17,17,17,17,17},
                {15,16,16,16,16,16,16,16,16,16,16,16,16,16,16},
                {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15}
        }
};

const int pos_in_lineH[2][gridsize][gridsize] = {
        {
                {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                {2,2,2,2,2,2,2,2,2,2,2,2,2,2,2},
                {3,3,3,3,3,3,3,3,3,3,3,3,3,3,3},
                {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
                {5,5,5,5,5,5,5,5,5,5,5,5,5,5,5},
                {6,6,6,6,6,6,6,6,6,6,6,6,6,6,6},
                {7,7,7,7,7,7,7,7,7,7,7,7,7,7,7},
                {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
                {9,9,9,9,9,9,9,9,9,9,9,9,9,9,9},
                {10,10,10,10,10,10,10,10,10,10,10,10,10,10,10},
                {11,11,11,11,11,11,11,11,11,11,11,11,11,11,11},
                {12,12,12,12,12,12,12,12,12,12,12,12,12,12,12},
                {13,13,13,13,13,13,13,13,13,13,13,13,13,13,13},
                {14,14,14,14,14,14,14,14,14,14,14,14,14,14,14}
        },
        {
                {15,15,15,15,15,15,15,15,15,15,15,15,15,15,15},
                {16,16,16,16,16,16,16,16,16,16,16,16,16,16,16},
                {17,17,17,17,17,17,17,17,17,17,17,17,17,17,17},
                {18,18,18,18,18,18,18,18,18,18,18,18,18,18,18},
                {19,19,19,19,19,19,19,19,19,19,19,19,19,19,19},
                {20,20,20,20,20,20,20,20,20,20,20,20,20,20,20},
                {21,21,21,21,21,21,21,21,21,21,21,21,21,21,21},
                {22,22,22,22,22,22,22,22,22,22,22,22,22,22,22},
                {23,23,23,23,23,23,23,23,23,23,23,23,23,23,23},
                {24,24,24,24,24,24,24,24,24,24,24,24,24,24,24},
                {25,25,25,25,25,25,25,25,25,25,25,25,25,25,25},
                {26,26,26,26,26,26,26,26,26,26,26,26,26,26,26},
                {27,27,27,27,27,27,27,27,27,27,27,27,27,27,27},
                {28,28,28,28,28,28,28,28,28,28,28,28,28,28,28},
                {29,29,29,29,29,29,29,29,29,29,29,29,29,29,29}
        }
};

const int pos_in_lineV[2][gridsize][gridsize] = {
        {
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14},
                {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14}
        },
        {
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29},
                {15,16,17,18,19,20,21,22,23,24,25,26,27,28,29}
        }

};


const int line_to_pointH[gridsize][gridsize * 2][2] = {
        {{0,0},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0},{10,0},{11,0},{12,0},{13,0},{14,0},{0,0},{1,0},{2,0},{3,0},{4,0},{5,0},{6,0},{7,0},{8,0},{9,0},{10,0},{11,0},{12,0},{13,0},{14,0}},
        {{0,1},{1,1},{2,1},{3,1},{4,1},{5,1},{6,1},{7,1},{8,1},{9,1},{10,1},{11,1},{12,1},{13,1},{14,1},{0,1},{1,1},{2,1},{3,1},{4,1},{5,1},{6,1},{7,1},{8,1},{9,1},{10,1},{11,1},{12,1},{13,1},{14,1}},
        {{0,2},{1,2},{2,2},{3,2},{4,2},{5,2},{6,2},{7,2},{8,2},{9,2},{10,2},{11,2},{12,2},{13,2},{14,2},{0,2},{1,2},{2,2},{3,2},{4,2},{5,2},{6,2},{7,2},{8,2},{9,2},{10,2},{11,2},{12,2},{13,2},{14,2}},
        {{0,3},{1,3},{2,3},{3,3},{4,3},{5,3},{6,3},{7,3},{8,3},{9,3},{10,3},{11,3},{12,3},{13,3},{14,3},{0,3},{1,3},{2,3},{3,3},{4,3},{5,3},{6,3},{7,3},{8,3},{9,3},{10,3},{11,3},{12,3},{13,3},{14,3}},
        {{0,4},{1,4},{2,4},{3,4},{4,4},{5,4},{6,4},{7,4},{8,4},{9,4},{10,4},{11,4},{12,4},{13,4},{14,4},{0,4},{1,4},{2,4},{3,4},{4,4},{5,4},{6,4},{7,4},{8,4},{9,4},{10,4},{11,4},{12,4},{13,4},{14,4}},
        {{0,5},{1,5},{2,5},{3,5},{4,5},{5,5},{6,5},{7,5},{8,5},{9,5},{10,5},{11,5},{12,5},{13,5},{14,5},{0,5},{1,5},{2,5},{3,5},{4,5},{5,5},{6,5},{7,5},{8,5},{9,5},{10,5},{11,5},{12,5},{13,5},{14,5}},
        {{0,6},{1,6},{2,6},{3,6},{4,6},{5,6},{6,6},{7,6},{8,6},{9,6},{10,6},{11,6},{12,6},{13,6},{14,6},{0,6},{1,6},{2,6},{3,6},{4,6},{5,6},{6,6},{7,6},{8,6},{9,6},{10,6},{11,6},{12,6},{13,6},{14,6}},
        {{0,7},{1,7},{2,7},{3,7},{4,7},{5,7},{6,7},{7,7},{8,7},{9,7},{10,7},{11,7},{12,7},{13,7},{14,7},{0,7},{1,7},{2,7},{3,7},{4,7},{5,7},{6,7},{7,7},{8,7},{9,7},{10,7},{11,7},{12,7},{13,7},{14,7}},
        {{0,8},{1,8},{2,8},{3,8},{4,8},{5,8},{6,8},{7,8},{8,8},{9,8},{10,8},{11,8},{12,8},{13,8},{14,8},{0,8},{1,8},{2,8},{3,8},{4,8},{5,8},{6,8},{7,8},{8,8},{9,8},{10,8},{11,8},{12,8},{13,8},{14,8}},
        {{0,9},{1,9},{2,9},{3,9},{4,9},{5,9},{6,9},{7,9},{8,9},{9,9},{10,9},{11,9},{12,9},{13,9},{14,9},{0,9},{1,9},{2,9},{3,9},{4,9},{5,9},{6,9},{7,9},{8,9},{9,9},{10,9},{11,9},{12,9},{13,9},{14,9}},
        {{0,10},{1,10},{2,10},{3,10},{4,10},{5,10},{6,10},{7,10},{8,10},{9,10},{10,10},{11,10},{12,10},{13,10},{14,10},{0,10},{1,10},{2,10},{3,10},{4,10},{5,10},{6,10},{7,10},{8,10},{9,10},{10,10},{11,10},{12,10},{13,10},{14,10}},
        {{0,11},{1,11},{2,11},{3,11},{4,11},{5,11},{6,11},{7,11},{8,11},{9,11},{10,11},{11,11},{12,11},{13,11},{14,11},{0,11},{1,11},{2,11},{3,11},{4,11},{5,11},{6,11},{7,11},{8,11},{9,11},{10,11},{11,11},{12,11},{13,11},{14,11}},
        {{0,12},{1,12},{2,12},{3,12},{4,12},{5,12},{6,12},{7,12},{8,12},{9,12},{10,12},{11,12},{12,12},{13,12},{14,12},{0,12},{1,12},{2,12},{3,12},{4,12},{5,12},{6,12},{7,12},{8,12},{9,12},{10,12},{11,12},{12,12},{13,12},{14,12}},
        {{0,13},{1,13},{2,13},{3,13},{4,13},{5,13},{6,13},{7,13},{8,13},{9,13},{10,13},{11,13},{12,13},{13,13},{14,13},{0,13},{1,13},{2,13},{3,13},{4,13},{5,13},{6,13},{7,13},{8,13},{9,13},{10,13},{11,13},{12,13},{13,13},{14,13}},
        {{0,14},{1,14},{2,14},{3,14},{4,14},{5,14},{6,14},{7,14},{8,14},{9,14},{10,14},{11,14},{12,14},{13,14},{14,14},{0,14},{1,14},{2,14},{3,14},{4,14},{5,14},{6,14},{7,14},{8,14},{9,14},{10,14},{11,14},{12,14},{13,14},{14,14}}
};


const int line_to_pointV[gridsize][gridsize * 2][2] = {
        {{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{0,9},{0,10},{0,11},{0,12},{0,13},{0,14},{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{0,9},{0,10},{0,11},{0,12},{0,13},{0,14}},
        {{1,0},{1,1},{1,2},{1,3},{1,4},{1,5},{1,6},{1,7},{1,8},{1,9},{1,10},{1,11},{1,12},{1,13},{1,14},{1,0},{1,1},{1,2},{1,3},{1,4},{1,5},{1,6},{1,7},{1,8},{1,9},{1,10},{1,11},{1,12},{1,13},{1,14}},
        {{2,0},{2,1},{2,2},{2,3},{2,4},{2,5},{2,6},{2,7},{2,8},{2,9},{2,10},{2,11},{2,12},{2,13},{2,14},{2,0},{2,1},{2,2},{2,3},{2,4},{2,5},{2,6},{2,7},{2,8},{2,9},{2,10},{2,11},{2,12},{2,13},{2,14}},
        {{3,0},{3,1},{3,2},{3,3},{3,4},{3,5},{3,6},{3,7},{3,8},{3,9},{3,10},{3,11},{3,12},{3,13},{3,14},{3,0},{3,1},{3,2},{3,3},{3,4},{3,5},{3,6},{3,7},{3,8},{3,9},{3,10},{3,11},{3,12},{3,13},{3,14}},
        {{4,0},{4,1},{4,2},{4,3},{4,4},{4,5},{4,6},{4,7},{4,8},{4,9},{4,10},{4,11},{4,12},{4,13},{4,14},{4,0},{4,1},{4,2},{4,3},{4,4},{4,5},{4,6},{4,7},{4,8},{4,9},{4,10},{4,11},{4,12},{4,13},{4,14}},
        {{5,0},{5,1},{5,2},{5,3},{5,4},{5,5},{5,6},{5,7},{5,8},{5,9},{5,10},{5,11},{5,12},{5,13},{5,14},{5,0},{5,1},{5,2},{5,3},{5,4},{5,5},{5,6},{5,7},{5,8},{5,9},{5,10},{5,11},{5,12},{5,13},{5,14}},
        {{6,0},{6,1},{6,2},{6,3},{6,4},{6,5},{6,6},{6,7},{6,8},{6,9},{6,10},{6,11},{6,12},{6,13},{6,14},{6,0},{6,1},{6,2},{6,3},{6,4},{6,5},{6,6},{6,7},{6,8},{6,9},{6,10},{6,11},{6,12},{6,13},{6,14}},
        {{7,0},{7,1},{7,2},{7,3},{7,4},{7,5},{7,6},{7,7},{7,8},{7,9},{7,10},{7,11},{7,12},{7,13},{7,14},{7,0},{7,1},{7,2},{7,3},{7,4},{7,5},{7,6},{7,7},{7,8},{7,9},{7,10},{7,11},{7,12},{7,13},{7,14}},
        {{8,0},{8,1},{8,2},{8,3},{8,4},{8,5},{8,6},{8,7},{8,8},{8,9},{8,10},{8,11},{8,12},{8,13},{8,14},{8,0},{8,1},{8,2},{8,3},{8,4},{8,5},{8,6},{8,7},{8,8},{8,9},{8,10},{8,11},{8,12},{8,13},{8,14}},
        {{9,0},{9,1},{9,2},{9,3},{9,4},{9,5},{9,6},{9,7},{9,8},{9,9},{9,10},{9,11},{9,12},{9,13},{9,14},{9,0},{9,1},{9,2},{9,3},{9,4},{9,5},{9,6},{9,7},{9,8},{9,9},{9,10},{9,11},{9,12},{9,13},{9,14}},
        {{10,0},{10,1},{10,2},{10,3},{10,4},{10,5},{10,6},{10,7},{10,8},{10,9},{10,10},{10,11},{10,12},{10,13},{10,14},{10,0},{10,1},{10,2},{10,3},{10,4},{10,5},{10,6},{10,7},{10,8},{10,9},{10,10},{10,11},{10,12},{10,13},{10,14}},
        {{11,0},{11,1},{11,2},{11,3},{11,4},{11,5},{11,6},{11,7},{11,8},{11,9},{11,10},{11,11},{11,12},{11,13},{11,14},{11,0},{11,1},{11,2},{11,3},{11,4},{11,5},{11,6},{11,7},{11,8},{11,9},{11,10},{11,11},{11,12},{11,13},{11,14}},
        {{12,0},{12,1},{12,2},{12,3},{12,4},{12,5},{12,6},{12,7},{12,8},{12,9},{12,10},{12,11},{12,12},{12,13},{12,14},{12,0},{12,1},{12,2},{12,3},{12,4},{12,5},{12,6},{12,7},{12,8},{12,9},{12,10},{12,11},{12,12},{12,13},{12,14}},
        {{13,0},{13,1},{13,2},{13,3},{13,4},{13,5},{13,6},{13,7},{13,8},{13,9},{13,10},{13,11},{13,12},{13,13},{13,14},{13,0},{13,1},{13,2},{13,3},{13,4},{13,5},{13,6},{13,7},{13,8},{13,9},{13,10},{13,11},{13,12},{13,13},{13,14}},
        {{14,0},{14,1},{14,2},{14,3},{14,4},{14,5},{14,6},{14,7},{14,8},{14,9},{14,10},{14,11},{14,12},{14,13},{14,14},{14,0},{14,1},{14,2},{14,3},{14,4},{14,5},{14,6},{14,7},{14,8},{14,9},{14,10},{14,11},{14,12},{14,13},{14,14}}

};

const int line_to_posDia1[gridsize * 2 - 1][gridsize * 2][2] = {
        {{14,0},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,0},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{13,0}},
        {{13,0},{14,1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{13,0},{14,1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{12,0}},
        {{12,0},{13,1},{14,2},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{12,0},{13,1},{14,2},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{11,0}},
        {{11,0},{12,1},{13,2},{14,3},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{11,0},{12,1},{13,2},{14,3},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{10,0}},
        {{10,0},{11,1},{12,2},{13,3},{14,4},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{10,0},{11,1},{12,2},{13,3},{14,4},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{9,0}},
        {{9,0},{10,1},{11,2},{12,3},{13,4},{14,5},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{9,0},{10,1},{11,2},{12,3},{13,4},{14,5},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{8,0}},
        {{8,0},{9,1},{10,2},{11,3},{12,4},{13,5},{14,6},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{8,0},{9,1},{10,2},{11,3},{12,4},{13,5},{14,6},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{7,0}},
        {{7,0},{8,1},{9,2},{10,3},{11,4},{12,5},{13,6},{14,7},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{7,0},{8,1},{9,2},{10,3},{11,4},{12,5},{13,6},{14,7},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{6,0}},
        {{6,0},{7,1},{8,2},{9,3},{10,4},{11,5},{12,6},{13,7},{14,8},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{6,0},{7,1},{8,2},{9,3},{10,4},{11,5},{12,6},{13,7},{14,8},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{5,0}},
        {{5,0},{6,1},{7,2},{8,3},{9,4},{10,5},{11,6},{12,7},{13,8},{14,9},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{5,0},{6,1},{7,2},{8,3},{9,4},{10,5},{11,6},{12,7},{13,8},{14,9},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{4,0}},
        {{4,0},{5,1},{6,2},{7,3},{8,4},{9,5},{10,6},{11,7},{12,8},{13,9},{14,10},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{4,0},{5,1},{6,2},{7,3},{8,4},{9,5},{10,6},{11,7},{12,8},{13,9},{14,10},{-1,-1},{-1,-1},{-1,-1},{3,0}},
        {{3,0},{4,1},{5,2},{6,3},{7,4},{8,5},{9,6},{10,7},{11,8},{12,9},{13,10},{14,11},{-1,-1},{-1,-1},{-1,-1},{3,0},{4,1},{5,2},{6,3},{7,4},{8,5},{9,6},{10,7},{11,8},{12,9},{13,10},{14,11},{-1,-1},{-1,-1},{2,0}},
        {{2,0},{3,1},{4,2},{5,3},{6,4},{7,5},{8,6},{9,7},{10,8},{11,9},{12,10},{13,11},{14,12},{-1,-1},{-1,-1},{2,0},{3,1},{4,2},{5,3},{6,4},{7,5},{8,6},{9,7},{10,8},{11,9},{12,10},{13,11},{14,12},{-1,-1},{1,0}},
        {{1,0},{2,1},{3,2},{4,3},{5,4},{6,5},{7,6},{8,7},{9,8},{10,9},{11,10},{12,11},{13,12},{14,13},{-1,-1},{1,0},{2,1},{3,2},{4,3},{5,4},{6,5},{7,6},{8,7},{9,8},{10,9},{11,10},{12,11},{13,12},{14,13},{0,0}},
        {{0,0},{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7},{8,8},{9,9},{10,10},{11,11},{12,12},{13,13},{14,14},{0,0},{1,1},{2,2},{3,3},{4,4},{5,5},{6,6},{7,7},{8,8},{9,9},{10,10},{11,11},{12,12},{13,13},{14,14}},
        {{0,1},{1,2},{2,3},{3,4},{4,5},{5,6},{6,7},{7,8},{8,9},{9,10},{10,11},{11,12},{12,13},{13,14},{-1,-1},{0,1},{1,2},{2,3},{3,4},{4,5},{5,6},{6,7},{7,8},{8,9},{9,10},{10,11},{11,12},{12,13},{13,14},{0,2}},
        {{0,2},{1,3},{2,4},{3,5},{4,6},{5,7},{6,8},{7,9},{8,10},{9,11},{10,12},{11,13},{12,14},{-1,-1},{-1,-1},{0,2},{1,3},{2,4},{3,5},{4,6},{5,7},{6,8},{7,9},{8,10},{9,11},{10,12},{11,13},{12,14},{-1,-1},{0,3}},
        {{0,3},{1,4},{2,5},{3,6},{4,7},{5,8},{6,9},{7,10},{8,11},{9,12},{10,13},{11,14},{-1,-1},{-1,-1},{-1,-1},{0,3},{1,4},{2,5},{3,6},{4,7},{5,8},{6,9},{7,10},{8,11},{9,12},{10,13},{11,14},{-1,-1},{-1,-1},{0,4}},
        {{0,4},{1,5},{2,6},{3,7},{4,8},{5,9},{6,10},{7,11},{8,12},{9,13},{10,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,4},{1,5},{2,6},{3,7},{4,8},{5,9},{6,10},{7,11},{8,12},{9,13},{10,14},{-1,-1},{-1,-1},{-1,-1},{0,5}},
        {{0,5},{1,6},{2,7},{3,8},{4,9},{5,10},{6,11},{7,12},{8,13},{9,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,5},{1,6},{2,7},{3,8},{4,9},{5,10},{6,11},{7,12},{8,13},{9,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,6}},
        {{0,6},{1,7},{2,8},{3,9},{4,10},{5,11},{6,12},{7,13},{8,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,6},{1,7},{2,8},{3,9},{4,10},{5,11},{6,12},{7,13},{8,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,7}},
        {{0,7},{1,8},{2,9},{3,10},{4,11},{5,12},{6,13},{7,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,7},{1,8},{2,9},{3,10},{4,11},{5,12},{6,13},{7,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,8}},
        {{0,8},{1,9},{2,10},{3,11},{4,12},{5,13},{6,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,8},{1,9},{2,10},{3,11},{4,12},{5,13},{6,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,9}},
        {{0,9},{1,10},{2,11},{3,12},{4,13},{5,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,9},{1,10},{2,11},{3,12},{4,13},{5,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,10}},
        {{0,10},{1,11},{2,12},{3,13},{4,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,10},{1,11},{2,12},{3,13},{4,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,11}},
        {{0,11},{1,12},{2,13},{3,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,11},{1,12},{2,13},{3,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,12}},
        {{0,12},{1,13},{2,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,12},{1,13},{2,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,13}},
        {{0,13},{1,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,13},{1,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,14}},
        {{0,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{29,28}},

};

const int line_to_posDia2[gridsize * 2 - 1][gridsize * 2][2] = {
        {{0,0},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{0,0},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{1,0}},
        {{1,0},{0,1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{1,0},{0,1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{2,0}},
        {{2,0},{1,1},{0,2},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{2,0},{1,1},{0,2},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{3,0}},
        {{3,0},{2,1},{1,2},{0,3},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{3,0},{2,1},{1,2},{0,3},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{4,0}},
        {{4,0},{3,1},{2,2},{1,3},{0,4},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{4,0},{3,1},{2,2},{1,3},{0,4},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{5,0}},
        {{5,0},{4,1},{3,2},{2,3},{1,4},{0,5},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{5,0},{4,1},{3,2},{2,3},{1,4},{0,5},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{6,0}},
        {{6,0},{5,1},{4,2},{3,3},{2,4},{1,5},{0,6},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{6,0},{5,1},{4,2},{3,3},{2,4},{1,5},{0,6},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{7,0}},
        {{7,0},{6,1},{5,2},{4,3},{3,4},{2,5},{1,6},{0,7},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{7,0},{6,1},{5,2},{4,3},{3,4},{2,5},{1,6},{0,7},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{8,0}},
        {{8,0},{7,1},{6,2},{5,3},{4,4},{3,5},{2,6},{1,7},{0,8},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{8,0},{7,1},{6,2},{5,3},{4,4},{3,5},{2,6},{1,7},{0,8},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{9,0}},
        {{9,0},{8,1},{7,2},{6,3},{5,4},{4,5},{3,6},{2,7},{1,8},{0,9},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{9,0},{8,1},{7,2},{6,3},{5,4},{4,5},{3,6},{2,7},{1,8},{0,9},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{10,0}},
        {{10,0},{9,1},{8,2},{7,3},{6,4},{5,5},{4,6},{3,7},{2,8},{1,9},{0,10},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{10,0},{9,1},{8,2},{7,3},{6,4},{5,5},{4,6},{3,7},{2,8},{1,9},{0,10},{-1,-1},{-1,-1},{-1,-1},{11,0}},
        {{11,0},{10,1},{9,2},{8,3},{7,4},{6,5},{5,6},{4,7},{3,8},{2,9},{1,10},{0,11},{-1,-1},{-1,-1},{-1,-1},{11,0},{10,1},{9,2},{8,3},{7,4},{6,5},{5,6},{4,7},{3,8},{2,9},{1,10},{0,11},{-1,-1},{-1,-1},{12,0}},
        {{12,0},{11,1},{10,2},{9,3},{8,4},{7,5},{6,6},{5,7},{4,8},{3,9},{2,10},{1,11},{0,12},{-1,-1},{-1,-1},{12,0},{11,1},{10,2},{9,3},{8,4},{7,5},{6,6},{5,7},{4,8},{3,9},{2,10},{1,11},{0,12},{-1,-1},{13,0}},
        {{13,0},{12,1},{11,2},{10,3},{9,4},{8,5},{7,6},{6,7},{5,8},{4,9},{3,10},{2,11},{1,12},{0,13},{-1,-1},{13,0},{12,1},{11,2},{10,3},{9,4},{8,5},{7,6},{6,7},{5,8},{4,9},{3,10},{2,11},{1,12},{0,13},{14,0}},
        {{14,0},{13,1},{12,2},{11,3},{10,4},{9,5},{8,6},{7,7},{6,8},{5,9},{4,10},{3,11},{2,12},{1,13},{0,14},{14,0},{13,1},{12,2},{11,3},{10,4},{9,5},{8,6},{7,7},{6,8},{5,9},{4,10},{3,11},{2,12},{1,13},{0,14}},
        {{14,1},{13,2},{12,3},{11,4},{10,5},{9,6},{8,7},{7,8},{6,9},{5,10},{4,11},{3,12},{2,13},{1,14},{-1,-1},{14,1},{13,2},{12,3},{11,4},{10,5},{9,6},{8,7},{7,8},{6,9},{5,10},{4,11},{3,12},{2,13},{1,14},{14,2}},
        {{14,2},{13,3},{12,4},{11,5},{10,6},{9,7},{8,8},{7,9},{6,10},{5,11},{4,12},{3,13},{2,14},{-1,-1},{-1,-1},{14,2},{13,3},{12,4},{11,5},{10,6},{9,7},{8,8},{7,9},{6,10},{5,11},{4,12},{3,13},{2,14},{-1,-1},{14,3}},
        {{14,3},{13,4},{12,5},{11,6},{10,7},{9,8},{8,9},{7,10},{6,11},{5,12},{4,13},{3,14},{-1,-1},{-1,-1},{-1,-1},{14,3},{13,4},{12,5},{11,6},{10,7},{9,8},{8,9},{7,10},{6,11},{5,12},{4,13},{3,14},{-1,-1},{-1,-1},{14,4}},
        {{14,4},{13,5},{12,6},{11,7},{10,8},{9,9},{8,10},{7,11},{6,12},{5,13},{4,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,4},{13,5},{12,6},{11,7},{10,8},{9,9},{8,10},{7,11},{6,12},{5,13},{4,14},{-1,-1},{-1,-1},{-1,-1},{14,5}},
        {{14,5},{13,6},{12,7},{11,8},{10,9},{9,10},{8,11},{7,12},{6,13},{5,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,5},{13,6},{12,7},{11,8},{10,9},{9,10},{8,11},{7,12},{6,13},{5,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,6}},
        {{14,6},{13,7},{12,8},{11,9},{10,10},{9,11},{8,12},{7,13},{6,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,6},{13,7},{12,8},{11,9},{10,10},{9,11},{8,12},{7,13},{6,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,7}},
        {{14,7},{13,8},{12,9},{11,10},{10,11},{9,12},{8,13},{7,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,7},{13,8},{12,9},{11,10},{10,11},{9,12},{8,13},{7,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,8}},
        {{14,8},{13,9},{12,10},{11,11},{10,12},{9,13},{8,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,8},{13,9},{12,10},{11,11},{10,12},{9,13},{8,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,9}},
        {{14,9},{13,10},{12,11},{11,12},{10,13},{9,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,9},{13,10},{12,11},{11,12},{10,13},{9,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,10}},
        {{14,10},{13,11},{12,12},{11,13},{10,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,10},{13,11},{12,12},{11,13},{10,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,11}},
        {{14,11},{13,12},{12,13},{11,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,11},{13,12},{12,13},{11,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,12}},
        {{14,12},{13,13},{12,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,12},{13,13},{12,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,13}},
        {{14,13},{13,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,13},{13,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,14}},
        {{14,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{14,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{29,28}},

};

const int deltax[] = {-1,-1,-1,0,0,1,1,1,-2,-2,-2,-2,-2,-1,-1,0,0,1,1,2,2,2,2,2};
const int deltay[] = {-1,0,1,-1,1,-1,0,1,-2,-1,0,1,2,-2,2,-2,2,-2,2,-2,-1,0,1,2};


int point_to_grid[gridsize][gridsize][2] = {
        {{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{0,9},{0,10},{0,11},{0,12},{0,13},{0,14}},
        {{0,16},{0,17},{0,18},{0,19},{0,20},{0,21},{0,22},{0,23},{0,24},{0,25},{0,26},{0,27},{0,28},{0,29},{0,30}},
        {{0,32},{0,33},{0,34},{0,35},{0,36},{0,37},{0,38},{0,39},{0,40},{0,41},{0,42},{0,43},{0,44},{0,45},{0,46}},
        {{0,48},{0,49},{0,50},{0,51},{0,52},{0,53},{0,54},{0,55},{0,56},{0,57},{0,58},{0,59},{0,60},{0,61},{0,62}},
        {{1,0},{1,1},{1,2},{1,3},{1,4},{1,5},{1,6},{1,7},{1,8},{1,9},{1,10},{1,11},{1,12},{1,13},{1,14}},
        {{1,16},{1,17},{1,18},{1,19},{1,20},{1,21},{1,22},{1,23},{1,24},{1,25},{1,26},{1,27},{1,28},{1,29},{1,30}},
        {{1,32},{1,33},{1,34},{1,35},{1,36},{1,37},{1,38},{1,39},{1,40},{1,41},{1,42},{1,43},{1,44},{1,45},{1,46}},
        {{1,48},{1,49},{1,50},{1,51},{1,52},{1,53},{1,54},{1,55},{1,56},{1,57},{1,58},{1,59},{1,60},{1,61},{1,62}},
        {{2,0},{2,1},{2,2},{2,3},{2,4},{2,5},{2,6},{2,7},{2,8},{2,9},{2,10},{2,11},{2,12},{2,13},{2,14}},
        {{2,16},{2,17},{2,18},{2,19},{2,20},{2,21},{2,22},{2,23},{2,24},{2,25},{2,26},{2,27},{2,28},{2,29},{2,30}},
        {{2,32},{2,33},{2,34},{2,35},{2,36},{2,37},{2,38},{2,39},{2,40},{2,41},{2,42},{2,43},{2,44},{2,45},{2,46}},
        {{2,48},{2,49},{2,50},{2,51},{2,52},{2,53},{2,54},{2,55},{2,56},{2,57},{2,58},{2,59},{2,60},{2,61},{2,62}},
        {{3,0},{3,1},{3,2},{3,3},{3,4},{3,5},{3,6},{3,7},{3,8},{3,9},{3,10},{3,11},{3,12},{3,13},{3,14}},
        {{3,16},{3,17},{3,18},{3,19},{3,20},{3,21},{3,22},{3,23},{3,24},{3,25},{3,26},{3,27},{3,28},{3,29},{3,30}},
        {{3,32},{3,33},{3,34},{3,35},{3,36},{3,37},{3,38},{3,39},{3,40},{3,41},{3,42},{3,43},{3,44},{3,45},{3,46}}

};

int grid_to_point[4][64][2] = {
        {{0,0},{0,1},{0,2},{0,3},{0,4},{0,5},{0,6},{0,7},{0,8},{0,9},{0,10},{0,11},{0,12},{0,13},{0,14},{-1,-1},{1,0},{1,1},{1,2},{1,3},{1,4},{1,5},{1,6},{1,7},{1,8},{1,9},{1,10},{1,11},{1,12},{1,13},{1,14},{-1,-1},{2,0},{2,1},{2,2},{2,3},{2,4},{2,5},{2,6},{2,7},{2,8},{2,9},{2,10},{2,11},{2,12},{2,13},{2,14},{-1,-1},{3,0},{3,1},{3,2},{3,3},{3,4},{3,5},{3,6},{3,7},{3,8},{3,9},{3,10},{3,11},{3,12},{3,13},{3,14},{-1,-1}},
        {{4,0},{4,1},{4,2},{4,3},{4,4},{4,5},{4,6},{4,7},{4,8},{4,9},{4,10},{4,11},{4,12},{4,13},{4,14},{-1,-1},{5,0},{5,1},{5,2},{5,3},{5,4},{5,5},{5,6},{5,7},{5,8},{5,9},{5,10},{5,11},{5,12},{5,13},{5,14},{-1,-1},{6,0},{6,1},{6,2},{6,3},{6,4},{6,5},{6,6},{6,7},{6,8},{6,9},{6,10},{6,11},{6,12},{6,13},{6,14},{-1,-1},{7,0},{7,1},{7,2},{7,3},{7,4},{7,5},{7,6},{7,7},{7,8},{7,9},{7,10},{7,11},{7,12},{7,13},{7,14},{-1,-1}},
        {{8,0},{8,1},{8,2},{8,3},{8,4},{8,5},{8,6},{8,7},{8,8},{8,9},{8,10},{8,11},{8,12},{8,13},{8,14},{-1,-1},{9,0},{9,1},{9,2},{9,3},{9,4},{9,5},{9,6},{9,7},{9,8},{9,9},{9,10},{9,11},{9,12},{9,13},{9,14},{-1,-1},{10,0},{10,1},{10,2},{10,3},{10,4},{10,5},{10,6},{10,7},{10,8},{10,9},{10,10},{10,11},{10,12},{10,13},{10,14},{-1,-1},{11,0},{11,1},{11,2},{11,3},{11,4},{11,5},{11,6},{11,7},{11,8},{11,9},{11,10},{11,11},{11,12},{11,13},{11,14},{-1,-1}},
        {{12,0},{12,1},{12,2},{12,3},{12,4},{12,5},{12,6},{12,7},{12,8},{12,9},{12,10},{12,11},{12,12},{12,13},{12,14},{-1,-1},{13,0},{13,1},{13,2},{13,3},{13,4},{13,5},{13,6},{13,7},{13,8},{13,9},{13,10},{13,11},{13,12},{13,13},{13,14},{-1,-1},{14,0},{14,1},{14,2},{14,3},{14,4},{14,5},{14,6},{14,7},{14,8},{14,9},{14,10},{14,11},{14,12},{14,13},{14,14},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1},{-1,-1}}
};

const int five = 1000;
//const

int Score[32] = {
        0, 1, 2, 4,
        4, 2, 8, 32,
        2, 2, 4, 16,
        8, 16, 64, 64,
        1, 1, 2, 8,
        4, 8, 16, 64,
        8, 8, 16, 64,
        32, 64, 64, 128
};
/*
// *****
score[0] = 0;

// ****#
score[1] = 1;

// ***#*
score[2] = 2;

// ***##
score[3] = 4;

// **#**
score[4] = 4;

// **#*#
score[5] = 2;

// **##*
score[6] = 8;

// **###
score[7] = 32;

// *#***
score[8] = 2;

// *#**#
score[9] = 2;

// *#*#*
score[10] = 4;

// *#*##
score[11] = 16;

// *##**
score[12] = 8;

// *##*#
score[13] = 16;

// *###*
score[14] = 64;

// *####
score[15] = 64;

// #****
score[16] = 1;

// #***#
score[17] = 1;

// #**#*
score[18] = 2;

// #**##
score[19] = 8;

// #*#**
score[20] = 4;

// #*#*#
score[21] = 8;

// #*##*
score[22] = 16;

// #*###
score[23] = 64;

// ##***
score[24] = 8;

// ##**#
score[25] = 8;

// ##*#*
score[26] = 16;

// ##*##
score[27] = 64;

// ###**
score[28] = 32;

// ###*#
score[29] = 64;

// ####*
score[30] = 64;

// #####
score[31] = 128;
*/
#endif //YUKI_CONSTANT_H
