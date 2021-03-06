#include <fstream>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

#include "neuron.h"
#include "network.h"


int main () {
	int t_ = 0;
	int t_stop_ = 10000;
	Network cortex ;
	cortex.set_neuron ();
	cortex.set_all_target();
	cortex.general_update(t_, t_stop_);
	return 0;
}
