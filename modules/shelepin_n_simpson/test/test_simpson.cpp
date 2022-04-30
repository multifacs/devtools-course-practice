// Copyright 2022 Shelepin Nikita

#include <gtest/gtest.h>

#include <algorithm>
#include <functional>
#include <utility>
#include <vector>

#include "include/simpson.h"

TEST(Shelepin_Nikita_SimpsonSolverTest, DefaultConstructor) {
  ASSERT_NO_THROW(SimpsonSolver());
}
