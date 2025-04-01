# Phishing Email Simulator
Phishing is the most common cyber attack, making up around 33% of all cyber incidents as of March 2025. In this project, I'll be launching a phishing email campaign by designing a landing page and creating a phishing email. Then, using the emails I’ve created, I’ll highlight the indicators of a phishing email and ways to protect against phishing attacks.

## Setting Up a Phishing Campaign
Note: All of the lab setup is done on windows

Step 1: Install Gophish
- Download Gophish from Gophish github repo [here](https://github.com/gophish/gophish)

- Extract the downloaded ZIP file and run the executable

- Open the Gophish admin panel in your browser with

       https://Ipaddress:3333.
- Now we have access to the Gophish dashboard it's time to create the phishing email

![image](https://github.com/user-attachments/assets/58015910-58fe-4bad-9a4f-fb67f454ffaa)

Step 2: Crafting the Phishing Email

Creating the Email Template: This is the actual email that will be sent to the target. On the Email Templates menu, create a new template. Choose a template name, envelope sender, and subject. Obtain a legitimate email template and paste it into the Email Content section.

Creating the Sending Profile: This is the email account that the phishing emails will be sent from. On the Sending Profiles menu, create a new profile. Choose a profile name, enter the SMTP server, username, and password. Set the From Address and test the connection to ensure it works.

Creating the Landing Page: This is the webpage where victims will be redirected. On the Landing Pages menu, create a new page. Choose a page name and import a legitimate login page. Enable Capture Submitted Data to store credentials.

Launch the campaign:




