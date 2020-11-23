#include <iostream>
#include <string>
using namespace std;
class OrderDetails;
class Orders;
class Items;
class Items{
private:
    int itemId;
    string name;
    string price;
    string description;
    string createdAt;
    string updatedAt;
    string type;


public:
    Items(){
        itemId=0;
        name="";
        price="0.0$";
        description="";
        createdAt="";
        updatedAt="";
        type="";

    }
    Items(int a,string b, string c,string d,string e,string f,string g){
        itemId=a;
        name=b;
        price=c;
        description=d;
        createdAt=e;
        updatedAt=f;
        type=g;

    }

    int getItemId() const {
        return itemId;
    }

    const string &getName() const {
        return name;
    }

    const string &getPrice() const {
        return price;
    }

    const string &getDescription() const {
        return description;
    }

    const string &getCreatedAt() const {
        return createdAt;
    }

    const string &getUpdatedAt() const {
        return updatedAt;
    }

    const string &getType() const {
        return type;
    }

    void setType(const string &type) {
        Items::type = type;
    }

    void setUpdatedAt(const string &updatedAt) {
        Items::updatedAt = updatedAt;
    }

    void setCreatedAt(const string &createdAt) {
        Items::createdAt = createdAt;
    }

    void setDescription(const string &description) {
        Items::description = description;
    }

    void setPrice(const string &price) {
        Items::price = price;
    }

    void setName(const string &name) {
        Items::name = name;
    }

    void setItemId(int itemId) {
        Items::itemId = itemId;
    }
    void display(){
        cout<<"\n\nItem Id : "<<itemId<<",  Name : "<<name<<",  Description : "<<description<<", Created At : "<<createdAt<<", Updated At : "<<updatedAt<<", Type:"<<type<<endl<<endl;
        cout<<endl<<endl;

    }

};
class OrderDetails{
private:
    int orderDetailId;
    string quality;
    Orders *orders;
    Items **items;
    int size;
    void init(){
        for (int i = 0; i <size; ++i) {
            items[i]=new Items();

        }
    }
public:
    OrderDetails(){
        orderDetailId=0;
        quality="";
        size=5;
        items=new Items*[size];
        init();
    }
    OrderDetails(int a, string b,int c){
        orderDetailId=a;
        quality=b;
        size=c;
        items=new Items*[size];
        init();
    }

    int getSize() const {
        return size;
    }

    void setSize(int size) {
        OrderDetails::size = size;
    }


    int getOrderDetailId() const {
        return orderDetailId;
    }

    const string &getQuality() const {
        return quality;
    }

    Orders *getOrders() const {
        return orders;
    }

    Items **getItems() const {
        return items;
    }

    void setItems(Items **items) {
        OrderDetails::items = items;
    }

    void setOrders(Orders *orders) {
        OrderDetails::orders = orders;
    }

    void setQuality(const string &quality) {
        OrderDetails::quality = quality;
    }

    void setOrderDetailId(int orderDetailId) {
        OrderDetails::orderDetailId = orderDetailId;
    }
    void display(){
        cout<<"ORDER DETAIL ID: "<<orderDetailId<<", ORDER QUALITY: "<<quality<<endl<<endl;
        for (int i = 0; i < size; ++i) {
            cout<<(i+1)<<".  ";
            items[i]->display();
        }
    }

};
class Orders{
private:
    int orderId;
    string description;
    string createdAt;
    string updatedAt;
    string userName;
    string pickUpTime;
    string pickUpFrom;
    string delieveryTime;
    string delieverTo;
    bool status;
    OrderDetails **orderDetails;
    int size;
    void init(){
        for (int i = 0; i <size; ++i) {
            orderDetails[i]=new OrderDetails();

        }
    }
public:
    Orders(){
        orderId=0;
        createdAt="";
        description="";
        updatedAt="";
        userName="";
        pickUpTime="";
        pickUpFrom="";
        delieverTo="";
        delieveryTime="";
        status= true;
        size=5;
        orderDetails=new OrderDetails*[size];
        init();


    }
    Orders(int oid,string des,string created,string updated,string user,string picktime,string pickfrom,string deliverto,bool s,int a,string delivertime){
        orderId=oid;
        createdAt=created;
        description=des;
        updatedAt=updated;
        userName=user;
        pickUpTime=picktime;
        pickUpFrom=pickfrom;
        delieverTo=deliverto;
        delieveryTime=delivertime;
        status=s;
        size=a;
        orderDetails=new OrderDetails*[size];
        init();


    }
    int getOrderId() const {
        return orderId;
    }

    const string &getDescription() const {
        return description;
    }

    const string &getCreatedAt() const {
        return createdAt;
    }

    const string &getUpdatedAt() const {
        return updatedAt;
    }

    const string &getUserName() const {
        return userName;
    }

    const string &getPickUpTime() const {
        return pickUpTime;
    }

    const string &getPickUpFrom() const {
        return pickUpFrom;
    }

    const string &getDelieveryTime() const {
        return delieveryTime;
    }

    const string &getDelieverTo() const {
        return delieverTo;
    }

    bool isStatus() const {
        return status;
    }

    int getSize() const {
        return size;
    }

    void setSize(int size) {
        Orders::size = size;
    }

    void setStatus(bool status) {
        Orders::status = status;
    }

    void setDelieverTo(const string &delieverTo) {
        Orders::delieverTo = delieverTo;
    }

    void setDelieveryTime(const string &delieveryTime) {
        Orders::delieveryTime = delieveryTime;
    }

    void setPickUpFrom(const string &pickUpFrom) {
        Orders::pickUpFrom = pickUpFrom;
    }

    void setPickUpTime(const string &pickUpTime) {
        Orders::pickUpTime = pickUpTime;
    }

    void setUserName(const string &userName) {
        Orders::userName = userName;
    }

    void setUpdatedAt(const string &updatedAt) {
        Orders::updatedAt = updatedAt;
    }

    void setCreatedAt(const string &createdAt) {
        Orders::createdAt = createdAt;
    }

    void setDescription(const string &description) {
        Orders::description = description;
    }

    void setOrderId(int orderId) {
        Orders::orderId = orderId;
    }
    OrderDetails **getOrderDetails() {
        return orderDetails;
    }

    void setOrderDetails(OrderDetails **orderDetails) {
        Orders::orderDetails = orderDetails;
    }
    void display(){
        cout<<"\norder Id : "<<orderId<<",  Username : "<<userName<<",  Description : "<<description<<", Created At : "<<createdAt<<", Updated At : "<<updatedAt<<", Pick Up Time:"<<pickUpTime<<", Pick Up From : "<<pickUpFrom<<", Deliever To :"<<delieverTo<<", Delievery Time: "<<delieveryTime<<endl<<endl;
        cout<<endl<<endl;
        for (int i = 0; i < size; ++i) {
            cout<<(i+1)<<".  ";
            orderDetails[i]->display();
        }
    }

};

int main() {
    Items *item = new Items(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A1(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A2(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A3(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A4(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A5(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A6(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A7(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A8(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    Items A9(1001,"s7 edge","200$","Phone","12-12-2012","10-10-2020","Electronic");
    OrderDetails B1(001,"A+",2);
    for (int i = 0; i < B1.getSize();i++) {
        B1.getItems()[i]->setItemId(A1.getItemId());
        B1.getItems()[i]->setName(A1.getName());
        B1.getItems()[i]->setPrice(A1.getPrice());
        B1.getItems()[i]->setDescription(A1.getDescription());
        B1.getItems()[i]->setCreatedAt(A1.getCreatedAt());
        B1.getItems()[i]->setUpdatedAt(A1.getUpdatedAt());
        B1.getItems()[i]->setType(A1.getType());




    }

    OrderDetails B2(001,"A+",2);
    for (int i = 0; i < B2.getSize();i++) {
        B2.getItems()[i]->setItemId(A1.getItemId());
        B2.getItems()[i]->setName(A1.getName());
        B2.getItems()[i]->setPrice(A1.getPrice());
        B2.getItems()[i]->setDescription(A1.getDescription());
        B2.getItems()[i]->setCreatedAt(A1.getCreatedAt());
        B2.getItems()[i]->setUpdatedAt(A1.getUpdatedAt());
        B2.getItems()[i]->setType(A1.getType());




    }

    OrderDetails B3(001,"A+",2);
    for (int i = 0; i < B3.getSize();i++) {
        B3.getItems()[i]->setItemId(A1.getItemId());
        B3.getItems()[i]->setName(A1.getName());
        B3.getItems()[i]->setPrice(A1.getPrice());
        B3.getItems()[i]->setDescription(A1.getDescription());
        B3.getItems()[i]->setCreatedAt(A1.getCreatedAt());
        B3.getItems()[i]->setUpdatedAt(A1.getUpdatedAt());
        B3.getItems()[i]->setType(A1.getType());




    }
    Orders C1(101,"2012-series","1/1/2020","12/2/2020","A_Jawad","12pm","12-87-C driveway","11-A Johar town", false,5,"11am");
    for (int j = 0; j <C1.getSize(); j++) {
        C1.getOrderDetails()[j]->setOrderDetailId(B1.getOrderDetailId());
        C1.getOrderDetails()[j]->setQuality(B1.getQuality());
        for (int i = 0; i <B1.getSize() ; i++) {

            C1.getOrderDetails()[i]->setItems(&item);

        }

    }
    C1.display();










    return 0;
}