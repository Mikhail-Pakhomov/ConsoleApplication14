#include <iostream>
#include <vector>

std::vector<int> findCE(int* arrA, int sizeA, int* arrB, int sizeB) {
	std::vector<int> cE;

	for (int i = 0; i < sizeA; i++) {
		for (int j = 0; j < sizeB; j++) {
			if (*(arrA + i) == *(arrB + j)) {
				cE.push_back(*(arrA + i));
				break;
			}
		}
	}

	return cE;
}

int main() {
	int A[] = { 1, 2, 3, 4, 5 };
	int B[] = { 4, 5, 6, 7, 8 };

	std::vector<int> result = findCE(A, 5, B, 5);
	std::cout << result.size() << std::endl;
	std::cout << "Intersection: ";
	for (int i = 0; i < result.size(); i++) {
		std::cout << result[i] << " ";
	}

	return 0;
}