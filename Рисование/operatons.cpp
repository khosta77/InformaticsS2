#include "operations.h"

void multiply(array<float, 2>^ A, array<float, 2>^ B, array<float, 2>^ C) {
	if (A->GetLength(1) != B->GetLength(0))
		throw "Умножение матриц допустимо при равенстве строк второй матрицы и столбцов первой";
	int rows = C->GetLength(0);
	int cols = C->GetLength(1);
	int rows_B_cols_A = A->GetLength(0);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			for (int k = 0; k < rows_B_cols_A; k++) {
				C[i, j] += A[i, k] * B[k, j];
			}
		}
	}
}

void identity_mat(array<float, 2>^ E) {
	int sum = E->GetLength(0) + E->GetLength(1);
	for (int i = 0, j = 0; i + j < sum; i++, j++)
		E[i, j] = 1;
}

void move_mat(float dx, float dy, array<float, 2>^ T) {
	identity_mat(T);
	T[0, 2] = dx;
	T[1, 2] = dy;
}

void scale_mat(float kx, float ky, array<float, 2>^ S) {
	identity_mat(S);
	S[0, 0] = kx;
	S[1, 1] = ky;
}

void scale_mat(PointF c, float kx, float ky, array<float, 2>^ S) {
	scale_mat(kx, ky, S);
	PointF scaled_c = apply(c, S);
	S[0, 2] = c.X - scaled_c.X;
	S[1, 2] = c.Y - scaled_c.Y;
}

void rotate_mat(float phi, array<float, 2>^ R) {
	identity_mat(R);
	R[0, 0] = cos(phi);
	R[1, 1] = R[0, 0];
	R[0, 1] = -sin(phi);
	R[1, 0] = -R[0, 1];
}

void rotate_mat(PointF c, float phi, array<float, 2>^ R) {
	rotate_mat(phi, R);
	PointF rotated_c = apply(c, R);
	R[0, 2] = c.X - rotated_c.X;
	R[1, 2] = c.Y - rotated_c.Y;
}

PointF apply(PointF p, array<float, 2>^ M)
{
	PointF result;

	array<float, 2>^ p_coords = gcnew array<float, 2>(3, 1);
	p_coords[0, 0] = p.X;
	p_coords[1, 0] = p.Y;
	p_coords[2, 0] = 1;

	array<float, 2>^ res = gcnew array<float, 2>(3, 1);
	multiply(M, p_coords, res);

	result.X = res[0, 0];
	result.Y = res[1, 0];

	return result;
}
