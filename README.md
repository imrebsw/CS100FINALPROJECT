# TASK SCHEDULER DISCORD BOT 
 > Authors: [Jina Hwang] (https://github.com/Jinah9993) [Jeff Purdy] (https://github.com/J-Purdy) [Calvin Trujillo] (https://github.com/Ctr011) [Rebekah Woo] (https://github.com/imrebsw)

# Project Description
 > This project encompasses the development of a discord bot that acts as a personal assistent/scheduler. The idea is that you can "tell" the bot upcoming assignments, exams, important events, etc by texting the bot the details of the task/event, and the bot will not only save it on your connected Google Calendar, but it will also send you discord text reminders before the task/event. We are interested in developing a bot because of its many applications. Users will set up an account with a unique username and password and customized profile. Users will be prompted for their name, desired username, password, name for the bot, and Google Calendar authorization. Users can tell the bot tasks and/or events including a title, description, classification (e.g. personal, work, study), due date (hard deadline), and reminder time/date (soft deadline). Users should also be able delete created tasks/events and edit them. Each created task/event will be a text from the bot that generates as a confirmation of creation with a title for the users to use as reference when deleting or editing. The discord bot will then remind users of these tasks and/or events by sending a message to users through the discord chat. The discord bot may also be able to send these events/tasks to the users' Google Calendar (this feature may be omitted). We will be developing with C++ and discord's API.

UML Image

<img src="https://github.com/imrebsw/CS100FINALPROJECT/blob/main/UmlProject-2.jpg?raw=true" width="1000">

UML Decription:

This class Diagram shows the manner which the structure classes and main Event class will interact with one another. The Event class will be using the variables from the structure classes to process and display the given information for specific events created in the discord server. These events will have different classification categories depending on the server and the user's needs. NOTE: This is not the final design for the UML Diagram, we will be updating this diagram as more discussion occurs and as the project progresses. 
