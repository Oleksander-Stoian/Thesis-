#include <cmath>
#include <iostream>
#include "foo.h";
#include <list>
#include "MyForm2.h"




const double c = 10.0, c2 = c * c;
const double pi = 3.141592653589793,pi2=pi*pi;
double step1 = 0.0, step2 = 0.0, step3 = 0.0;
const double X1 = 5.0, X2 = 10.0;
int N_l, N_m;
//LISTS
//	Y
std::list<double> x1_list_Y;
std::list<double> x2_list_Y;
std::list<double> t_list_Y;
// U
std::list<double> x1_list_U;
std::list<double> x2_list_U;
std::list<double> t_list_U;
//=====================================
double** matrixC_copy = new double* [5];
double** matrixG_copy = new double* [5];
void CreateMat_copy()
{

	int i;
	for (i = 0; i < 5; ++i)
	{
		matrixC_copy[i] = new double[5];
	}
	for (i = 0; i < 5; ++i)
	{
		matrixG_copy[i] = new double[5];
	}
}

//=============U and Y=================

double** matrixY = new double* [5];
double** matrixU = new double* [5];

void CreateMat_y()
{

	int i;
	for (i = 0; i < 5; ++i)
	{
		matrixY[i] = new double[5];
	}
	
}
void CreateMat_u()
{

	int i;
	for (i = 0; i < 5; ++i)
	{
		matrixU[i] = new double[5];
	}

}
double dy_dx1(double x1,double x2,double t)
{
	step1 = cos((pi * x1) / X1) * (cos((pi * x2) / X2) - 1);
	step2 = pi2 * step1 * sin(c * t);
	step3 = -step2 / (X1 * X1);
	return step3;
}
double dy_dx2(double x1, double x2, double t)
{
	step1 = (cos((pi * x1) / X1)-1) * cos((pi * x2) / X2);
	step2 = pi2 * step1 * sin(c * t);
	step3 = -step2 / (X2 * X2);
	return step3;
}
double dy_dt(double x1, double x2, double t)
{
	step1 = cos((pi * x1) / X1) - 1;
	step2 = cos((pi * x2) / X2) - 1;
	step3 = cos(c2 * step1 * step2 * sin(c * t));
	return step3;
}

double equationsL(double& t, double& x1, double& x2)// ïîõ³äí³ ïî çì³íàõ 
	{
	double  Dt = 0, Dx1 = 0, Dx2 = 0;
	Dt = dy_dt(x1, x2, t);
	Dx1 = dy_dx1(x1, x2, t);
	Dx2 = dy_dx2(x1, x2, t);
	step1 = Dt - c2 * (Dx1 - Dx2);
		return  step1;
		
	}

double equationsY(double& t, double& x1_sl, double& x2_sl)
{
	double step4, step5, sinx1, sinx2, sint;
	/*sinx1 = sin(x1 + 1);
	sinx2 = sin(x2 *0.2);
	sint = sin(t);
	y = sinx1 * sinx2 + sint;*/
	
	
	step1 = ((pi * x1_sl) - (pi * X1)) / X1;
	step2 = cos(step1) + 1;
	step3 = ((pi * x2_sl) - (pi * X2)) / X2;
	step4 = cos(step3) + 1;
	step5 = step2 * step4 * sin(c * t);

	return step5;
}

//void equationsR(double x1_sL[N_l], double x2_sL[N_l], double x1_sm[N_m], double x2_sm[N_m],double r[N_m])
//{
//	double index;
//	
//	for (int i = 0; i < N_m; ++i)
//	{
//		step1 = x1_sL[i] - x1_sm[i];
//		
//		step2 = x2_sL[i] - x2_sm[i];
//		step3 = (step1 * step1) + (step2 * step2);
//		r[i] = sqrt(step3);
//
//	}
//	
//}

double compare()
{

	for (int i = 0; i < N_l; i++)
		for (int j = 0; j < N_m; j++)
		{
			if (matrixC_copy[i][j] == matrixG_copy[i][j])
			{
				
			}
			else
			{
				return 1;
			}
		}
	
	return 0;// ð³âí³
}

void matrix_G(double *t_sL, double* t_sm, double** matrixG, double* x1_sL, double* x2_sL, double* x1_sm, double* x2_sm)
{
	double	r, step4;
	double r2, H = 0;

	for (int i = 0; i < N_l; i++)
	{
		for (int j = 0; j < N_m; ++j)
		{
			//=======R=======
			step1 = x1_sL[i] - x1_sm[j];
			step2 = x2_sL[i] - x2_sm[j];
			step3 = pow(step1, 2) + pow(step2, 2);
			r = sqrt(step3);
			//===============
			r2 = r * r;
			step1 = (t_sL[i] - t_sm[j]) - (r / c);
			if (step1 < 0)
				H = 0;
			else if(step1 == 0)
			{
				H = 0.5;
			}
			else
			{
				H = 1;
			}
			step1 = H * step1;
			step2 = sqrt(c2 * pow((t_sL[i] - t_sm[j]), 2));
			step3 = 2 * pi * c;
			step4 = (step2 * step3) - r;
			matrixG[i][j] = step1 / step4;
		}


	}

	/*for (int i = 0; i < N_m; i++)
	{
		for (int j = 0; j < N_l; j++)
		{
			
			matrixG[i][j] = 2;
		}
	}*/


}

void matrix_YU(double arr[], int &i, double** Mat)
{
	
	
		for (int j = 0; j < N_m; j++)
		{
			Mat[i][j] = arr[i];
		
		}
	
	
}

void matrix_ziro(double** Mat)
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			Mat[i][j] = 0;

		}
	}

}

//void PrintMat(double** Mat)
//{
//	for (int i = 0; i < N_m; i++)
//	{
//		for (int j = 0; j < N_l; j++)
//			cout << Mat[i][j] << "\t\t\t";
//		cout << endl;
//	}
//}
//
//void PrintVector(double vec[], size_t N)
//{
//	cout << "Vecrot :" << endl;
//	for (int i = 0; i < N; ++i)
//	{
//		cout << vec[i] << endl;
//	}
//}

void addY(double x1,double x2,double t,int exp)
{
	int i,j;
	
	////SL  Y(s)
	//double* x1_sL = new double[5];//		X1	
	//double* x2_sL = new double[5];//		X2
	//double* t_sL = new double[5];//		T
	double* arrY = new double[5];//		S

	//x1_list_Y.push_back(x1);
	//x2_list_Y.push_back(x2);
	// t_list_Y.push_back(t);
	// 
	// copy(x1_list_Y.begin(), x1_list_Y.end(), x1_sL);
	// copy(x2_list_Y.begin(), x2_list_Y.end(), x2_sL);
	// copy(t_list_Y.begin(), t_list_Y.end(), t_sL);

	 //Vector Y_i
	// for ( i = 0; i < 5; ++i)
		 arrY[exp] = equationsY(t, x1, x2);	//Y(sL)
		 //arrY[i] = equationsY(t_sL[i], x1_sL[i], x2_sL[i]);	//Y(sL)
	 //matrix_YU(arrY, exp, matrixY);
	 if (exp == 0)
	 {
		 CreateMat_y();
		 matrix_ziro(matrixY);
	 }

	 for (j = 0; j < 5; j++)
	 {
		 matrixY[exp][j] = arrY[i];

	 }

		 

}


void addU(double x1, double x2, double t,int exp)
{
	int i,j;
	

	//Sm  U(s)
	double* x1_sm = new double[5];//		X1'	
	double* x2_sm = new double[5];//		X2'
	double* t_sm = new double[5];//		T'
	double* arrU = new double[5];

	x1_list_U.push_back(x1);
	x2_list_U.push_back(x2);
	t_list_U.push_back(t);

	copy(x1_list_U.begin(), x1_list_U.end(), x1_sm);
	copy(x2_list_U.begin(), x2_list_U.end(), x2_sm);
	copy(t_list_U.begin(), t_list_U.end(), t_sm);

	// vector U_i
	for (i = 0; i < 5; ++i)
	{
		arrU[i] = equationsL(t_sm[i], x1_sm[i], x2_sm[i]);
	}

	if (exp == 0)
	{
		CreateMat_u();
		matrix_ziro(matrixU);
	}

	for (j = 0; j < 5; j++)
	{
		matrixU[exp][j] = arrU[i];

	}
}

void mult(double** x, double n, double m, double** y, double** res)
{
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {

			for (int inner = 0; inner < m; inner++) {
				res[row][col] += x[row][inner] * y[inner][col];
			}

		}

	}
}

void giveMat(double** matC,double** matG)
{
	int i, j;
	double** res = new double* [5];
	for (i = 0; i < 5; ++i)
	{
		res[i] = new double[5];
	}

	double** matrixG = new double* [5];
	for (i = 0; i < 5; ++i)
	{
		matrixG[i] = new double[5];
	}

	mult(matrixY, 5, 5, matrixU, res);

	for ( i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			matC[i][j] = res[i][j];
			matG[i][j] = res[i][j];//!!!
		}
	}
}

// Matrix multiplication


//exp - expiriment
void start(int l,int m,int exp,int num)
{
	
		N_l = l;
		N_m = m;
		
		
		//double* arrY_s = new double[N_m];//		S'
		//double* arrL = new double[N_m];

		//		
		//double* arrU_T = new double[N_m];
		//// U^+
		//// M-êîëîíêà  L-ñòðîêà
		//int i, j;
		//	
		//
		//
		//for ( i = 0; i < 5; i++)
		//{
		//	for (j = 0; j < 5; j++)
		//	{
		//		res[i][j] = 0;
		//	}
		//}
		//double** matrixG = new double* [5];
		//for (i = 0; i < 5; ++i)
		//{
		//	matrixG[i] = new double[5];
		//}

		//if (exp == 0)
		//{

		//	matrix_ziro(matrixY);
		//	matrix_ziro(matrixU);
		//	matrix_ziro(matrixG);
		//}



		
		

		//matrix_G(t_sL, t_sm, matrixG, x1_sL, x2_sL, x1_sm, x2_sm);
		//for (int i = 0, g = N_l - 1; i < N_l; ++i) //???????????????? ÏÎÇÆÅ ÒÐÀÍÑÏÎÍÓÉ ÌÀÒÐÈÖÓ
		//{
		//	arrU_T[i] = arrU[g];
		//	--g;
		//}
		
		
		//giveMat(matrixC, N_m, N_l);

		

	/*	if (num == 2)
		{
			mult(matrixY, 5, 5, matrixU, res);
			
			CreateMat();
			for ( i = 0; i < 5; i++)
			{
				for ( j = 0; j < 5; j++)
				{
					matrixC_copy[i][j] = matrixG[i][j];
					matrixG_copy[i][j] = res[i][j];
				}
			}
		}*/
		
		/*std::cout << "The array C is" << std::endl;
		for ( i = 0; i < 15; i++)
		{
			for ( j = 0; j < 15; j++)
			{

				std::cout << res[i][j] << ' ';
			}
			std::cout << std::endl;
		}
		for (i = 0; i < 15; i++)
		{
			for (j = 0; j < 15; j++)
			{

				std::cout << matrixG[i][j] << ' ';
			}
			std::cout << std::endl;
		}*/
	
}


