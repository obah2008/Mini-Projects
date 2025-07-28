# Intrusion detection with Suricata

## Objectives: 
The purpose of the project is to gain hands on skills with Surricata by practicing basic Incident Simulation and response. It will include the following:
- Installing Surricata
- Configuring Surricata
- Creating Surricata rules
- Network Intrusion detection with suricata

### Tools Used
Not taking to account the Hypervisor(VMware) the tools I'll be using in this project are:
- Surricata: What did you expect the name of the project is literally intrusion detection with Surricata 
- Atttack simulation tool: Undecided

### Acknowledgments: This project was made possible through hackersploits Surricata guide video over on [Youtube](https://www.youtube.com/watch?v=91i7InHVOso&t=464s). 

## Installing & configuring Suricata
Installed Surricata and it's dependencies using the command below

```bash
sudo apt-get install software-properties-common
sudo add-apt-repository ppa:oisf/suricata-stable
sudo apt-get update
```
```bash
sudo apt-get install suricata
```
### Configuration
Open .YAML using commmand:
```bash
sudo nano /etc/suricata/suricata.yaml
```
- Change af-packet interface to the network interface suricata will monitor
- Change Home_Net to devices subnet address
- set cross platform libpcap capture support to device interface 
- enable community id by setting it to true
