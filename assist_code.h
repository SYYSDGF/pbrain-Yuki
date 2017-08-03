//
// Created by ThinkPad on 2017/8/3.
//

#ifndef YUKI_ASSIST_CODE_H
#define YUKI_ASSIST_CODE_H

/*
int main() {
    for (int i = 0; i < gridsize; i++) {
        for (int j = 0; j < gridsize; j++) {
            for (int color = 0; color < 2; color++) {
                if (line_to_pointH[indexH[i][j]][pos_in_lineH[color][i][j]][0] != i)
                    cout << "H0error" << endl << i << ", " << j << "," << color << endl;
                if (line_to_pointH[indexH[i][j]][pos_in_lineH[color][i][j]][1] != j)
                    cout << "H1error" << endl << i << ", " << j << "," << color << endl;
                if (line_to_pointV[indexV[i][j]][pos_in_lineV[color][i][j]][0] != i)
                    cout << "V0error" << endl << i << ", " << j << "," << color << endl;
                if (line_to_pointV[indexV[i][j]][pos_in_lineV[color][i][j]][1] != j)
                    cout << "V1error" << endl << i << ", " << j << "," << color << endl;
                if (line_to_posDia1[indexDia1[i][j]][pos_in_lineDia1[color][i][j]][0] != i)
                    cout << "Dia10error" << endl << i << ", " << j << "," << color << endl;
                if (line_to_posDia1[indexDia1[i][j]][pos_in_lineDia1[color][i][j]][1] != j)
                    cout << "Dia11error" << endl << i << ", " << j << "," << color << endl;
                if (line_to_posDia2[indexDia2[i][j]][pos_in_lineDia2[color][i][j]][0] != i)
                    cout << "Dia20error" << endl << i << ", " << j << "," << color << endl;
                if (line_to_posDia2[indexDia2[i][j]][pos_in_lineDia2[color][i][j]][1] != j)
                    cout << "Dia21error" << endl << i << ", " << j << "," << color << endl;
            }
        }
    }
}
int main() {
    int i = 14;
    int j = 14;
    int color = 1;
    cout << indexDia1[i][j] << endl;
    cout << pos_in_lineDia1[color][i][j] << endl;
    cout << line_to_posDia1[indexDia1[i][j]][pos_in_lineDia1[color][i][j]][0] << ", " << line_to_posDia1[indexDia1[i][j]][pos_in_lineDia1[color][i][j]][1] << endl;
}
*/

/*
int main() {
    int point_to_grid[gridsize][gridsize][2];
    for (int i = 0; i < gridsize; i++) {
        for (int j = 0; j < gridsize; j++) {
            int index = i >> 2;
            int movebit = (i % 4) << 4 | j;
            point_to_grid[i][j][0] = index;
            point_to_grid[i][j][1] = movebit;
        }
    }
    for (int i = 0; i < gridsize; i++) {
        cout << "{";
        for (int j = 0; j < gridsize; j++) {
            cout << "{" << point_to_grid[i][j][0] << "," << point_to_grid[i][j][1] << "}";
            if (j != gridsize - 1)
                cout << ",";
        }
        cout << "}";
        if (i != gridsize - 1)
            cout << ",";
        cout << endl;
    }
}

int main() {
    int grid_to_point[4][64][2];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 64; j++) {
            grid_to_point[i][j][0] = grid_to_point[i][j][1] = -1;
        }
    }
    for (int i = 0; i < gridsize; i++) {
        for (int j = 0; j < gridsize; j++) {
            grid_to_point[point_to_grid[i][j][0]][point_to_grid[i][j][1]][0] = i;
            grid_to_point[point_to_grid[i][j][0]][point_to_grid[i][j][1]][1] = j;
        }
    }
    for (int i = 0; i < 4; i++) {
        cout << "{";
        for (int j = 0; j < 64; j++) {
            cout << "{" << grid_to_point[i][j][0] << "," << grid_to_point[i][j][1] << "}";
            if (j != 63)
                cout << ",";
        }
        cout << "}";
        if (i != 3)
            cout << ",";
        cout << endl;
    }
}
 */

/*
int main() {
    int score[32] = {0};
    for (int i = 0; i < 32; i++) {
        string str = "// ";
        if (i & 16)
            str += "#";
        else
            str += "*";
        if (i & 8)
            str += "#";
        else
            str += "*";
        if (i & 4)
            str += "#";
        else
            str += "*";
        if (i & 2)
            str += "#";
        else
            str += "*";
        if (i & 1)
            str += "#";
        else
            str += "*";
        cout << str << endl;
        cout << "score[" << i << "] = ;" << endl << endl;
    }
}
*/

#endif //YUKI_ASSIST_CODE_H
