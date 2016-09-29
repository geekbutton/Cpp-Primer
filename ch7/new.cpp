struct Sales_data{
	string isbn(){return bookNo;}
	Sales_data &combine(Sales_data sx){
		double price=0.0;
		units_sold+=sx.units_sold;
		revenue+=sx.revenue;
		price=revenue/units_sold;
		return *this;
	}
	double aprice()const{
		if(units_sold)
			return revenue/units_sold;
		else return 0;
	}

	string bookNo;
	unsigned units_sold=0;
	double revenue=0.0;
};
Sales_data add(const Sales_data x1,const Sales_data x2){
	Sales_data sum=x1;
	sum.combine(x2);
	return sum;
}
istream &read(istream &is,Sales_data x1){
	double price=0.0;
	is>>x1.bookNo>>x1.units_sold>>price;
	x1.revenue=x1.units_sold*price;
	return is;
}
ostream &print(ostream &os,Sales_data x2){
	os<<x2.bookNo<<" "<<x2.units_sold<<" "<<x2.revenue<<" "<<(x2.revenue/x2.units_sold)<<endl;
	return os;
}





struct Person{
	string rname()const{return name;}
	string raddress()const{return address;}

	string name;
	string address;
};
istream &read(istream &is,Person &item){
	is>>item.name>>item.address;
	return is;
}
ostream &print(ostream &os,Person item){
	os<<item.name<<" "<<item.address<<endl;
	return os;
}
