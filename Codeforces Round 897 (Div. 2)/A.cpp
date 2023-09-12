#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    // Initialize the number of test cases
    int num_test_cases = 1;

    // Read the number of test cases from input
    std::cin >> num_test_cases;

    // Process each test case
    while (num_test_cases--) {
        int n; // Number of elements
        std::cin >> n;

        // Initialize a vector to store elements
        std::vector<int> elements(n);

        // Read elements into the vector
        FOR(i, 0, n) {
            std::cin >> elements[i];
        }

        // Create a mapping of element indices to their positions after sorting
        std::unordered_map<int, int> index_to_position;
        std::vector<std::pair<int, int>> sorted_elements_with_indices;

        // Create pairs of (element, index) for sorting
        FOR(i, 0, n) {
            sorted_elements_with_indices.push_back({elements[i], i});
        }

        // Sort the elements with their indices
        std::sort(sorted_elements_with_indices.begin(), sorted_elements_with_indices.end());

        int last_position = n;

        // Assign positions to the elements
        FOR(i, 0, n) {
            index_to_position[sorted_elements_with_indices[i].second] = last_position;
            last_position -= 1;
        }

        // Print the positions of the elements
        FOR(i, 0, n) {
            std::cout << index_to_position[i] << " ";
        }

        std::cout << "\n"; // End of this test case
    }

    return 0;
}