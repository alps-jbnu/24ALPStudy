#include <iostream>
#include <vector>

using namespace std;

class Matrix{
private:
    int size;
    vector<vector<bool> > matrix;
public:
    Matrix(int size_input, bool initializer) : size(size_input), matrix(size, vector<bool>(size, false))
    {
        for(int i = 0; i < size; i++)
            for(int j = 0; j < size; j++){
                matrix[i][j] = initializer;
            }
    }

    explicit Matrix(int size_input) : size(size_input), matrix(size, vector<bool>(size))
    {
        for(int i = 0; i < size; i++)
            for(int j = 0; j < size; j++){
                int value;
                cin >> value;
                matrix[i][j] = (bool) value;
            }
    }

    Matrix operator*(Matrix & other) const{
        Matrix new_matrix(size, false);
        for(int i = 0; i < size; i++){
            for(int j = 0; j < size; j++){
                for(int k = 0; k < size; k++){
                    new_matrix.matrix[i][j] = new_matrix.matrix[i][j] || ((this -> matrix)[i][k] && other.matrix[k][j]);
                }
            }
        }

        return new_matrix;
    }

    Matrix operator+(Matrix & other) const
    {
        Matrix new_matrix(size, false);
        for(int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                new_matrix.matrix[i][j] = (this -> matrix)[i][j] || other.matrix[i][j];
            }
        }

        return new_matrix;
    }

    Matrix& operator=(const Matrix & other)
    {
        for(int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                (this -> matrix)[i][j] = other.matrix[i][j];
            }
        }

        return *this;
    }

    void display(){
        for(int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++)
                cout << matrix[i][j] << ' ';
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    Matrix input(n);
    Matrix temp(n, false);
    Matrix output(n, false);

    temp = input;
    output = temp;
    for(int i = 1; i < n; i++)
    {
        temp = temp * input;
        output = output + temp;
    }

    output.display();
}
