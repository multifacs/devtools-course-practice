// Copyright 2022 Shelepin Nikita

#include "include/simpson.h"

SimpsonSolver::SimpsonSolver() {}

SimpsonSolver::SimpsonSolver(const function<double(vector<double>)> f,
                             const vector<pair<double, double>> limits,
                             const vector<int> n) {}

SimpsonSolver::SimpsonSolver(const SimpsonSolver& other) {}

SimpsonSolver& SimpsonSolver::operator=(const SimpsonSolver& other) {
  return SimpsonSolver();
}

function<double(vector<double>)> SimpsonSolver::getFunction() const {
  return function<double(vector<double>)>();
}

vector<pair<double, double>> SimpsonSolver::getLimits() const {
  return vector<pair<double, double>>();
}

vector<int> SimpsonSolver::getN() const { return vector<int>(); }

void SimpsonSolver::setFunction(const function<double(vector<double>)> f) {}

void SimpsonSolver::setLimits(const vector<pair<double, double>> limits) {}

void SimpsonSolver::setN(vector<int> n) {}

bool SimpsonSolver::operator==(const SimpsonSolver& other) const {
  return false;
}

bool SimpsonSolver::operator!=(const SimpsonSolver& other) const {
  return false;
}

double SimpsonSolver::solve() { return 0.0; }
