#include <iostream>
#include <cmath>

using namespace std;

double arithmaticMeanFunc(double vector[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += vector[i];
	}

	return (sum / n);
}

double harmonicMeanFunc(double vector[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += 1. / vector[i];
	}

	return (n / sum);
}

double geometricMeanFunc(double vector[], int n)
{
	double product = 1;
	for (int i = 0; i < n; i++)
	{
		product *= vector[i];
	}

	return pow(product, 1. / n);
}

double rootMeanSquareFunc(double vector[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += vector[i] * vector[i];
	}

	return sqrt(sum / n);
}

int main() 
{

  double vector[] = { 1., 2., 3., 4., 5. };
  int n = sizeof(vector) / sizeof(vector[0]);
  double ArithmeticMean;
  double HarmonicMean;
  double GeometricMean;
  double RootMeanSquare;
  
  ArithmeticMean = arithmaticMeanFunc(vector, n);
  HarmonicMean = harmonicMeanFunc(vector, n);
  GeometricMean = geometricMeanFunc(vector, n);
  RootMeanSquare = rootMeanSquareFunc(vector, n);

  cout  <<  "Arithmetic  Mean  =  "  <<  ArithmeticMean  <<  endl;
  cout  <<  "Harmonic  Mean     =  " <<  HarmonicMean   <<  endl;
  cout  <<  "Geometric  Mean   =  "  <<  GeometricMean   <<  endl;
  cout  <<  "RootMean  Square  =  "  <<  RootMeanSquare  <<  endl;

  cout << endl;
  return 0;
}
