#include<stdio.h>

int main () {

    int value = 1, *pointer = NULL;
    
    // Sai! pointer cần địa chỉ. Nhưng value không phải là cái địa chỉ đó.
    // pointer = value;
        
    //Sai! *pointer là giá trị của biến mà con trỏ đang trỏ tới,&value là địa chỉ.
    // *pointer = &value;
    
    // Đúng! pointer cần 1 địa chỉ, &value là địa chỉ của biến value.
    // pointer = &value;
    
    // Đúng! *pointer là giá trị của biến mà con trỏ đang trỏ tới, và value cũng là giá trị (không phải địa chỉ).
    *pointer = value;

    return 0;
}