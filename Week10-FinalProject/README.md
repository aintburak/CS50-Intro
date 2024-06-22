
# Capstone Project

## Overview

The Capstone Project is an innovative chat application that combines the power of React for the client-side interface and Flask for the server-side operations. Designed to facilitate seamless communication, the application allows users to send both text messages and images. A standout feature of the Capstone Project is its implementation of federated learning for image classification, which enables the chatbot to continuously learn and improve from user interactions while ensuring data privacy.

## Project Overview

The Capstone Project is built using two main technologies: React for the client-side development and Flask for the server-side operations. React provides a dynamic and responsive user interface that enhances the user experience, while Flask offers a robust backend framework to handle server requests and manage data. The application’s key features include the ability to send text messages, upload and classify images, and maintain real-time chat history with bot responses. The incorporation of federated learning is particularly noteworthy, as it allows the chatbot to refine its image classification algorithms based on user-provided images without compromising user privacy by keeping the data on local devices.

- **Built with:** React (client-side), Flask (server-side)
- **Features:**
  - Send text messages
  - Send images
  - Image classification with federated learning
  - Real-time chat history and bot responses

## Installation

1. **Clone the repository:**

   ```bash
   git clone <repository_url>
   ```

2. **Navigate to the project directory:**

   ```bash
   cd Capstone
   ```

3. **Set up the Flask server:**

   a. Navigate to the server directory:

   ```bash
   cd server
   ```

   b. Create and activate a virtual environment (optional but recommended):

   ```bash
   python -m venv venv
   source venv/bin/activate
   ```

   c. Install the required Python packages:

   ```bash
   pip install opencv-python
   pip install flask
   pip install flask-cors
   pip install tensorflow
   pip install keras
   pip install scikit-learn
   pip install flwr
   pip install numpy
   pip install pydicom
   pip install pillow
   ```

4. **Set up the React client:**

   a. Navigate to the client directory:

   ```bash
   cd ../client
   ```

   b. Install the required npm packages:

   ```bash
   npm install
   npm install concurrently
   npm install cross-env
   ```

## Running the Application

To run both the Flask client and the React client simultaneously, use the following command in the client directory:

```bash
npm start
```

To run the federated learning server, use the following command in the server directory:

```bash
python server.py
```

## Usage

The Capstone Project provides an intuitive chat interface where users can send text messages and upload images for classification. The real-time chat feature allows users to view their chat history and receive instant responses from the bot. This interaction not only facilitates communication but also contributes to the federated learning model, enabling the chatbot to improve its image classification capabilities based on the diverse data it encounters.

## Future Projects

The development of the Capstone Project opens up numerous exciting avenues for future projects and enhancements. One promising direction is the integration of more advanced natural language processing (NLP) techniques to improve the chatbot's text-based interactions. This would involve fine-tuning these models on specific conversational datasets and seamlessly integrating them with the existing chat interface.

Another potential project is the expansion of the Capstone Project's image classification capabilities. This could be achieved by incorporating additional machine learning models that specialize in different types of image analysis, such as object detection, facial recognition, and sentiment analysis through image interpretation. Furthermore, leveraging transfer learning techniques can help in adapting pre-trained models to new tasks with relatively small datasets, thereby improving the chatbot’s versatility and robustness in handling diverse image inputs.

## Contributing

We welcome contributions from the community to enhance the Capstone Project. Whether you have suggestions for new features, improvements, or bug fixes, we encourage you to contribute.

## License

The Capstone Project is licensed under the MIT License, so please check out [LICENCE](/LICENSE), which allows for flexibility and freedom in using and modifying the code.

## Acknowledgements

We extend our gratitude to the developers of React, Flask, and the various machine learning libraries that power the federated learning capabilities of this application.
