#include <complex>
#include <iostream>
constexpr auto rows = 22, columns = 78, iterations = 20;
int main(){
	for(auto row = 0; row < rows; ++row){
		for(auto column = 0; column < columns; ++column){
			std::complex<float> z, c = {
				(float)column * 2 / columns - 1.5f,
				(float)row * 2 / rows - 1				
			};
			int iteration = 0;
			while(abs(z) < 2 && ++iteration < iterations)
				z = pow(z, 2) + c;
			std::cout << (iteration == iterations ? '#' : '.');
		}
		std::cout << '\n';
	}
}
