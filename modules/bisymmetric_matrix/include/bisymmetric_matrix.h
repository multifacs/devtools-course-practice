// Copyright 2022 Shelepin Nikita

#ifndef MODULES_BISYMMETRIC_MATRIX_INCLUDE_BISYMMETRIC_MATRIX_H_
#define MODULES_BISYMMETRIC_MATRIX_INCLUDE_BISYMMETRIC_MATRIX_H_

#include <vector>

using std::vector;

class BisymmetricMatrix {
 private:
  vector<vector<double>> container;
  int size;

  bool isSymmetric(vector<vector<double>> mat);

 public:
  BisymmetricMatrix();
  BisymmetricMatrix(const BisymmetricMatrix& other);
  BisymmetricMatrix(const vector<vector<double>>& other);
  BisymmetricMatrix(int n);

  BisymmetricMatrix& operator=(const BisymmetricMatrix& other);
  vector<double> operator[](int i) const { return container[i]; }
  vector<double>& operator[](int i) { return container[i]; }

  BisymmetricMatrix& operator+(const BisymmetricMatrix& other);
  BisymmetricMatrix& operator-(const BisymmetricMatrix& other);
  BisymmetricMatrix& operator*(const BisymmetricMatrix& other);
  BisymmetricMatrix& operator/(const BisymmetricMatrix& other);

  void fillWithRand(int n);
  void transpose();

  int getSize() { return this->size; }
};

#endif  // MODULES_BISYMMETRIC_MATRIX_INCLUDE_BISYMMETRIC_MATRIX_H_
