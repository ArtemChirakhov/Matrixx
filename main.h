#pragma once
#include <istream>
#include <ostream>
#include <iostream>
#include <vector>
using namespace std;

class matrix{
    vector<vector<long long>> matrixx;
public:
    friend ostream& operator<<(ostream &matrix_output, const matrix&);
    friend istream& operator>>(istream &matrix_input, matrix&);
    matrix(long long n = 0, long long m = 0, long long v = 0){
        matrixx.assign(n, vector<long long>(m, v));
    }
};
istream& operator>>(istream &matrix_input, matrix &vect){
    for(long long i = 0; i < vect.matrixx.size(); ++i){
        for(long long j = 0; j < vect.matrixx[i].size(); ++j){
            matrix_input >> vect.matrixx[i][j];
        }
    }
    return matrix_input;
}
ostream& operator<<(ostream &matrix_output, const matrix &vect){
    for(int i = 0; i < vect.matrixx.size(); ++i){
        for(int j = 0; j < vect.matrixx[i].size(); ++j){
            matrix_output << vect.matrixx[i][j] << ' ';
        } matrix_output << endl;
    }
    return matrix_output;
}

