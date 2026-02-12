// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Marketplace{
    string marketPlaceName;
    string users[];
    string VehicleListings[];
    string messages[];
    static int totalUsers;
    static int totalListings[];

public:
void registerUser();
void loginUser();
void searchVehicle();
void removeListing();
void displayAllListings();
    
};

class User{
 string name;
string email;
string password;
int phoneNumber;
string accountStatus; //Buyer or seller

public:
void login();
void signup();
void displayProfile();
void updateProfile();

}


class Buyer{
  string savedFavourites[]; //arr of vehicles
  string inboxMsgs[];
  string budgetRange;
string preferredBrand;
string location;

public:
void searchVehicle();
void addToFavourites();
void removeFromFavourites();
void sendMessageToSeller();
void giveReview();
    
};

class Seller{
float sellerRating;
int totalListings;
int activeListings[];
int soldVehicles;
string inboxMsgs[];

public:
void addListing();
void updateListing();
void deleteListing();
void replyToBuyer();
};

class Admin{
const string adminLevel;
 int totalApprovals;
int reportsHandled;
int managedUsers;
const int systemAccessCode;

public:
void approveListing();
void removeListing();
void suspendUser();
void viewReports();

};

class Vehicle{
const int vehicleId;
string brand;
string model;
int year;
float mileage;
float price;

public:
void updatePrice();
void updateMileage()

    
};

class Car{
    
};

class Bike{
    
};

class VehicleListing{
    
}

class Messaging{
    
}

class Review





int main() {
    

    return 0;
}
