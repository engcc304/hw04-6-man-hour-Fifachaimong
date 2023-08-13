/*
    เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด
    (ผลลัพธ์ของ Salary จะต้องอยู่ในรูปแบบ Decimal Number เท่านั้น เช่น 374,000)

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0342
        Input the working hrs: 
            8
        Salary amount/hr: 
            15000
    Output:
        Expected Output:
        Employees ID = 0342
        Salary = U$ 120,000.00

    Test case:
        Input the Employees ID(Max. 10 chars): 
            0000500349
        Input the working hrs: 
            11
        Salary amount/hr: 
            34000
    Output:
        Expected Output:
        Employees ID = 0000500349
        Salary = U$ 374,000.00
*/
#include <stdio.h>
#include <locale.h> // Include the locale.h header for formatting

int main() {
    setlocale(LC_NUMERIC, ""); // Set the locale for formatting

    char employeeID[11];
    int workingHours;
    double hourlySalary, totalSalary;

    printf("Input the Employee's ID (Max. 10 chars):\n");
    scanf("%s", employeeID);

    printf("Input the working hours:\n");
    scanf("%d", &workingHours);

    printf("Salary amount/hr:\n");
    scanf("%lf", &hourlySalary);

    totalSalary = workingHours * hourlySalary;

    // Print formatted output
    printf("Expected Output:\n");
    printf("Employee's ID = %s\n", employeeID);
    printf("Salary = U$ %'.2lf\n", totalSalary);

    return 0;
}

