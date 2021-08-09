#include <iostream>
#include<stdlib.h>
#include<time.h>
#include<windows.h> 
using namespace std;

// lEER ELEMENTOS DE UN VECTOR
void leer_vector(int vector[], int tamanio){
    for (int x=0; x<tamanio; x++) {
        cout << "Ingrese el elemento #" << (x + 1) << ": ";
        cin >> vector[x];
    }
}

// MUESTRA EL VECTOR
void imprime_vector(int vector[], int tamanio){
    cout << endl << endl << "Elementos del vector";
    for (int x=0; x<tamanio; x++){
        cout << endl << "Elemento # " << (x + 1) << " : " << vector[x];
    }
}

// SUMA DE ELEMENTOS DE VECTORES
double sumatoria_vector(int vector[], int tamanio){
    double suma = 0;
    for (int x=0; x<tamanio; x++){
        suma = suma + vector[x];
    }
    return suma;
}

// PROMEDIO DE VALORES MEDIANTE VECTORES
double promedio_vector(int vector[], int tamanio){
    double suma = 0;
    suma = sumatoria_vector(vector, tamanio) / tamanio;
    return suma;
}

// MÁXIMO DE UN VECTOR (AHORA YA NO POR VOID)
double max_vector(int vector[], int tamanio) {
    double mayor=vector[0];
    for (int x=1; x<tamanio; x++) {
        if (vector[x] > mayor) {
            mayor=vector[x];
        }
    }
    return mayor;
}

// MÍNIMO DE UN VECTOR (AHORA YA NO POR VOID)
double min_vector(int vector[], int tamanio){
    double menor=vector[0];
    for (int x=1; x<tamanio; x++){
        if (vector[x] < menor){
            menor=vector[x];
        }
    }
    return menor;
}

// REPASAR REFERENCIAS
void max_min_referencia(int vector[], int tamanio, int &ma, int &mi){
    ma = max_vector(vector, tamanio);
    mi = min_vector(vector, tamanio);
}

// GENERAR VECTOR CON ELEMENTOS ALEATORIOS
void vector_aleatorio(int vector[], int tamanio){
    for (int x=0; x<tamanio; x++){
        vector[x] = rand();
    }
}

// diseñe la función que realice el intercambio
void intercambio(int &num1, int &num2){
	int aux;
	aux = num1;
	num1 = num2;
	num2 = aux;
}

// FUNCION ORDENAR VALORES DEL VECTOR DE MENOR A MAYOR (EN CLASES)
void ordenar(int vector[], int tamanio){
    for (int x=0; x<tamanio; x++){
        for (int i=x+1; i<tamanio; i++){
            if (vector[x] > vector[i]){
                intercambio(vector[x], vector[i]);
            }
        }
    }
}

// TAREA 1): FUNCIÓN QUE BUSQUE NÚMERO ENTERO EN EL VECTOR
// 			 LA FUNCIÓN DEBE DEVOLVER VERDADERO SI EL ELEMENTO EXISTE EN EL VECTOR O FALSO PARA LO CONTRARIO
bool elemento_entero_en_vector(int vector[], int max){
    int tof = true;
    for (int x=0; x<max; x++){
        int a = vector[x];
        if ((vector[x]-a) > 0){
            tof = false;
        }
			else{
           		tof = true;
           		break;
        	}
    }
    return tof;
}

// TAREA 2): FUNCIÓN QUE BUSQUE NÚMERO ENTERO EN EL VECTOR
// 			 LA FUNCIÓN DEBE DEVOLVER LA POSICÓN DEL ELEMENTO ENTERO, SI NO EXISTE DEBE DEVOLVER -1
int posicion_elemento_entero_en_vector(int vector[], int max){
    int pos = 0;
    for (int x=0; x<max; x++){
        int a = vector[x];
        if ((vector[x]-a) > 0){
            pos = -1;
        } 
			else{
           		pos = x+1;
            break;
        	}
    }
    return pos;
}

// TAREA 1): CORRECCIÓN - BUSCAR NUMERO ENTERO DE UN VECTOR (POR BÚSQUEDA SECUENCIAL)
bool buscar(int array[], int tamanio, int elemento){
	for (int i=0; i<tamanio; i++){
		if(array[i]==elemento)
		return true;
	}
	return false;
}

//TAREA 2) CORRECCIÓN
int buscar_pos(int array[], int tamanio, int elemento)
{
    for(int i=0; i<tamanio;i++)
    {
        if(array[i]==elemento)
            return i;
    }
    return -1;
}

// CONTAR ELEMENTOS
int cantidad_elemento_vector(int num[], int tamanio, int elemento){
    int acum=0;
    for(int i=0; i<tamanio; i++){
        if(num[i]==elemento)
            acum=acum+1;
    }
    return acum;
}

// ORDENAR DE MAYOR A MENOR
void ordenar_des(int vector[], int tamanio){
    for (int x=0; x<tamanio; x++){
        for (int i=x+1; i<tamanio; i++){
            if (vector[x] < vector[i]){
                double aux;
                aux = vector[x];
                vector[x] = vector[i];
                vector[i] = aux;
            }
        }
    }
}

// VECTOR DE NOMBRES 
void vector_nombres(string nombres[], int tamanio){
	for (int x=0; x<tamanio; x++){
		cout << endl << nombres[x]; 
	}
}

// VECTOR ORDENAR NOMBRES
void ordenar_nombres(string vector[], int tamanio){
    for (int x=0; x<tamanio; x++){
        for (int i=x+1; i<tamanio; i++){
            if (vector[x].compare(vector[i]) < 0){
                string aux;
                aux = vector[x];
                vector[x] = vector[i];
                vector[i] = aux;
            }
        }
    }
}

double performancecounter_diff(LARGE_INTEGER *a, LARGE_INTEGER *b)
{
	LARGE_INTEGER freq;
	QueryPerformanceFrequency(&freq);
	return (double)(a->QuadPart - b->QuadPart) / (double)freq.QuadPart;
}

// 1. Diseñe la función que imprima el vector de nombres
// 2. Diseñe la función que ordene descendentemente (Z-A) el vector de nombres
// PRESENTAR HASTA EL DOMINGO 8 DE AGOSTO, hasta las 23:00 GITHUB

int main(){
	setlocale(LC_ALL, "spanish");
    srand(time(NULL));
    const int max = 20;
    int num[max];
    
   // leer_vector(num, max);
    //imprime_vector(num, max);
    
  //  double suma = sumatoria_vector(num, max); 
  //  cout << endl << "La sumatoria del vector es: " << suma;
    
  //  double promedio = promedio_vector(num, max);
 //   cout << endl << "El promedio del vector es: " << promedio;
    
  //  cout << endl << "El mayor elemento del vector es: " << max_vector(num, max);
  //  cout << endl << "El menor elemento del vector es: " << min_vector(num, max);
    
 //   double v1, v2;
//    cout << endl << endl << "(MAYOR ELEMENTO Y MENOR ELEMENTO DE UN VECTOR POR REFERENCIA)";
////    max_min_referencia(num, max, v1, v2);
//    cout << endl << "El elemento mayor es: " << v1;
 //   cout << endl << "El elemento menor es: " << v2;
    /*
    cout << endl << endl << "(VECTOR ALEATORIO)";
    double vector_1[max];
    vector_aleatorio(vector_1, max);
    imprime_vector(vector_1, max); */
    
   /* // (TAREA 02/08/2021) //
     1)
    cout << endl << endl << "(¿EXISTE ENTERO EN EL VECTOR?)" << endl;
    int f1 = elemento_entero_en_vector(num, max);
    if (f1 == 1){
        cout << endl << "SI HAY UN ENTERO EN EL VECTOR" << endl;
    }
		else{
    		cout << endl << "NO HAY UN ENTERO EN EL VECTOR" << endl;
    	}
    	
    // 2)	
    cout << endl << "(POSICIÓN DEL ENTERO)" << endl;	
    int f2 = posicion_elemento_entero_en_vector(num, max);
    if (f2 == -1){
        cout << endl << "(-1) NO EXISTE ENTERO EN EL VECTOR" << endl;
    } 
		else{
       		cout << endl << "LA POSICIÓN DEL ENTERO ES: " << f2 << endl;
    	}
    */
	
	// buscar elemento en el vector
//	num[5]=15;
//	int x=15;
	
//	imprime_vector(num, max);
	
/*	if(buscar(num, max, x)){
		cout << endl  << "El elemento " << x << " si existe...";
	}	else{
			cout << endl << "El elemento " << x << " no existe...";		
	}
	
	int pos = buscar_pos(num, max, x);
    if(pos==-1)
        cout << endl << "No existe el elemento " << x << " en el vector...";
    else
        cout << endl << "El elemento " << x << " existe en la posición: " << pos;
        
	cout << endl << "El elemento " << x << " existe: " << cantidad_elemento_vector(num, max, x) << " veces";
	
	ordenar(num, max);
	cout << endl << endl << "Ordenar ascendiente";
	imprime_vector(num, max);
	cout << endl << endl << "Ordenar descendiente";
	ordenar_des(num, max);
	imprime_vector(num, max); */
	
	
//	LARGE_INTEGER t_ini, t_fin;
//	double secs;
	// captura el tiempo inicial del proceso
//	QueryPerformanceCounter(&t_ini);
//	ordenar(num, max);
	
	// captura el tiempo después de concluir el proceso
//	QueryPerformanceCounter(&t_fin);
//	secs = performancecounter_diff(&t_fin, &t_ini);
//	cout<<"\nORDENACION SECUENCIAL: Tiempo EJECUCION en ms: "<<(secs*1000.0);
	
//	imprime_vector(num, max);
	
// VECTOR DE STRING (NOMBRES DE PERSONAS)
/*
	int tam=6;
	string nombres[tam]={"Juan", "Antonio", "Carlos", "Martha", "Pedro", "Amalia"};
	cout << endl << endl << "VECTOR NOMBRES";
	for(int k=0; k<tam; k++){
		cout << endl << nombres[k];
	}
*/
	
	// TAREA PARA 08/08/2021
	const int tam = 6;
	string nombres[tam]={"Juan", "Antonio", "Carlos", "Martha", "Pedro", "Amalia"};
	cout << endl << endl << "1. VECTOR NOMBRES";
	vector_nombres(nombres, tam);
	
	cout << endl << endl << "2. ORDENAR VECTOR NOMBRES (Z-A)";
	ordenar_nombres(nombres, tam);
	vector_nombres(nombres, tam);
	
	
	// 1. FUNCIÓN QUE IMPRIMA VECTOR DE NOMBRES
	
	// 2. FUNCIÓN QUE ORDENE DESCENDENTEMENTE (Z-A) EL VECTOR DE NOMBRES
	
    return 0;	
}
