#include <stdio.h>
#include <string.h>  //Подключаем эту библиотеку, чтобы использовать строковые функции   

void maskMobile(char* mobile){ //Функция, маскирующая номер, за исключением последних четырех цифр
    int len = strlen(mobile);  //Находим длину передаваемого числа
    int startMask = len - 4;

    for (int i = 0; i < len; i++) { 
        if (i < startMask) {  //Проходимся по всем цифрам номера и замаскируйте их, кроме последних 4 цифр
            mobile[i] = '*';  //Здесь мы должны использовать только кавычки '', так как передаем только один символ
        }
    }

};

int main(){
    char name[50];
    char dob[20];
    char mobile[12];

    printf("Insert your First and Second name:"); 
    fgets(name, sizeof(name), stdin); 
    strupr(name); //перевести введенные строки в верхний регистр

    printf("Insert your date of birt (for example: July, 14, 1999): ");
    fgets(dob, sizeof(dob), stdin);

    printf("Insert your phone number (for example: +998 99 999 99 99): ");
    fgets(mobile, sizeof(mobile), stdin); 

    maskMobile(mobile);

    printf("Name: %5s", name);
    printf("Date of birth: %5s", dob);
    printf("Phone number: %5s", mobile);

    return 0;
}
