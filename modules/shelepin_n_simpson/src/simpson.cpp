// Copyright 2022 Shelepin Nikita

#include "include/simpson.h"

#include <algorithm>
#include <functional>
#include <utility>
#include <vector>

SimpsonSolver::SimpsonSolver() {
  f = [](vector<double> vec) {
    double x = vec[0];
    return x;
  };
  limits = {{1, 2}};
  n = {1};
}

SimpsonSolver::SimpsonSolver(const function<double(vector<double>)> f,
                             const vector<pair<double, double>> limits,
                             const vector<int> n) {
  this->f = f;
  this->limits = limits;
  this->n = n;
}

SimpsonSolver::SimpsonSolver(const SimpsonSolver& other) {
  this->f = other.f;
  this->limits = other.limits;
  this->n = other.n;
}

SimpsonSolver& SimpsonSolver::operator=(const SimpsonSolver& other) {
  this->f = other.f;
  this->limits = other.limits;
  this->n = other.n;
  return *this;
}

function<double(vector<double>)> SimpsonSolver::getFunction() const {
  return this->f;
}

vector<pair<double, double>> SimpsonSolver::getLimits() const {
  return this->limits;
}

vector<int> SimpsonSolver::getN() const { return this->n; }

void SimpsonSolver::setFunction(const function<double(vector<double>)> f) {
  this->f = f;
}

void SimpsonSolver::setLimits(const vector<pair<double, double>> limits) {
  this->limits = limits;
}

void SimpsonSolver::setN(vector<int> n) { this->n = n; }

bool SimpsonSolver::operator==(const SimpsonSolver& other) const {
  return false;
}

bool SimpsonSolver::operator!=(const SimpsonSolver& other) const {
  return false;
}

double SimpsonSolver::solve() { return 0.0; }
