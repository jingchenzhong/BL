#include <stdio.h>
#include "staticx.h"

Data::Data() {
	data_ = 0;
	fprintf(stdout, "ctor() this[%p]\n", this);
}
Data::~Data() {
	fprintf(stdout, "dtor() this[%p]\n", this);
}

void Data::print() {
	data_++;
	fprintf(stdout, "data[%d]\n", data_);
}


Data data;

Data* get_data() {
	return &data;
}