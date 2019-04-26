#pragma once
#include "mdp.h"
#include "vfa.h"
#include <math.h>
#include <fstream>

#define MAX_WORK_TIME 720.0
#define CAPACITY 10
#define PENALTY_FACTOR 5
#define MAX_COST 999999.0
#define MAX_EDGE 100.0
#define UNIT_TIME 10
#define CUSTOMER_NUMBER 20
#define MAX_VEHICLE 5
#define MAX_SIMULATION 30000
#define MAX_TRAINING_INSTANCE 30000
#define MAX_TEST_INSTANCE 100
#define LAG_APPROXIMATE 50

class AVI
{
public:
  void approximation(ValueFunction *valueFunction);
};
