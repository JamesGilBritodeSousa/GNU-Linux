#----------"UBUNTU"-------------
Verificar atualizações unbuntu e instalar
1 - sudo apt update && sudo apt dist-upgrade -y
2 - sudo apt install ubuntu-restricted-extras "Instalar apps de não código aberto"

Corrigir erro inicio unbuntu 'Mensagem no boot do mac'
1 - sudo su -
2 - cd /boot/efi/EFI/ubuntu
3 - cp grubx64.efi shimx64.efi
4 - reboot

Aplicativo de limpeza do sistema
1 - sudo apt install bleachbit

Git
sudo apt install git

Comandos net
sudo apt install net-tools

Editar host AP
nm-connection-editor

#----------"ARDUINO"-------------
Instalação:
1 - Fazer Download do Site em Downloads
No terminal:
2 - cd Downloads
3 - ls
4 - tar -xvf arduino-1.8.13-linux64.tar.xz
5 - sudo mv arduino-1.8.13 /opt
6 - cd /opt/
7 - cd arduino-1.8.13
8 - sudo chmod +x install.sh
9 - sudo ./install.sh

Libraries:
1 - Copiar a pasta libraries para /home/james/Arduino/libraries/

Theme:
1 - Copiar a pasta theme para /home/james/Arduino/theme/
Theme:

Tools
1 - Copiar a pasta libraries para /home/james/Arduino/tools/

Configuração do ESP32:
ESP32 no ARduino menu Preferências do Arduino
1 - Copiar json para placas: https://dl.espressif.com/dl/package_esp32_index.json
2 - Em 'Gerenciador de Placas' instalar ESP32 1.04
3 - Placa selecionar: ESP32 Dev Module
4 - Local do Sketchbook: /home/james/Arduino

Erro versão Python, instalação Arduino 'exec: "python": executable file not found in $PATH'
1 - sudo ln -sf /usr/bin/python3.8 /usr/bin/python

Erro pyserial, instalação Arduino 'ImportError: No module named serial.tools.list_ports #350'
'Acesso ao Python pela serial'
Instalação:
1 - Download e descompactação
2 - cd Downloads
3 - ls
4 - tar -xvf pyserial-3.4.tar.xz
5 - cd pyserial-3.4.tar.xz
6 - sudo python3 setup.py inst

#----------"VS Code"-------------
Desinstalar VSCode
1 - sudo apt purge code

Erro Python na instalação VS Code
1 - sudo apt-get install python3-distutils

#----------"Fritzing"-------------
Instalar
1 - sudo add-apt-repository ppa:ehbello/fritzing
2 - sudo apt-get update
3 - sudo apt-get install fritzing

Desinstalar
1 - sudo add-apt-repository ppa:ehbello/fritzing --remove
2 - sudo apt-get remove fritzing --auto-remove

#----------"Wine"-------------
1 - wine
2 - sudo apt install q4wine
3 - sudo apt install konsole

#----------"Mono"-------------
Instalar
1 - echo "deb http://download.mono-project.com/repo/debian wheezy main" | sudo tee /etc/apt/sources.list.d/mono-xamarin.list
2 - sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF
3 - sudo apt-get update
4 - sudo apt-get install mono-devel
5 - sudo apt-get install mono-complete
6 - sudo apt-get install eferenceassemblies-pcl
7 - sudo apt-get install ca-certificates-mono

Desinstalar
1 - sudo apt-get remove mono-* --auto-remove

#----------"Pinta"-------------
Instalar
1 - sudo add-apt-repository ppa:pinta-maintainers/pinta-stable
2 - sudo apt-get update && sudo apt-get install pinta

Desinstalar
sudo apt-get remove pinta
sudo apt-get autoremove pinta

#----------"Comandos Linux no terminal"-------------
touch a.txt //Cria arquivo
echo "hello world" > a.txt //Escreve arquivo, sobrescrevendo conteúdo anterior
cat a.txt //abre aquivo pequeno direto no shell
echo "Acrescenta Linha" >> a.txt //Faz append
more a.txt //abre aquivos grandes



