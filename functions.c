#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>
#include <time.h>

#define NAME_SIZE 50
#define TRUE 1
#define FALSE 0
#define _CRT_SECURE_NO_WARNINGS

typedef struct {
	int phonetype;
	char phonenumber[10];
} phone;

typedef struct {
	char adress1[30];
	char adress2[30];
	char city[30];
	char province[2];
	char postalcode[6];
} adress;

typedef struct {
	int typework;;
	int personalincome;
	int houseincome;
	int housepayement;
	char jobdescription[30];
} job;

typedef struct
{
	char firstName[30];
	char lastName[30];
	adress customeradress;
	int ageYear;
	int age;
	int ageMonth;
	int ageDay;
	char email[50];
	phone customerphone;
	int livingsituation;
	int yearsattheadress;
	int monthsofliving;
	char customerID[10];
	char cardnumber[16];
	job customerjob;
	int sin[10];
} customer;

/*char firstName[30];
char lastName[30];
int ageMonth = 0;
int ageDay = 0;
char adress1[30];
char adress2[30];
char city[30];
char province[2];
char postalcode[6];
int ageYear = 0;
int age = 0;
char email[50];
int phonetype;
char phonenumber[10];
int livingsituation = 0;
int yearsattheadress = 0;
int monthsofliving = 0;
int sin[10];
int typework;
int personalincome;
int houseincome;
int housepayement;
char jobdescription[30];
char customerID[10];
char cardnumber[16];*/
char password[8];
char answer[6];
void getFirstNameFromApplicant(customer *record);
void getLastNameFromApplicant(customer* record);
void getAgeFromApplicant(customer* record);
int checkName(char name[]);
int checkAge(int age);
void getYear(customer* record);
void getDay(customer* record);
void getMonth(customer* record);
int checkYear(int Year);
int checkDay(int Day);
int checkMonth(int Month);
void getEmail(customer* record);
int checkEmail(char mail[]);
int getPhonetype(customer *record);
void getphonenumber(customer *record);
void getAdress2(customer *record);
void getAdress1(customer *record);
int checkAdress1(char adress1[]);
int checkAdress2(char adress2[]);
void getCity(customer *record);
void getlivingsituation(customer *record);
void checklivingsituation(int livingsituation);
int checkcity(char city);
int checkmonthsofliving(int monthsofliving);
void getmonthsofliving(customer *record);
void getProvince(customer *record);
int checkProvince(char province);
void getpostalCode(customer *record);
int checkpostalcode(char postalcode[6]);
void getyearsofliving(customer *record);
void getjobdescription(customer *record);
void getsin(customer *record);
int checksin(customer *record);
void gettypework(customer *record);
void getpersonalincome(customer *record);
int checkpersonalincome(int personalincome);
void householdincome(customer *record);
void payhouse(customer *record);
void getpassword();
int checkpassword(char password[]);
void getcardnumber();
void getpassword1();
void generateCustomerID();
void generateCardnumber();
checkwork(typework);
int main(void) {
	int typework = 0;
	int phonetype = 0;
	setbuf(stdout, NULL);
	customer customerecord;
	printf("Are you an existing customer?");
	scanf("%s", answer);
	if (strcmp(answer, "No") == 0)
	{
		getFirstNameFromApplicant(&customerecord);
		getLastNameFromApplicant(&customerecord);
		getAgeFromApplicant(&customerecord);
		getMonth(&customerecord);
		getDay(&customerecord);
		getYear(&customerecord);
		getEmail(&customerecord);
		getPhonetype(&customerecord);
		getphonenumber(&customerecord);
		getAdress1(&customerecord);
		getAdress2(&customerecord);
		getCity(&customerecord);
		getProvince(&customerecord);
		getpostalCode(&customerecord);
		getlivingsituation(&customerecord);
		getmonthsofliving(&customerecord);
		getyearsofliving(&customerecord);
		getsin(&customerecord);
		gettypework(&customerecord);
		getjobdescription(&customerecord);
		getpersonalincome(&customerecord);
		householdincome(&customerecord);
		payhouse(&customerecord);
		generateCustomerID();
		generateCardnumber();
		getpassword();
		printf("\n\n\n\n\n\n----Applicant Information----\n");
		printf("Applicant First Name : %s\n", customerecord.firstName);
		printf("Applicant Last Name : %s\n", customerecord.lastName);
		printf("Applicant Age : %d\n", customerecord.age);
		printf("Applicant Bithday  : %d:%d:%d\n", customerecord.ageYear, customerecord.ageMonth, customerecord.ageDay);
		printf("Applicant Email   : %s\n", customerecord.email);
		printf("Applicant phone   : %s\n", customerecord.customerphone.phonenumber);
		printf("Applicant Adress 1  : %s\n", customerecord.customeradress.adress1);
		printf("Applicant Adress 2  : %s\n", customerecord.customeradress.adress2);
		printf("Applicant City    : %s\n", customerecord.customeradress.city);
		printf("Applicant Province   : %s\n", customerecord.customeradress.province);
		printf("Applicant Postal Code   :%s\n", customerecord.customeradress.postalcode);
		printf("Applicant living situation   : %d ", customerecord.livingsituation);
		checklivingsituation(customerecord.livingsituation);
		printf("Applicant lived at this adress:    %d months %d years\n", customerecord.monthsofliving, customerecord.yearsattheadress);
		printf("Applicant sin is %s\n", customerecord.sin);
		printf("Applicant type of work: %d ", customerecord.customerjob.typework);
		checkwork(customerecord.customerjob.typework);
		printf("Applicant job description:  %s\n", customerecord.customerjob.jobdescription);
		printf("Applicant yearly income:   %d\n", customerecord.customerjob.personalincome);
		printf("Applicant household income:     %d\n", customerecord.customerjob.houseincome);
		printf("Applicant payemenet for house:    %d\n", customerecord.customerjob.housepayement);
		printf("Applicant ID:  %s", customerecord.customerID);
		generateCustomerID();
		printf("Applicant card number:   %s", customerecord.cardnumber);
		generateCardnumber();
		printf("Applicant password:   %s", password);
	}
	else {
		getcardnumber();
		getpassword1();
	}

	return 0;
}
void getcardnumber(customer *record) {
	printf("Write your card number:");
	scanf("%s", record->cardnumber);
}
void getpassword1() {
	printf("write your password:");
	scanf("%s", password);
}
void getFirstNameFromApplicant(customer *record)
{
	int validName = FALSE;
	printf("Please enter your first name: ");
	do
	{
		scanf("%s", record->firstName);
		validName = checkName(record->firstName);
	} while (!validName);
}

void getLastNameFromApplicant(customer *record)
{
	int validName = FALSE;
	printf("Please enter your last name: ");

	do
	{
		scanf("%s", record->lastName);
		validName = checkName(record->lastName);
	} while (!validName);
}

void getAgeFromApplicant(customer *record)
{
	int validAge = FALSE;
	printf("Please enter your age  : ");

	do
	{
		scanf("%d", &record->age);
		validAge = checkAge(record->age);
	} while (!validAge);
}

int checkName(char name[])
{
	//Name should be more than 1 character
	if (strlen(name) < 2)
	{
		printf( "Please enter a valid name: %s is too short!\n", name);
		return FALSE;
	}
	else
	{
		//loop through each character in the name and make sure it is an alphabetical (A-Z or a-z) character.
		for (int index = 0; index < strlen(name); index++){
			if (!isalpha((name[index])))
			{
				printf( "Please enter a valid name: %s should contain only alphabetical A-Z or a-z chars!\n", name);
				return  FALSE;
			}
		}
	}
	//seems everything went well and the name is valid.
	return TRUE;
}

int checkAge(int age)
{
	if (age < 16)
	{
		printf("Age must be 16 or older. Please enter valid age: \n");
		return FALSE;
	}
	return TRUE;
}
void getYear(customer *record)
{
	int validYear = FALSE;
	printf("Please enter your Year: \n");
	do
	{
		scanf("%d", &record->ageYear);
		validYear = checkYear(record->ageYear);
		
	} while (!validYear);
}
int checkYear(int Year)
{
	if (Year > 2022 || Year < 1900)
	{
		printf("year must be between 2022 and 1900 ");
		return FALSE;
	}
	return TRUE;
}
void getMonth(customer *record)
{
	int validMonth = FALSE;
	printf("Please enter your month: \n");
	do
	{
		scanf("%d", &record->ageMonth);
		validMonth = checkMonth(record->ageMonth);

	} while (!validMonth);
}
int checkMonth(int Month)
{
	if (Month > 12 || Month < 1)
	{
		printf("month must be between 1 and 12 ");
		return FALSE;
	}
	return TRUE;
}
void getDay(customer *record)
{
	int validDay = FALSE;
	printf("Please enter your day: \n");
	do
	{
		scanf("%d", &record->ageDay);
		validDay = checkDay(record->ageDay);

	} while (!validDay);

}



int checkDay(int Day)
{
	if (Day > 31 || Day < 1)
	{
		printf("day must be between 1 and 31 ");
		return FALSE;
	}
	return TRUE;
}


void getEmail(customer *record)
{
	int validEmail = FALSE;
	printf("Enter your gmail:");
	do
	{
		scanf("%s", record->email);
		validEmail = checkEmail( record->email);
	} while (!validEmail);
 }
 
int checkEmail(char mail[]) {
	if (strlen(mail) > 50) {
		fprintf(stderr, "Please enter a valid email: %s is too long!\n", mail);
		return FALSE;
	}

	int atSymbolFound = FALSE;
	for (int index = 0; index < strlen(mail); index++) {
		if ((mail[index] >= 'A' && mail[index] <= 'Z') || (mail[index] >= 'a' && mail[index] <= 'z')) {
			continue;  // Alphabetical character, continue checking other characters
		}
		else if (mail[index] == '@') {
			if (atSymbolFound) {
				fprintf(stderr, "Please enter a valid email: %s contains multiple @ symbols!\n", mail);
				return FALSE;
			}
			atSymbolFound = TRUE;
		}
	
	}

	if (!atSymbolFound) {
		fprintf(stderr, "Please enter a valid email: %s does not contain an @ symbol!\n", mail);
		return FALSE;
	}

	// Everything went well and the email is valid.
	return TRUE;
}
int getPhonetype(customer *record)
{
	printf("Enter your phone type: 1-home, 2-work, 3 mobile");
	scanf("%d", &record->customerphone.phonetype);

	return record->customerphone.phonetype;
}

void getphonenumber(customer *record) {
	if (record->customerphone.phonetype == 1) {
		printf("home");
	}
	else if (record->customerphone.phonetype == 2)
	{
		printf("work\n");
	}
	else if (record->customerphone.phonetype == 3) {
		printf("mobile\n");
	}
	int validPhone = FALSE;
	printf("input your phone number:");
	char phonenumber[10];
	do {
		scanf("%s", record->customerphone.phonenumber);
		validPhone = checkphontype(record->customerphone.phonenumber);
		
	} while (!validPhone);
}
int checkphontype(char phone[]) {
	if (strlen(phone) > 10) {
		printf("Phone is too big");
		return FALSE;
	}
	for (int index = 0; index < strlen(phone); index++)
	{
		if (isalpha(phone[index]))
		{
			fprintf(stderr, "Please enter a valid phonenumber: %s should contain only numbers!\n", phone);

			return  FALSE;
		}
	}
	return TRUE;
}
int checkAdress1(char adress[50]) {
	if (strlen(adress) > 50) {
		printf("Adress is too big.\n");
		return FALSE;
	}
	return TRUE;
}
void getAdress1(customer *record)
{
	
	int validAdress = FALSE;
	printf("Enter your adress1:\n");
		do
		{
			
			scanf("%s", record->customeradress.adress1);
			validAdress = checkAdress1(record->customeradress.adress1);
		} while (!validAdress);

}


void getAdress2(customer *record)
{
	
	int validAdress2 = FALSE;
	printf("Enter your adress2:\n");
		do
		{
			
			scanf("%s",record->customeradress.adress2);
			validAdress2 = checkAdress1(record->customeradress.adress2);
		} while (!validAdress2);

}

int checkcity(char city[30])
{
	if (strlen(city) > 30)
	{
		printf("City is too big\n");
		return FALSE;
	}
	return TRUE;
}

void getCity(customer *record)
{
	
	int validCity = FALSE;
	printf("Enter your city");
	do
	{
		scanf("%s",record->customeradress.city);
		validCity = checkcity(record->customeradress.city);
	} while (!validCity);
}
int checkProvince(char province[])
{
	if (strcmp(province, "AB") != 0 && strcmp(province, "BC") != 0 && strcmp(province, "MB") != 0 &&
		strcmp(province, "NB") != 0 && strcmp(province, "NL") != 0 && strcmp(province, "NT") != 0 &&
		strcmp(province, "NS") != 0 && strcmp(province, "NU") != 0 && strcmp(province, "ON") != 0 &&
		strcmp(province, "PE") != 0 && strcmp(province, "QC") != 0 && strcmp(province, "SK") != 0 &&
		strcmp(province, "YT") != 0)
	{
		printf("This province doesn't exist\n");
		return FALSE;
	}

	return TRUE;
}

void getProvince(customer *record)
{
	
	int validProvince = FALSE;
	printf("Enter your Province: ");
	do
	{
		scanf("%s",record->customeradress.province);
		validProvince = checkProvince(record->customeradress.province);
	} while (!validProvince);
}
int checkpostalcode(char postalcode[6])
{
	if (strlen(postalcode) > 6)
	{
		printf("Postal code is too big\n");
		return FALSE;
	}
	return TRUE;
}

void getpostalCode(customer *record)
{
	int validpostalcode = FALSE;
	printf("Put your postal code: ");
	do
	{
		scanf("%s", record->customeradress.postalcode);
		validpostalcode = checkpostalcode(record->customeradress.postalcode);
	} while (!validpostalcode);
	
 }


void checklivingsituation(int livingsituation)
{
	switch (livingsituation) {
	case 1:
		printf("Rent\n");
		break;
	case 2:
		printf("Own/buying\n");
		break;
	case 3:
		printf("Live with parents\n");
		break;
	case 4:
		printf("Board\n");
		break;
	case 5:
		printf("Other\n");
		break;
	default:
		printf("Invalid number\n");
	}
}

void getlivingsituation(customer *record)
{
	//int livingsituation;
	printf("What is your living situation? Rent-1, Own/buying-2, Live with parents-3, Room or Board-4, Other-5: ");
	scanf("%d", &record->livingsituation);
	checklivingsituation(record->livingsituation);
}
void getyearsofliving(customer *record)
{
	
	printf("How many years have you lived at this adress:\n");
	scanf("%d",&record->yearsattheadress);
}

int checkmonthsofliving(int monthsofliving)
{
	if (monthsofliving > 12 || monthsofliving < 1)
	{
		printf("the months of living should be between 1 and 12\n");
		return FALSE;
	}
	return TRUE;
}
void getmonthsofliving(customer *record)
{
	int validmonthsofliving = FALSE;
	printf("How many months have you lived at this adress:\n");
	do
	{
		scanf("%d", &record->monthsofliving);
		validmonthsofliving = checkmonthsofliving(record->monthsofliving);
	} while (!validmonthsofliving);
}


void getsin(customer *record)
{
	int validsin = FALSE;
	printf("What is your sin number?\n");
	do
	{
		scanf("%s",record->sin);
		validsin = checksin(record->sin);

	} while (!validsin);
}

int checksin(int sin[9])
{
	if (strlen(sin) > 9)
	{
		printf("Your sin number is too long\n");
		return FALSE;
	}
	else
	{
		for (int index = 0; index >= strlen(sin); index++)
		{
			if (isalpha(sin[index]))
			{
				printf("Please enter a valid sin. Sin should contain only  numbers\n");

					return  FALSE;
			}
		}

	}
	return TRUE;
}

void gettypework(customer *record)
{
	printf("What kind of work do you do?\n");
	scanf("%d", &record->customerjob.typework);
	checkwork(record->customerjob.typework);
}

checkwork(customer *record)
{
	switch (record->customerjob.typework)
	{
	case 1:
		printf("Category 1\n");
		break;
	case 2:
		printf("Category 2\n");
		break;
	case 3:
		printf("Category 3\n");
		break;
	case 4:
		printf("Category 4\n");
		break;
	case 5:
		printf("Category 5\n");
		break;
	}
}

void getjobdescription(customer *record)
{
	printf("Can you describe your job:\n");
	scanf("%s", record->customerjob.jobdescription);
	
}

void getpersonalincome(customer *record)
{
	int validincome = FALSE;
	printf("Enter your personal yearly income\n");
	do
	{
		scanf("%d", &record->customerjob.personalincome);
		validincome = checkpersonalincome(record->customerjob.personalincome);
	} while (!validincome);
}

int checkpersonalincome(personalincome)
{
	if (personalincome < 15000) 
	{
		printf("Your income is too low\n");
		return FALSE;
	}
	return TRUE;
}

void householdincome(customer *record)
{
	printf("Enter your household income:\n");
	scanf("%d" ,&record->customerjob.houseincome);
	
}

void payhouse(customer *record)
{
	printf("How much you pay for housing: \n");
	scanf("%d", &record->customerjob.housepayement);
	
}

void generateCustomerID()
{
	const int idLength = 8;
	const char charset[] = "0123456789";
	const int charsetSize = sizeof(charset) - 1;
	char customerID[8 + 1]; // +1 for null-terminator

	srand(time(NULL)); // Seed the random number generator with the current time

	for (int i = 0; i < idLength; i++)
	{
		customerID[i] = charset[rand() % charsetSize];
	}
	customerID[idLength] = '\0';  // Null-terminate the string

	printf("Customer ID: %s\n", customerID);
}
void generateCardnumber()
{
	const int idLength = 16;
	const char charset[] = "0123456789";
	const int charsetSize = sizeof(charset) - 1;
	char cardnumber[16 + 1]; // +1 for null-terminator

	srand(time(NULL)); // Seed the random number generator with the current time

	for (int i = 0; i < idLength; i++)
	{
		cardnumber[i] = charset[rand() % charsetSize];
	}
	cardnumber[idLength] = '\0';  // Null-terminate the string

	printf("Cardnumber: %s\n", cardnumber);
}
int checkpassword(char password[])
{
	int hasSpecialChar = 0;
	int i = 0;
	if (strlen(password) < 8)
	{
		printf("password is too short\n");
		return FALSE;
	}
	else if (strcmp(password, "12345678") == 0 || strcmp(password, "1234567890") == 0 || strcmp(password, "qwerty12") == 0 ||
		strcmp(password, "password") == 0 || strcmp(password, "qwerty123") == 0 || strcmp(password, "1q2w3e4r") == 0 ||
		strcmp(password, "11111111") == 0 || strcmp(password, "abcd1234") == 0 || strcmp(password, "AAAAAAAA") == 0)
	{
		printf("your passwoord is too simple\n");
		return FALSE;

	}

	else if (strlen(password) >= 8) {


		for (int i = 0; i < strlen(password); i++)
		{
			if (!isalnum(password[i]))
			{

				hasSpecialChar = 1;
				break;
			}
		}
		return hasSpecialChar;
	}


}
void getpassword() 
{
	int validpassword = FALSE;
	printf("what is your password?");
	do 
	{
		scanf("%s", password);
		validpassword = checkpassword(password);
	} while (!validpassword);
}




