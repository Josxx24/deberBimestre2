#include <iostream>
#include <math.h>

using namespace std;

//Fernando Josue Aldaz Lascano
//fernando.aldaz@epn.edu.ec
//1726623000


int aldazSerie00(int n){

	for(int i=0;i<n;i++){
		if(i%2==0){
			cout << "+ ";
		}else{
			cout << "- ";
		}
	}

	cout << "\n\n------------------------------\n\n";

	return 1;
}

int aldazSerie10(int n){
	int a=1;

	for(int i=0;i<n;i++){
		a=3*pow(3,i);
		cout << a << ", " ;
	}

	cout << "\n\n------------------------------\n\n";

	return 2;
}

int aldazSerie20(int n){
	for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
            	if(i==5 && j==2 || i==5 && j==3){
                	printf("%d",(i+j)*2);
				}else if((i+j)==6 && i>j && j!=0){
                    printf("%d",i+j+3);
                }else if (j==i){
                    printf("*");
                }
                else if (j==0)
                {
                    printf("+");
                }
                else if (i>j)
                {
                    printf("%d",i+j);
                }
                
                printf("  ");
            }    
            printf("\n");
        }

	cout << "\n\n------------------------------\n\n";
	
	return 3;
}

int aldazSerie30(int n){
	
	int cont=0,te;

	for(int i=1;i<=n*2;i++){
			for(int j=1;j<=32-i;j++){
				cout << " ";
			}
			te=i+cont;
			for(int j=1;j<=te;j++){
				if(j==1 || j==te){
					if(i%2 == 0){
						cout << char(179);
					}else{
						cout << char(196);
					}
				}else{
					cout << char(32);
				}
			}
			cont++;
			cout << endl;
		}

	cout << "\n\n------------------------------\n\n";

	return 4;	
}

int main(){
	int n;

	cout << "Ingrese el numero de signos para las funciones: ";
	cin >> n;
	cout << endl;

	aldazSerie00(n);
	aldazSerie10(n);
	aldazSerie20(n);
	aldazSerie30(n);
}