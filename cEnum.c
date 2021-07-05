#include <stdio.h>

int main()
{
    enum companies
    {
        google,
        facebook,
        xerox,
        yahoo,
        ebay,
        microsoft
    };

    enum companies firstSelectedCompany = xerox;
    enum companies secondSelectedCompany = google;
    enum companies thirdSelectedCompany = ebay;

    printf("The enum value of Xerox is : %d\n", firstSelectedCompany);
    printf("The enum value of Google is : %d\n", secondSelectedCompany);
    printf("The enum value of EBay is : %d\n", thirdSelectedCompany);
}