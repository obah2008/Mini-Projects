# Hash cracking with John the ripper
## Overview
**Ever heard of hashing?**  
The 8th wonder of the world.

Have you ever wondered how organizations that manage millions of login credentials securely store passwords?  
Or why older hashing algorithms like **MD5** are no longer considered secure?



### What is Hashing?

What exactly is hashing? After all, we can't crack a hash without understanding what a hash is.

Hashing is a cryptographic method in which a fixed-length output, called a **hash** or **message digest**, is created from a plaintext input (like a password or a file).

### Why is Hashing Done?

You may ask, why is this done?

It's necessary for a variety of reasons, actually:

- For large organizations that need to securely store millions of passwords
- Hashes are also used by millions of individuals daily to verify the integrity of files and messages


## Objectives
As stated earlier the objectives of this are as follows:

- Creating a list of passwords  
- creating hashes for them using the **MD5** algorithm  
- Cracking those hashes using **John the Ripper**, a powerful password cracking tool

## Tools used
For this project I'll be primarily using two tools

-  **John the Ripper**: A powerful password cracking tool used to recover plaintexts from hashed passwords.  
  It works by taking a list of possible passwords, hashing each one using the same algorithm (in this case, MD5), and comparing the result to the original hash.

- **OpenSSL**: A tool used for cryptography, it's what we'll be using to create the MD5 hashes of the passwords

These are all tools that come pre-installed in kali linux(The operating system I'll be using)

## Scenario
A mid sized company stores hundreds of passwords in it's user database. T avoid storing the login details in the clear, they implemented hashing, but chose to use **MD5**. The company has recently suffered a data-breach in which the hashes exfiltrated. 

### Step 1: Creating the MD5 hashes
First thing we need to do before we can properly emulate the above scenario is to create the Hash list from our passwords.txt file. We could do this in one of two ways; Create a script to hash each individual password or manually do it with OpenSSL.

- To do that I'll be creating a script that hashes each password with OpenSSL successively
- Assuming the passwords.txt file has already been created with the passwords in it. We can run the scipt below to read the Password.txt file, hash all its components and output it in hashes.txt

<pre>#!/bin/bash

while read -r password; do
    echo -n "$password" | openssl dgst -md5 | awk '{print $2}'
done < passwords.txt > hashes.txt
</pre>

- The script above creates a file "hashes.txt" that contains the hashes. Now we've created the hashes it's time to move on to cracking them
![image](https://github.com/user-attachments/assets/d18d05dd-a405-4e38-a717-0ffb1f45f0b2)

## Step 2: Cracking the MD5 Hashes
For this step, I'll be using John the Ripper. John the Ripper works like Hydra, meaning it's more or less a bruteforce tool. But instead of trying a list of common passwords against online services, John the Ripper performs mainly cryptographic attacks, i.e., hash cracking and encrypted password cracking.

John the ripper takes a list of the most common passwords(like the rockyou.txt) hashes them with the same hashing algotithm the hashes were created with and compares them.

- Let's put that to practice by cracking the hashes.txt file
- Assuming john the riper i already installed and you have a password list file we can run the command below to crack the hash. The command assumes the rock you.txt is still in it's default location
  ```
    john --format=raw-md5 --wordlist=/usr/share/wordlists/rockyou.txt hashes.txt

![image](https://github.com/user-attachments/assets/491e3d49-84f1-4068-b0f7-342aabeccd25)
