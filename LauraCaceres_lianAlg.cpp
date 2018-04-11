#include <iostream>
#include <cstdlib>


/*int main (){

//Esto es un vector de 10 componentes
double *a=new double [10];
//matriz
double **mat=new double *[4];
int i;

//Rellena las filas
for (i=0;i<4;i++){
 	mat[i]=new double[5];=
}

       
int j;
for (i=0;i<4;i++){
	for (j=0;j=5;j++){
		mat[i][j]=i*j;
		std::cout<<mat[i][j]<<"";
		}
		std::cout<<std::endl;
  }
*/
 
//Inicializacion matrices Y Multiplicacion Matricial 
double **matrix_product(double **m1, double**m2,int filam1,int colum1, int filam2 , int colum2);
double **get_matrix(int M, int N);

int main(){
	int varM1;
	cout <<"Valor M de la matri 1:"<<endl;
	cin >> varM1;
	int varN1;
	cout << "Valor N de la matriz 1:"<<endl;
	cin >>varN1;
	int varM2;
	cout <<"Valor M de la matri 2:"<<endl;
	cin >> varM2;
	int varN2;
	cout <<"Valor N de la matriz 2:"<<endl;
	cin >> varN2;
   	
	cout << "Matriz 1:"<<endl;
	double **m1= get_matrix(varM1,varN1);
	cout << "Matriz 2:"<< endl;
	double **m2= get_matrix(varM2,varN2);
	cout << "Resultado del producto de la Matriz 1 y la Matriz 2 es:" << endl;
	double **m3= matrix_product(m1,m1, varM1, varM2,varN1,varN2);
	cout < m3 <<endl;
	return 0;
}

double **matrix_product(double **m1, double**m2,int filam1,int colum1, int filam2 , int colum2)
	double **m3 = new double *[filam1];
	int i;
	for (int i=0; i<filam1; i++){
		m3[i]= new double [colum2]; 
	}
	int j;
	for (i=0;i<filam1;i++){
		for (j=0;j=colum2;j++){
		//llena la matriz con el resultado del producto 
		m3[i][j]=0;
	int k;
	for (k=0;k<colum1;k++){
		m3[i][j] += m1[i][k]*m2[k][j];
	}

    }	
    return m3;
}


	
	








	






}		
