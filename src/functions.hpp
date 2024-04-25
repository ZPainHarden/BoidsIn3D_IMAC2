#pragma once
#include <iostream>
#include <list>
#include <string>
#include "Boids.hpp"
#include "glimac/common.hpp"
#include "glm/fwd.hpp"

#define M_PI 3.14159265358979323846 /* pi */

// Probability laws

double rand01();

double randAB(auto a, auto b);

int randDiscreteAB(int a, int b);

bool bernoulli(double value);

double binDist(double N, double value);

double norm(double x, double mu, double sigma); // à densité par rapport à la mesure de Lebesgue

double gauss(double x); // à densité par rapport à la mesure de Lebesgue

double poisson(double x, double lambda);

double unif(double a, double b); // à densité par rapport à la mesure de Lebesgue

double exponential(double value, double lambda); // à densité par rapport à la mesure de Lebesgue

bool geometric(int p); // p is equal to the number of possibilities, for example, a dice has 6 faces so p = 6

// Markov chain

std::string markov(std::string state);

// Useful functions

int fact(int number);

// Boid function

glm::vec3 applyColorBoid();

glm::vec3 randomBoidPosition();

glm::vec3 randomBoidVelocity();

float randomSphereSize();

std::string randomSphereTexture();
