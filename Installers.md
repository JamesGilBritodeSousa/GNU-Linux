# Linux Installers

---
## UBUNTU
---

### Atualização:

1 - sudo apt update && sudo apt dist-upgrade -y

2 - sudo apt install ubuntu-restricted-extras "Instalar apps de não código aberto"

---
### Boot Ubuntu Mac

1 - sudo su -

2 - cd /boot/efi/EFI/ubuntu

3 - cp grubx64.efi shimx64.efi

4 - reboot

---
### Aplicativo de limpeza do sistema

1 - sudo apt install bleachbit

---
### Git

1 - sudo apt install git

---
### Comandos net

1 - sudo apt install net-tools

---
### Editar host AP

1 - nm-connection-editor

---
## ARDUINO
---
### Instalação:

1 - Fazer Download do Site em Downloads
No terminal:

2 - $ cd Downloads

3 - $ ls

4 - $ tar -xvf arduino-1.8.13-linux64.tar.
xz

5 - $ sudo mv arduino-1.8.13 /opt

6 - $ cd /opt/

7 - $ cd arduino-1.8.13

8 - $ sudo chmod +x install.sh

9 - $ sudo ./install.sh

---
### Configuração do ESP32:

ESP32 no Arduino menu Preferências do Arduino:

1 - Copiar json para placas: https://dl.espressif.com/dl/package_esp32_index.json

2 - Em 'Gerenciador de Placas' instalar ESP32 1.04

3 - Placa selecionar: ESP32 Dev Module

4 - Local do Sketchbook: /home/james/Arduino

---
### Erro versão Python, instalação Arduino 'exec: "python": executable file not found in $PATH'

1 - sudo ln -sf /usr/bin/python3.8 /usr/bin/python

---
### Erro pyserial #350

"instalação Arduino 'ImportError: No module named serial.tools.list_ports #350"

Instalação:

1 - $ Download e descompactação

2 - $ cd Downloads

3 - $ ls

4 - $ tar -xvf pyserial-3.4.tar.xz

5 - $ cd pyserial-3.4.tar.xz

6 - $ sudo python3 setup.py inst

---
### Erro Pyserial line 37
#Traceback (most recent call last):
  File "/home/koan/.arduino15/packages/esp32/tools/esptool_py/2.6.1/esptool.py", line 37, in <module>
      import serial
      ImportError: No module named serial#

Para Python3:

0 - $ pip3 uninstall serial (Caso necessário desinstalar)

1 - $ sudo apt install python-is-python3

2 - $ pip3 install pyserial

Para Python2:

1 - $ sudo add-apt-repository universe

2 - $ sudo apt update

3 - $ sudo apt install python2

4 - $ curl https://bootstrap.pypa.io/get-pip.py --output get-pip.py

5 - $ python2 get-pip.py

6 - $ pip2 install pyserial

---
### Acesso total a USB temporário
---
1 - $ sudo chmod -R 777 /dev/ttyUSB0

---
### Verificar Grupos que o usuário participa
groups

---
### Verificar grupos disponíveis
1 - $ compgen -g

---
### Se inserir no grupo
1 - $ sudo usermod -a -G tty(ou dialout) yourname
fazer logout e login (obrigatório)

---
## VS Code
Desinstalar VSCode
1 - $ sudo apt purge code

Erro Python na instalação VS Code
1 - $ sudo apt-get install python3-distutils

---
## Fritzing
---

Instalar

1 - sudo add-apt-repository ppa:ehbello/fritzing

2 - sudo apt-get update

3 - sudo apt-get install fritzing

Desinstalar
1 - sudo add-apt-repository ppa:ehbello/fritzing --remove
2 - sudo apt-get remove fritzing --auto-remove

---
## Wine

1 - wine
2 - sudo apt install q4wine
3 - sudo apt install konsole

---
## Mono ---

Instalar

1 - $ echo "deb http://download.mono-project.com/repo/debian wheezy main" | sudo tee /etc/apt/sources.list.d/mono-xamarin.list

2 - $ sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF

3 - $ sudo apt-get update

4 - $ sudo apt-get install mono-devel

5 - $ sudo apt-get install mono-complete

6 - $ sudo apt-get install eferenceassemblies-pcl

7 - $ sudo apt-get install ca-certificates-mono

Desinstalar

1 - $ sudo apt-get remove mono-* --auto-remove

---
## Pinta 
---

Instalar

1 - $ sudo add-apt-repository ppa:pinta-maintainers/pinta-stable

2 - $ sudo apt-get update && sudo apt-get install pinta

Desinstalar

1 - $ sudo apt-get remove pinta

2 - $ sudo apt-get autoremove pinta

---
## Comandos Linux no terminal
---

touch a.txt //Cria arquivo

echo "hello world" > a.txt //Escreve arquivo, 
sobrescrevendo conteúdo anterior

cat a.txt //abre aquivo pequeno direto no shell

echo "Acrescenta Linha" >> a.txt //Faz append

more a.txt //abre aquivos grandes