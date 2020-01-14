#include "cpp_side.h"
#include <cstdint>

std::vector<int> do_things(std::vector<int> data){
	for(auto &d:data){
		d *= 2;
	}
	return data;
}

std::vector<int> do_things_to_every_second_line(std::vector<int> data, std::vector<int> shape){
	for(size_t i=0; i<shape.at(0); i+=2){
		for(size_t j=0; j<shape.at(1); j++){
			data.at(i*shape[1]+j) *= 2;
		}
	}
	return data;
}