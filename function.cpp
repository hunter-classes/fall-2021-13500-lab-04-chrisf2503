#include <iostream>
#include "function.h"

void box(int width, int height){
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			std::cout << "*";
		}
		std::cout << '\n';
	}

}
void checkerboard(int width, int height){
	std::string output = "";
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			if(i % 2 == 0){
				if(j % 2 == 0){
					output += "*";
				}
				else{
					output += " ";
				}
			}
			else{
				if(j % 2 == 0){
					output += " ";
				}
				else{
					output += "*";
				}
			}	
		}
		std::cout << output << '\n';
		output = "";
	}

}

void cross(int size){
	int gaps = size-2;
	std::string outputs[size/2];
	std::string build_ups;
	int end = (size/2)-1;
	for(int i = 0; i < size/2; i++){
		for(int j = 0; j < i; j++){
			build_ups += " ";
		}
		build_ups += "*";
		for(int j = 0; j < gaps; j++){
			build_ups += " ";
		}
		build_ups += "*";
		std::cout << build_ups << '\n';
		outputs[end] = build_ups;
		gaps -= 2;
		end--;
		build_ups = "";	
	}
	//std::cout << size/2 << '\n';
	for(int i = 0; i < size/2; i++){
		std::cout << outputs[i] << '\n';
	}

}

void lower(int length){
	std::string stairs;
	for(int i = 0; i < length; i++){
		stairs += "*";
		std::cout << stairs << '\n';
	}
}

void upper(int length){
	std::string stars = "";
	std::string space = "";
	std::string output = "";
	for(int i = 0; i < length; i++){
		for(int j = i; j < length; j++){
		       stars += "*";
		}
		if(i == 0){
			std::cout << stars << '\n';
			stars = "";
		}
		else{
			space += " ";
			output = space + stars;
			std::cout << output << '\n';
			stars = "";
		}
	}
}
void trapezoid(int width, int height){
	if(height > width){
		std::cout << "Impossible shape!" << '\n';
	}
	else{
		std::string space = "";
		std::string stars = "";
		std::string output = "";
		for(int i = 0; i < height; i++){
			for(int j = 0; j < width; j++){
				stars += "*";
			}
			output = space + stars;
			std::cout << output << '\n';
			stars = "";
			space += " ";
			width -=2;
		}
	}
}

void checkerboard3x3(int width, int height){
	int width_count = 0;
	int height_count = 1;
	bool need_space1 = true;
	bool need_space2 = false;
	std::string space = "";
	std::string stars = "";
	std::string output = "";
	for(int i = 0; i < height; i++){
		for(int j = 0; j < width; j++){
			if(need_space1 == true){
				width_count++;
				stars += "*";
				space = "";
				if(width_count == 3){
					need_space1 = false;
					output += stars;
				}
			}
			else{
				width_count--;
				space += " ";
				stars = "";
				if(width_count == 0){
					need_space1 = true;
					output += space;
				}
			}
			if(j == width-1){
				if(need_space1 == true){
					output += stars;
				}
				else{
					output += space;
				}
			}
		}
		if(need_space2 == false){
			height_count++;
			width_count = 0;
			need_space1 = true;
			if(height_count == 3){
				need_space2 = true;
			}
		}
		else{
			height_count--;
			width_count = 3;
			need_space1 = false;
			if(height_count == 0){
				need_space2 = false;
			}
		}
		std::cout << output << '\n';
		output = "";
		space = "";
		stars = "";
	}
}
