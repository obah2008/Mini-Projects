# DoS Attack Response
Denial of Service (DoS) is a cyberattack in which threat actors use various methods to disrupt the availability of a service or system. In this project, I will launch an ICMP DoS attack on one of my systems and implement response measures on the target system.

## Network Reconnaissance 
The first step to begin the Denial of Service(DOS) attack would be to scan or probe the network for a potential target. Note: In this scenario we are assuming the attacker already has access to our internal network. 
- To do that I'll be using **Nmap** or network mapper which comes pre-installed in **Kali Linux**
- Scan for discoverable hosts on the network address we are in. In my case that would be 192.168.1.0/24
