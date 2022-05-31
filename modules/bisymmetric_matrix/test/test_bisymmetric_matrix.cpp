// Copyright 2022 Shelepin Nikita

#include <gtest/gtest.h>

#include <vector>

#include "include/bisymmetric_matrix.h"

TEST(BisymmetricMatrix_Test, DefaultConstructor) {
  ASSERT_NO_THROW(BisymmetricMatrix());
}

TEST(BisymmetricMatrix_Test, Getters) {
  ASSERT_NO_THROW(BisymmetricMatrix());

  int test_size = 5;
  BisymmetricMatrix a(test_size);

  ASSERT_EQ(a.getSize(), test_size);
}

TEST(BisymmetricMatrix_Test, ParamConstructor) {
  int test_size = 5;
  BisymmetricMatrix a(test_size);

  ASSERT_EQ(a.getSize(), test_size);
}

TEST(BisymmetricMatrix_Test, ParamConstructor2) {
  int test_size = 2;
  std::vector<std::vector<double>> test_matrix = {{1, 2}, {2, 1}};
  BisymmetricMatrix a(test_matrix);

  ASSERT_EQ(a.getSize(), test_size);
  ASSERT_EQ(a[0][0], 1);
  ASSERT_EQ(a[1][0], 2);
}

TEST(BisymmetricMatrix_Test, CopyConstructor) {
  int test_size = 2;
  std::vector<std::vector<double>> test_matrix = {{1, 2}, {2, 1}};
  BisymmetricMatrix a(test_matrix);
  BisymmetricMatrix b(a);

  ASSERT_EQ(b.getSize(), test_size);
  ASSERT_EQ(b[0][0], 1);
  ASSERT_EQ(b[1][0], 2);
}

TEST(BisymmetricMatrix_Test, CopyAssignment) {
  int test_size = 2;
  std::vector<std::vector<double>> test_matrix = {{1, 2}, {2, 1}};
  BisymmetricMatrix a(test_matrix);
  BisymmetricMatrix b;
  b = a;

  ASSERT_EQ(b.getSize(), test_size);
  ASSERT_EQ(b[0][0], 1);
  ASSERT_EQ(b[1][0], 2);
}
