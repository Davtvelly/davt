
def myloan(): # defining the loan function
    loan_amount = float(input("enter loan amount: ")) #getting input for loan amount
    number_of_years = int(input("enter number of years: ")) #getting input for number of years

    rate_of_interest = 0 # initi
    if loan_amount <= 100000:
        rate_of_interest = 0.1
    elif loan_amount > 100000:
        rate_of_interest = 0.2

    print("loan amount:",loan_amount)
    print("number of years",number_of_years)

    monthly_instalment = ((loan_amount*rate_of_interest*number_of_years)+loan_amount)/(number_of_years*12)
    print("client monthly installment is: ", monthly_instalment)
    total_payment = monthly_instalment + loan_amount
    print(f"total loan repayment is: {total_payment}  after {number_of_years} years" )

def mainfunc():
    print("  ...........................................................")
    print("  .            KCB BANKING LOAN SYSTEM                      .")
    print("  .                                                         .")
    print("  .             DAVTVELLY THE CODING SPIDER                 .")
    print("  .                                                         .")
    print("  .                                                         .")
    print("  ...........................................................")
    myloan();
mainfunc();
