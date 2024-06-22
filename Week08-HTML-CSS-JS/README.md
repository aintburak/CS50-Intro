# CS50 Week 8: HTML, CSS, and JavaScript

## Overview

Week 8 of CS50 dives into the world of web development with a focus on HTML, CSS, and JavaScript. The goal is to build an interactive and visually appealing web application by utilizing these technologies.

## Objectives

- Understand the structure and syntax of HTML.
- Learn how to style web pages using CSS.
- Use JavaScript to add interactivity and dynamic behavior to web pages.
- Combine these technologies to create a functional and engaging user experience.

## Project Description

In this week’s project, you will create a simple web application that demonstrates your understanding of HTML, CSS, and JavaScript. The project involves creating a responsive website with interactive elements.

### Features

1. **HTML Structure**:
    - Use HTML to structure the content of your web page.
    - Include essential elements like headers, paragraphs, lists, images, and links.
    - Implement forms for user input.

2. **CSS Styling**:
    - Apply CSS to style your web page and improve its visual appeal.
    - Use selectors, properties, and values to customize the look and feel.
    - Implement responsive design to ensure the website looks good on various screen sizes.

3. **JavaScript Interactivity**:
    - Use JavaScript to manipulate the DOM (Document Object Model).
    - Add event listeners to handle user interactions.
    - Implement functions to update the web page dynamically based on user input.

### Example Project: Interactive To-Do List

An example project for this week could be an interactive to-do list application. Users can add tasks, mark them as complete, and remove them from the list.

## Files

- `index.html`: The main HTML file containing the structure of the web page.
- `styles.css`: The CSS file for styling the web page.
- `scripts.js`: The JavaScript file for adding interactivity to the web page.

## Setup

To get started with the project, follow these steps:

1. Clone the repository:
    ```bash
    git clone https://github.com/username/cs50-week8.git
    ```

2. Navigate to the project directory:
    ```bash
    cd cs50-week8
    ```

3. Open `index.html` in your web browser to view the project.

## Usage

- **Add Task**: Enter a task in the input field and click the "Add" button to add it to the list.
- **Complete Task**: Click on a task to mark it as complete or incomplete.
- **Remove Task**: Click the "Remove" button next to a task to delete it from the list.

## Example Code Snippets

### HTML (index.html)

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>To-Do List</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <h1>To-Do List</h1>
    <form id="task-form">
        <input type="text" id="task-input" placeholder="Enter a new task">
        <button type="submit">Add</button>
    </form>
    <ul id="task-list"></ul>
    <script src="scripts.js"></script>
</body>
</html>
```

### CSS (styles.css)

```css
body {
    font-family: Arial, sans-serif;
    background-color: #f0f0f0;
    text-align: center;
    padding: 20px;
}

h1 {
    color: #333;
}

form {
    margin-bottom: 20px;
}

input {
    padding: 10px;
    font-size: 16px;
}

button {
    padding: 10px 20px;
    font-size: 16px;
    background-color: #28a745;
    color: white;
    border: none;
    cursor: pointer;
}

button:hover {
    background-color: #218838;
}

ul {
    list-style-type: none;
    padding: 0;
}

li {
    background-color: white;
    margin: 10px 0;
    padding: 10px;
    display: flex;
    justify-content: space-between;
    align-items: center;
}

li.completed {
    text-decoration: line-through;
    color: #888;
}
```

### JavaScript (scripts.js)

```javascript
document.addEventListener('DOMContentLoaded', () => {
    const taskForm = document.getElementById('task-form');
    const taskInput = document.getElementById('task-input');
    const taskList = document.getElementById('task-list');

    taskForm.addEventListener('submit', (event) => {
        event.preventDefault();
        addTask(taskInput.value);
        taskInput.value = '';
    });

    function addTask(task) {
        if (task.trim() === '') return;

        const li = document.createElement('li');
        li.textContent = task;

        const removeButton = document.createElement('button');
        removeButton.textContent = 'Remove';
        removeButton.addEventListener('click', () => {
            taskList.removeChild(li);
        });

        li.appendChild(removeButton);
        taskList.appendChild(li);

        li.addEventListener('click', () => {
            li.classList.toggle('completed');
        });
    }
});
```

## References

- [CS50 Course Materials](https://cs50.harvard.edu/)
- [MDN Web Docs](https://developer.mozilla.org/en-US/)
- [W3Schools HTML, CSS, and JavaScript Tutorials](https://www.w3schools.com/)
- [IEX Cloud API](https://iexcloud.io/)

## License

This project is licensed under the MIT License. See the [LICENSE](/LICENSE) file for more details.

## Acknowledgements

This project was developed as part of the CS50 course by Harvard University on EdX. Special thanks to the CS50 team for their support and resources.
