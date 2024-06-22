
# CS50 Problem Set 9: Finance

This repository contains my solutions for Problem Set 9 (Finance) from Harvard's CS50 Introduction to Computer Science course. In this problem set, we build a web application that simulates a simple stock trading platform. The project demonstrates the use of Flask, an SQLite database, and various web technologies to create a functional and interactive web application.

## Overview

The CS50 Finance project allows users to register, log in, get real-time stock quotes, buy and sell stocks, view their portfolio, and check their transaction history. It combines the knowledge gained throughout the CS50 course, including web development, databases, and APIs.

## Project Structure

- **app.py**: The main Flask application file containing all route definitions and logic for handling requests.
- **templates/**: Directory containing all HTML templates.
- **helpers.py**: Contains helper functions such as `apology`, `login_required`, `lookup`, and `usd`.
- **static/**: Directory containing static files such as CSS and JavaScript.

## Database Schema

The application uses an SQLite database to store user information, transactions, and stock data. The database schema includes two main tables:

### Users Table

```sql
CREATE TABLE users (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    username TEXT NOT NULL UNIQUE,
    hash TEXT NOT NULL,
    cash NUMERIC NOT NULL DEFAULT 10000.00
);
```

### Transactions Table

```sql
CREATE TABLE transactions (
    id INTEGER PRIMARY KEY AUTOINCREMENT, 
    user_id INTEGER NOT NULL, 
    symbol TEXT NOT NULL, 
    shares INTEGER NOT NULL, 
    price NUMERIC NOT NULL, 
    timestamp DATETIME DEFAULT CURRENT_TIMESTAMP, 
    FOREIGN KEY (user_id) REFERENCES users(id)
);
```

## Features

- **Registration**: Users can register for an account.
- **Login/Logout**: Users can log in and log out securely.
- **Quote**: Users can look up real-time stock prices.
- **Buy**: Users can buy shares of stock.
- **Sell**: Users can sell shares of stock they own.
- **History**: Users can view their transaction history.
- **Portfolio**: Users can view their current portfolio and cash balance.

## Setup and Installation

1. **Clone the Repository**:
    ```sh
    git clone https://github.com/yourusername/cs50-finance.git
    cd cs50-finance
    ```

2. **Install Dependencies**:
    Ensure you have Python and `pip` installed. Then, install the required packages:
    ```sh
    pip install -r requirements.txt
    ```

3. **Configure Database**:
    Create the SQLite database and tables as shown above. You can do this using an SQLite browser or the command line.

4. **Run the Application**:
    ```sh
    flask run
    ```

5. **Access the Application**:
    Open your web browser and go to `http://127.0.0.1:5000`.

## Usage

- **Register** for a new account.
- **Log in** using your credentials.
- **Get a Quote** for a stock symbol to see the current price.
- **Buy Shares** of a stock by providing the stock symbol and number of shares.
- **Sell Shares** of a stock you own.
- **View History** to see all your past transactions.
- **Check Portfolio** to see your current holdings and cash balance.

## Acknowledgements

This project is part of the CS50x 2024 course by Harvard University. Special thanks to the CS50 team for providing an excellent curriculum and resources.
