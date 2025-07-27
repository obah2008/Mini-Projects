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
× suricata.service - Suricata IDS/IPS/NSM/FW daemon
     Loaded: loaded (/usr/lib/systemd/system/suricata.service; enabled; preset: enabled)
     Active: failed (Result: exit-code) since Sun 2025-07-27 14:57:47 WAT; 30min ago
   Duration: 270ms
       Docs: man:suricata(8)
             man:suricatasc(8)
             https://suricata.io/documentation/
   Main PID: 118079 (code=exited, status=1/FAILURE)
        CPU: 284ms

Jul 27 14:57:47 obah-VMware-Virtual-Platform systemd[1]: suricata.service: Scheduled restart job, restart counter is at>
Jul 27 14:57:47 obah-VMware-Virtual-Platform systemd[1]: suricata.service: Start request repeated too quickly.
Jul 27 14:57:47 obah-VMware-Virtual-Platform systemd[1]: suricata.service: Failed with result 'exit-code'.
Jul 27 14:57:47 obah-VMware-Virtual-Platform systemd[1]: Failed to start suricata.service - Suricata IDS/IPS/NSM/FW dae
