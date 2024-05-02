using namespace std;
#include <iostream>
const int X=7;
const int Y=7;

void printMatrix(int arr[X][Y], int m, int n);

class Matrix{
    public:
        const static int M=7, N=7;
        int mtx[M][N];
        int rows, cols;
        Matrix(int m, int n);
        void addWith(Matrix matrix2);
        void multiplyWith(Matrix matrix2);
        void transpose();
        void print();
};

Matrix :: Matrix(int m, int n) : rows(m), cols(n) {
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<"Enter the "<<i+1<<"x"<<j+1<<" element of the matrix : ";
            cin>>mtx[i][j];
        }
    }
}

void Matrix :: print(){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<mtx[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void Matrix :: addWith(Matrix matrix2){
    if(rows!=matrix2.rows || cols!=matrix2.cols){
        cout<<"Matrices are incompatible for addition as they have unequal dimensions.";
    }
    else{
        int sum[X][Y];
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                sum[i][j]=mtx[i][j]+matrix2.mtx[i][j];
            }
        }
        printMatrix(sum, rows, cols);
    }
}

void Matrix :: multiplyWith(Matrix matrix2){
    if(cols!=matrix2.rows){
        cout<<"Matrices are incompatible for multiplication.";
    }
    else{
        int prod[X][Y];
        for(int i=0; i<rows; i++){
            for(int j=0; j<matrix2.cols; j++){
                prod[i][j]=0;
                for(int k=0; k<cols; k++){
                    prod[i][j]+=mtx[i][k]*matrix2.mtx[k][j];
                }
            }
        }
        printMatrix(prod, rows, cols);
    }
}

void Matrix :: transpose(){
    int trans[N][M];
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            trans[i][j]=mtx[j][i];
        }
    }
    printMatrix(trans, cols, rows);
}

int main() {
    Matrix A(3, 3);
    cout<<endl;
    Matrix B(3, 3);
    cout << "Matrix A:\n";
    A.print();
    cout << "Matrix B:\n";
    B.print();
    cout << "Sum of matrices A and B :\n";
    A.addWith(B);
    cout << "\nProduct of matrices A and B : \n";
    A.multiplyWith(B);
    cout << "\nTranspose of A : \n";
    A.transpose();
    return 0;
}

void printMatrix(int arr[X][Y], int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}