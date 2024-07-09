#include <iostream>

class Matrix {
private:
    int rows, cols;
    int **data;

public:
    // Constructor
    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        // Allocate memory for the matrix
        data = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
        }
    }

    // Destructor to free memory
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // Input matrix elements
    void inputMatrix() {
        std::cout << "Enter matrix elements:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
                std::cin >> data[i][j];
            }
        }
    }

    // Display matrix elements
    void displayMatrix() {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Matrix multiplication
    Matrix multiply(const Matrix& other) {
        if (cols != other.rows) {
            std::cerr << "Error: Matrix dimensions are not compatible for multiplication." << std::endl;
            exit(1);
        }

        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }
};

int main() {
    // Get matrix dimensions
    int m, n, p;
    std::cout << "Enter dimensions of the first matrix (m x n): ";
    std::cin >> m >> n;
    std::cout << "Enter dimensions of the second matrix (n x p): ";
    std::cin >> n >> p;

    // Create matrices
    Matrix matrix1(m, n);
    Matrix matrix2(n, p);

    // Input matrix elements
    matrix1.inputMatrix();
    matrix2.inputMatrix();

    // Display matrices
    matrix1.displayMatrix();
    matrix2.displayMatrix();

    // Multiply matrices
    Matrix resultMatrix = matrix1.multiply(matrix2);

    // Display result
    std::cout << "Result after multiplication:" << std::endl;
    resultMatrix.displayMatrix();

    return 0;
}
