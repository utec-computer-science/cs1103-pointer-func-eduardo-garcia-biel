#include <iostream>
using namespace std;


void * _bubblesort_(
	void * _array_, 
	void (*_puntero_) (void *, int _i, int &flag),
	int _tam_
){
	int flag = 0;
	for (int i = 1; i < _tam_ ; i ++)
    {
		for(int k = 0; k < _tam_-i; k++)
        {
			_puntero_(_array_,k,flag);
        }
        if (flag==0)
        break;
    }
	return _array_;
}

void  _b_int_ (void * _vector_, int _i,int &_k){
    int *intPtr{(int*)(_vector_)};
    if(intPtr[_i]>intPtr[_i+1]){
        swap(intPtr[_i], intPtr[_i+1]);
        _k=1;
    }   
}

void  _b_float_ (void * _vector_, int _i,int &_k){
float *intPtr{(float*)(_vector_)};
    if(intPtr[_i]>intPtr[_i+1]){
        swap(intPtr[_i], intPtr[_i+1]);
        _k=1;
    }  
}

void  _b_double_ (void * _vector_, int _i,int &_k){
 double *intPtr{(double*)(_vector_)};
    if(intPtr[_i]>intPtr[_i+1]){
        swap(intPtr[_i], intPtr[_i+1]);
        _k=1;
    }  
}

void  _b_char_ (void * _vector_, int _i,int &_k){
 char *intPtr{(char*)(_vector_)};
    if(intPtr[_i]>intPtr[_i+1]){
        swap(intPtr[_i], intPtr[_i+1]);
        _k=1;
    }  
}

template<typename T>
void print_array(T array){
    for (int i=0;i<sizeof(array)+1;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
	float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);	
	print_array(_array_1);
	_bubblesort_(_array_2,_b_float_,5);
	print_array(_array_2);
	_bubblesort_(_array_3,_b_double_,5);
	print_array(_array_3);
	_bubblesort_(_array_4,_b_char_,6);
	print_array(_array_4);

    return 0;
}