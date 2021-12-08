#include <iostream>

using namespace std;

int main()

{

string month;

cout << "What is the current month?\n";

cin >> month;

if (month == "October" || month == "oct" || month == "october" || month == "Oct")

{cout << "Ooooo spooky season\n";}

else if (month == "November" || month == "november" || month == "Nov" || month == "nov")

{cout << "Yummmm turkey season!\n";}

else if (month == "December" || month == "december" || month == "Dec" || month == "dec")

{cout << "Yayyyy cozy season\n";}

else if (month == "January" || month == "january" || month == "Jan" || month == "jan")

{cout << "Brrrr cold season\n";}

else if (month == "February" || month == "february" || month == "Feb" || month == "feb")

{cout << "Birthday month! Kate = Feb 7th Mom = Feb 10th\n";}

else if (month == "March" || month == "march" || month == "Mar" || month == "mar")

{cout << "What happens in march?\n";}

else if (month == "April" || month == "april" || month == "Apr" || month == "apr")

{cout << "April showers bring may flowers!\n";}

else if (month == "May" || month == "may")

{cout << "Happy memorial month and the start of summertime!\n";}

return 0;

}
