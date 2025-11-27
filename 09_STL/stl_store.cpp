#include<iostream>
#include<vector>
#include<string>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<ctime>
#include<unordered_set>
#include<unordered_map>

using namespace std;

struct Product{
    int productId;
    string name;
    string category;
};

struct Order{
    int orderID;
    int ProductID;
    int quantity;
    string customerID;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101, "Laptop", "Electronics"},
        {102, "Smart Phone", "Electronics"},
        {103, "Coffe Maker", "Kitchen"},
        {104, "Blender", "Kitchen"},
        {105, "Desk Lamp", "Home"},
    };


    deque<string> recentCustomers = {"C001", "C002", "C003"};
    
    recentCustomers.push_back("C004");
    recentCustomers.push_front("C005");

    vector<Order> orderHistory;

    orderHistory.push_back({1, 101, 1, "C001", time(0)});
    orderHistory.push_back({2, 102, 2, "C002", time(0)});
    orderHistory.push_back({3, 103, 1, "C003", time(0)});

    set<string> categories;
    for(const auto &product : products){
        categories.insert(product.category);
    }

    map<int , int> productStock = {
        {101, 10},
        {102, 20},
        {103, 15},
        {104, 5},
        {105, 7},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order : orderHistory){
        customerOrders.insert({order.customerID, order});
    }

    unordered_map<string, string> customerData = {
        {"C001", "Ambuj"},
        {"C002", "Animesh"},
        {"C003", "Shivam"},
        {"C004", "Shravan"},
        {"C005", "Chetan"},
    };

    unordered_set<int> uniqueProductIDs;

    for(const auto &product : products){
        uniqueProductIDs.insert(product.productId);
    }

    cout << "================ Product List ================" << endl;
    for(const auto &p : products){
        cout << "ID: " << p.productId << ", Name: " << p.name << ", Category: " << p.category << endl;
    }
    cout << endl;

     cout << "================ Recent Customers (Deque) ================" << endl;
    for(const auto &cust : recentCustomers){
        cout << cust << " ";
    }
    cout << endl << endl;

    cout << "================ Order History ================" << endl;
    for(const auto &o : orderHistory){
        cout << "Order ID: " << o.orderID 
             << ", Product ID: " << o.ProductID
             << ", Qty: " << o.quantity
             << ", Customer: " << o.customerID
             << ", Date: " << ctime(&o.orderDate);
    }
    cout << endl;

    cout << "================ Categories (Set) ================" << endl;
    for(const auto &cat : categories){
        cout << cat << " ";
    }
    cout << endl << endl;


    cout << "================ Product Stock (Map) ================" << endl;
    for(const auto &item : productStock){
        cout << "Product ID: " << item.first << ", Stock: " << item.second << endl;
    }
    cout << endl;

    cout << "================ Customer Orders (Multimap) ================" << endl;
    for(const auto &entry : customerOrders){
        const Order &o = entry.second;
        cout << "Customer: " << entry.first << " | Order ID: " << o.orderID << ", Product ID: " << o.ProductID << ", Qty: " << o.quantity << ", Date: " << ctime(&o.orderDate);
    }
    cout << endl;

    cout << "================ Customer Data (Unordered Map) ================" << endl;
    for(const auto &cd : customerData){
        cout << "Customer ID: " << cd.first  << ", Name: " << cd.second << endl;
    }
    cout << endl;

    cout << "================ Unique Product IDs (Unordered Set) ================" << endl;
    for(const auto &id : uniqueProductIDs){
        cout << id << " ";
    }
    cout << endl << endl;
    
    return 0;
}