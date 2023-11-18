import random

# Define a function to greet the user
def greeting():
    responses = ["Hello! How may I assist you with your banking needs today?",
                 "Welcome! How can I help you with your account today?",
                 "Good day! What can I assist you with in regards to your account?"]
    return random.choice(responses)

# Define a function to handle user's inquiries
def handle_inquiry(user_input):
    if "account balance" in user_input:
        return "Your current account balance is $10,000."
    elif "transaction history" in user_input:
        return "Here is your transaction history for the past month: ..."
    elif "transfer money" in user_input:
        return "To transfer money, please login to your online banking account or visit one of our branches."
    elif "open a new account" in user_input:
        return "To open a new account, please visit one of our branches with your identification documents."
    elif "loan application" in user_input:
        return "To apply for a loan, please visit our website or any of our branches."
    elif "credit card application" in user_input:
        return "To apply for a credit card, please visit our website or any of our branches."
    else:
        return "I'm sorry, I'm not sure how to assist you with that."

# Define the main function to run the chatbot
def main():
    print(greeting())
    while True:
        user_input = input("> ")
        if user_input.lower() == "exit":
            break
        response = handle_inquiry(user_input.lower())
        print(response)

# Run the chatbot
if __name__ == "__main__":
    main()
