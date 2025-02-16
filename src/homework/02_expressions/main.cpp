//write include statements


//write namespace using statement for cout

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout<<"Enter meal amount";
	cin >> meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);

	cout << "Enter tip percentage (as a decimal, e.g., 0.15 for 15%): ";
	cin >> tip_rate

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = meal_amount + tax_amount + tip_amount; 

	cout << "\nReceipt";
	cout << "Meal amount :  $"
	cout << "Sales tax:     $"
	cout << "Tip amount:    $"
	cout << "total:         $"

	return 0;
}
