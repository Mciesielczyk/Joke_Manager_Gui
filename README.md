# Overview
This project is an application for managing a database of jokes. It allows storing, sorting, editing and displaying jokes. Additionally, it integrates
functions for downloading jokes from the internet, saving data to a file and the Firebase cloud, as well as a graphical interface with multimedia functions.
It was done for "Programming Languages and Paradigms" on second semester.

# Main features
## Joke Class:

 The Joke class stores data related to a single joke, such as:
ID, Content, Type, Rating, Date

## JokeManager Class:

The JokeManager class manages a collection of jokes, allowing for adding, deleting, editing, sorting, and displaying jokes.

## get_access_url File:

This file contains functions for retrieving and formatting random jokes from the internet. Uses curl for transferring data with various network protocols.

## Start.cpp File:

The main file contains the application logic, including:
Calling joke management methods.
Handling exceptions using try and catch blocks.
Printing information about encountered errors.


## Multimedia Functions:

The project includes functions for playing sounds and videos to enhance the user interface.

## Firebase
Stores data in the Firebase cloud.



## Graphical User Interface (GUI):

The GUI is designed in .NET.

### Menu 
<img src="https://github.com/user-attachments/assets/ca5f7317-d660-466b-bb6d-553392fe0444" width="400">

### Window to read random jokes from website
![image](https://github.com/user-attachments/assets/08334a9d-44aa-42f3-8fc8-ce0eaac5ad87)

### Window to save data to file, firebase cloud, read from file, sort and remove
![image](https://github.com/user-attachments/assets/cad5f5ee-c246-495e-b568-412e843b62a6)
![image](https://github.com/user-attachments/assets/91acb6a0-06ca-4aad-bb82-2f7e4d7a78be)


# Tools and Resources

## Libraries and Frameworks
curl: Used for transferring data with various network protocols.
.NET: Used for designing the graphical user interface (GUI).

## APIs and Web Services
Random Joke API: Used for retrieving random jokes from the internet.
https://funny-jokes.netlify.app/

Cloud Services
Firebase: Used for storing data in the cloud.
https://firebase.google.com/
![image](https://github.com/user-attachments/assets/ce1e9416-2160-48b2-ad27-c0ead7b16fa7)

## Development Tools
Visual Studio: Used for developing and debugging the project.  
Git: Used for version control.


