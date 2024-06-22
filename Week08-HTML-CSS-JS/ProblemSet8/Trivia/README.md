
# CS50 Trivia Exercise

## Overview

This trivia exercise is part of Problem Set 8 in CS50. It is a web-based application where users can test their knowledge on various topics including computer science, history, and popular culture. The application is built using HTML, CSS, JavaScript, and SQLite for the backend.

## Features

- **User Authentication**: Users can register and log in to keep track of their scores.
- **Question Pool**: The application pulls questions from a SQLite database, ensuring a wide variety of questions and difficulty levels.
- **Scoring System**: Points are awarded for correct answers, with higher points for more difficult questions.
- **Leaderboard**: A leaderboard displays top scores, encouraging competition among users.

## Installation

To set up the trivia exercise on your local machine:

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/cs50-trivia.git
   ```
2. Navigate to the project directory:
   ```bash
   cd cs50-trivia
   ```
3. Install the necessary dependencies (if any):
   ```bash
   # If there are specific dependencies
   pip install -r requirements.txt
   ```
4. Initialize the database:
   ```bash
   sqlite3 trivia.db < schema.sql
   ```
5. Run the application:
   ```bash
   python server.py
   ```

## Usage

Once the application is running, access it at `http://localhost:8000` in your web browser. You can register a new account or log in with existing credentials to start playing the trivia game.

## Contributing

Contributions to the CS50 Trivia Exercise are welcome! Please read `CONTRIBUTING.md` for details on our code of conduct and the process for submitting pull requests to us.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE) file for details.

## Acknowledgments

- CS50 staff for the comprehensive problem set guidance
- Contributors who have submitted interesting trivia questions
- Open Trivia Database for providing an API for public trivia questions
