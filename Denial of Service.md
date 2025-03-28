# DoS Attack Response
Denial of Service (DoS) is a cyberattack in which threat actors use various methods to disrupt the availability of a service or system. In this project, I will launch an ICMP DoS attack on one of my systems and implement response measures on the target system.

## Network Reconnaissance
The first step in conducting a Denial of Service (DoS) attack is to scan or probe the network for a potential target. Note: In this scenario, we assume the attacker already has access to the internal network.

To achieve this, I'll be using Nmap (Network Mapper), a powerful network scanning tool that comes pre-installed in Kali Linux, the operating system I’ll be using for the attack.

- First, I'll scan for discoverable hosts on the network. In my case, the network address is 192.168.1.0/24, and I’ll run the following command:

      nmap -sn -R 192.168.1.0/24
  1. The -sn flag performs a ping scan, identifying live hosts without scanning ports.

  2. The -R flag looks for the hostnames of the discovered devices.

- Once the target system is identified, the next step is to launch the Denial of Service attack

## DoS Attack
For the Denial of Service (DoS) attack, I'll be using Hping3, a tool that allows me to craft and send hundreds of thousands of ICMP Echo Requests to the target. This flood of requests will overwhelm the target, causing it to slow down or crash.

- To do this I'll be using the command below

  ``` bash
  sudo hping3 -l --flood <X.x.x.x>

![Screenshot (78)](https://github.com/user-attachments/assets/39f5ffa0-2de2-419d-b2ea-97111bf33fff)

## Detection with Wireshark
After launching the attack, the target system slows down drastically due to the flood of ICMP Echo Requests. Now, we can analyze the attack using Wireshark.

- Upon opening Wireshark, we immediately see hundreds of ICMP Echo Requests being sent to the target in rapid succession.

- Now, we can identify the attacker's IP address and prepare a response.

![Screenshot (76)](https://github.com/user-attachments/assets/1ee42a29-8d20-4c63-8031-9bb781dbf42d)

## Blocking the Attacker's IP Address with Windows Firewall
Now we have identified the attacker's IP address, we can create a new Windows firewall rule to block all traffic from that address. 





