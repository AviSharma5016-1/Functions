#include <iostream>
using namespace std;


void IncreaseByValue(int salary, int years, int research_projects, int new_projects, int profit) {
    
        salary += 0.20 * salary;
   
}

 
void IncreaseByReference(int &salary, int years, int research_projects, int new_projects, int profit) {
    
        salary += 0.20 * salary;
   
    }

int main() {
    int employees;
    cout << "Enter employee ID: ";
    cin >> employees;

    int years;
    cout << "Enter years of service: ";
    cin >> years;

    int research_projects;
    cout << "Enter number of research projects: ";
    cin >> research_projects;

    int new_projects;
    cout << "Enter number of new projects: ";
    cin >> new_projects;

    int profit;
    cout << "Enter profit generated: ";
    cin >> profit;

    int salary;
    cout << "Enter current salary: ";
    cin >> salary;
    
   if( years > 1 || research_projects >= 2 || new_projects >= 3 || profit > 100000) { 
    
    IncreaseByValue(salary, years, research_projects, new_projects, profit);
    cout << "Salary after call-by-value (in main): " << salary << endl;
    

    
    IncreaseByReference(salary, years, research_projects, new_projects, profit);
    cout << "Salary after call-by-reference (in main): " << salary << endl;
   }
    if (salary < 0) {
        cout << "Error: Salary cannot be negative.\n";
        return 1;
    }

    return 0;
}

/*OUTPUT
Enter employee ID: 1234
Enter years of service: 6
Enter number of research projects: 2
Enter number of new projects: 3
Enter profit generated: 200000
Enter current salary: 300000
Salary after call-by-value (in main): 300000
Salary after call-by-reference (in main): 360000
*/
