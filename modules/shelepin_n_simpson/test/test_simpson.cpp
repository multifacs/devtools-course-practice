// Copyright 2022 Shelepin Nikita

#include <gtest/gtest.h>

#include <algorithm>
#include <functional>
#include <utility>
#include <vector>

#include "include/simpson.h"

TEST(Shelepin_Nikita_SimpsonSolverTest, DefaultConstructor) {
  ASSERT_NO_THROW(SimpsonSolver());

  SimpsonSolver a;
  vector<int> test_n = {1};
  vector<pair<double, double>> test_limits = {{1, 2}};
  function<double(vector<double>)> test_func = [](vector<double> vec) {
    double x = vec[0];
    return x;
  };

  ASSERT_EQ(a.getN(), test_n);
  ASSERT_EQ(a.getLimits(), test_limits);
  ASSERT_EQ(a.getFunction()({100}), test_func({100}));
}
