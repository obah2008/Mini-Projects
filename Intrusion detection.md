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



The process' exit code is 'exited' and its exit status is 1.
Jul 27 18:16:49 obah-VMware-Virtual-Platform systemd[1]: suricata.service: Failed with result 'exit-code'.
░░ Subject: Unit failed
░░ Defined-By: systemd
░░ Support: http://www.ubuntu.com/support
░░ 
░░ The unit suricata.service has entered the 'failed' state with result 'exit-code'.
Jul 27 18:16:49 obah-VMware-Virtual-Platform systemd[1]: suricata.service: Scheduled restart job, restart counter is at 5.
░░ Subject: Automatic restarting of a unit has been scheduled
░░ Defined-By: systemd
░░ Support: http://www.ubuntu.com/support
░░ 
░░ Automatic restarting of the unit suricata.service has been scheduled, as the result for
░░ the configured Restart= setting for the unit.
Jul 27 18:16:49 obah-VMware-Virtual-Platform systemd[1]: suricata.service: Start request repeated too quickly.
Jul 27 18:16:49 obah-VMware-Virtual-Platform systemd[1]: suricata.service: Failed with result 'exit-code'.
░░ Subject: Unit failed
░░ Defined-By: systemd
░░ Support: http://www.ubuntu.com/support
░░ 
░░ The unit suricata.service has entered the 'failed' state with result 'exit-code'.
Jul 27 18:16:49 obah-VMware-Virtual-Platform systemd[1]: Failed to start suricata.service - Suricata IDS/IPS/NSM/FW daemon.
░░ Subject: A start job for unit suricata.service has failed
░░ Defined-By: systemd
░░ Support: http://www.ubuntu.com/support
░░ 
░░ A start job for unit suricata.service has finished with a failure.
░░ 
░░ The job identifier is 21547 and the job result is failed.

