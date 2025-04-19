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

## Step 1
