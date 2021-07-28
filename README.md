Guia de Referência:
Lista de Comandos para GNU/Linux
--------------------------------

### **Atualizalções**
- **sudo apt update && sudo apt upgrade** *(atualiza o sistema)*
- **update-manager -d** *(gerenciador de atualizações)*
- sudo apt-get install exfat-utils exfat-fuse *(Pacote para formatação ExFAT)*

### **Atalhos Globais**
- __Ctrl+C *(*__*cancela o comando atual em funcionamento)*
- **Ctrl+Z** *(para o comando atual, retorna com fg em primeiro plano* *Linux ou bg em segundo plano)*
- **Ctrl+D** *(faz logout da sessão atual; similar ao comando exit)*
- **Ctrl+W** (apaga uma palavra na linha atual)
- **Ctrl+U** *(apaga a linha inteira)*
- **Ctrl+R** *(tecle para mostrar um comando recente)*
- **!!** *(repete o último comando)*

### **Lista dos Comandos mais Comuns**
- **Exit** faz logout da sessão atual
- **ls** lista diretórios
- **ls -al** lista mostrando também arquivos ocultos
- **cd** ***dir*** muda do diretório atual para o especificado (substituir a variável *dir* pelo nome da pasta)
- **cd** muda para o diretório /home (arquivos pessoais)
- **pwd** mostra o caminho do diretório atual
- **mkdir** ***dir***\* criar um diretório especificado (substituir a variável *dir* pelo nome da pasta)
- **rm** ***arq*** apaga o arquivo especificado (substituir a variável *arq* pelo nome do arquivo que se quer excluir)
- **rm -r** ***dir*** apaga o diretório especificado (substituir a variável *dir* pelo nome da pasta)
- **rm -f** ***arq*** apaga o arquivo especificado forçadamente (-f de force) (substituir a variável *arq* pelo nome do arquivo que se quer excluir)
- **rm -rf** ***dir*** apaga o diretório especificado forçadamente (substituir a variável *dir* pelo nome da pasta). Utilize esse comando com extrema atenção!
- **cp -r** ***arq1 arq2*** copia o “arquivo1” para o “arquivo2” (substituir a variável *arq\** pelo nome do arquivo)
- **cp -r** ***dir1 dir2*** copia o diretório1 para o diretório2; cria o diretório2 caso não exista (substituir a variável *dir* pelo nome do diretório)
- **mv** ***arq1 arq2*** dupla função: pode ser usado para renomear ou mover arquivo1 para arquivo2. Se arquivo2 for um diretório existente, move arquivo1 para dentro do diretório “arquivo2” (substituir a variável*arq* pelo nome do arquivo)
- **ln -s** ***arq link*** cria um link simbólico *link* (atalho) para arquivo (substituir a variável *arq* pelo nome do arquivo e *link* pelo nome que terá o atalho)
- **touch** ***arq*** cria ou atualiza o arquivo (substituir a variável *arq* pelo nome do arquivo)
- **cat >** ***arq*** direciona a entrada padrão para um arquivo (substituir a variável *arq* pelo nome do arquivo)
- **more** ***arq*** mostra o conteúdo de um arquivo (substituir a variável *arq* pelo nome do arquivo)
- **head** ***arq*** mostra as primeiras 10 linhas de um arquivo (substituir a variável *arq* pelo nome do arquivo)
- **tail** ***arq*** mostra as últimas 10 linhas de um arquivo (substituir a variável *arq* pelo nome do arquivo)
- **tail -f** ***arq*** mostra o conteúdo de um arquivo enquanto ele é atualizado (aumenta de tamanho), iniciando com as últimas 10 linhas (substituir a variável *arq* pelo nome do arquivo)
- **ps** mostra os processos de usuário ativos em tempo real￼
- **top** mostra todos os processos rodando em tempo real
- **kill** ***pid*** mata um processo específico pelo número ID (substituir *pid* pelo número do processo)
- **killall** ***proc*** mata todos os processos com o nome especificado (*proc*, de processos (substituir *proc* pelo nome do processo)
- **bg** lista trabalhos parados ou em segundo plano ou pode continua-los também
- **fg** traz o trabalho mais recente para o primeiro plano
- **fg** ***trab*** traz o trabalho “*trab*” para o primeiro plano (substituir *trab* pelo nome do processo)
- **chmod** ***octal arq*** muda as permissões do arquivo “*arq*” para *octal*, que pode ser especificada separadamente para “usuário”, “grupo” e “outros”. Os valores em octal são representados abaixo:
  - 4 – leitura (r, de read)
  - 2 – gravação (w, de write)
  - 1 – execução (x, de execute)
    - Explanação: Para definir permissões, somam-se os valores acima. Por exemplo, para atribuir ao dono do arquivo (“usuário) acesso total de leitura (r), gravação (w) e execução (x), basta somar o valor octal 4 + 2 + 1 = 7. Supondo que você queira limitar o acesso para membros do “grupo”, permitindo apenas a leitura e gravação, basta somar 4 + 2 = 6. Reunindo os dois exemplos citados, ficaria: chmod 760 (r para usuário, w para grupo e 0 para outros ou “rw-“)

### **Outros exemplos**
- **chmod** ***777:*** leitura (r), gravação (w) e execução (x) para todos (“usuário”, “grupo” e “outros”)
- **chmod** ***755:*** “rwx” para o “dono” (usuário), “rw” para o “grupo” e “outros”

*Para mais informações, digite no terminal: **man chmod***

- **ssh** ***usuário@host:*** conecta ao *host* como *usuário* (exemplo: ssh computeiro@meuservidor)
- **ssh -p porta** ***usuário@host*** conecta ao host na porta especificada (substituir “*porta*” pelo número da porta configurada)
- **ssh-copy-id** ***usuário@host*** adiciona a sua chave para o *host* e *usuário* daquele host; serve para ativar logins sem senha com uso de chaves
- **grep** ***sequência arquivos*** pesquisa pela *sequência* nos arquivos (substituir a sequência e arquivos pelos valores correspondentes à pesquisa)
- **grep –r** ***sequência dir*** pesquisa recursivamente pela *sequência* no diretório *dir*
- ***comando*** **| grep** ***sequência*** pesquisa pela *sequência* na saída do *comando* (substituir *comando* e *sequência* de acordo com os valores a serem buscados)
- **locate** ***arq*** encontra todas as instâncias de um arquivo (substituir a variável *arq* pelo nome do arquivo)
- **date** mostra a data e hora atual
- **cal** mostra um calendário do mês atual
- **uptime** mostra o tempo de atividade do sistema
- **w** mostra quem está online
- **whoami** mostra como quem você está logado
- **finger** usuário mostra informações do usuário
- **uname -a** mostra informações do kernels
- **cat /porc/cpuinfo** mostra informações da CPU
- **cat /proc/meminfo** mostra informações da memória
- **man** ***comando*** abre o manual do comando especificado (substituir a variável *comando* pelo nome do comando que se quer conhecer)
- **df** mostra o uso do disco
- **du** mostra o uso do espaço em um diretório
- **free** mostra o uso da memória e swap
- **whereis** ***aplicação*** mostra possíveis localizações do aplicativo (substituir *aplicação* pelo nome do programa)
- **which** ***aplicação*** mostra que *aplicação* irá rodar por omissão (substituir *aplicação* pelo nome do programa)
- **tar cf *tar arqs*** cria um pacote TAR (nomeado pacote.tar) com os arquivos especificados (substituir a variável *arqs* pelo nome do arquivos)
- **tar xf** ***tar*** extrai os arquivos de “*pacote.tar*” (substituir a variável *pacote.tar* pelo nome do arquivo)
- **tar czf** ***tar.gz arqs*** cria um pacote TAR (nomeado *pacote.tar.gz*) com compressão GZip
- **tar xzf** ***tar.gz*** extrai um pacote TAR (nomeado *pacote.tar.gz*) com compressão GZip
- **tar cjf** ***tar.bz2*** cria um pacote TAR (nomeado *pacote.tar.bz2*) com compressão BZip2
- **tar xjf** ***tar.bz2*** extrai um pacote TAR (nomeado *pacote.tar.gz*) com compressão BZip2
- **gzip** ***arq*** compacta um arquivo e o renomeia para arq.gz (substituir a variável *arq* pelo nome do arquivo)
- **gzip -d** ***gz*** descompacta arq.gz para um arquivo (substituir a variável *arq.gz* pelo nome do arquivo)
- **ping** ***host*** envia um pacote ICMP (ping) para o *host* e mostra o resultado (substituir a variável*host* pelo domínio de um site ou o número IP)
- **whois** ***domínio*** retorna informações sobre o domínio (substituir a variável *domínio* pelo endereço de um site ou o número IP)
- **dig** ***domínio*** retorna informações de DNS para o domínio (substituir a variável *host* pelo domínio de um site ou o número IP)
- **dig -x** ***host*** mostra o retorno reverso para um host (substituir a variável *host* pelo domínio de um site ou o número IP)
- **wget** ***arq*** faz o download de arquivo (arq) (substituir a variável *arq* pelo endereço online do arquivo)
- **wget -c** ***arq*** continua o download interrompido de um arquivo (arq) (substituir a variável *arq* pelo endereço online do arquivo)

***Instalação a partir do código fonte (source code); os comandos devem ser digitados na sequência em um terminal, um de cada vez:***

- **./configure**
- **make**
- **make install**

### **Comandos de instaladores**
- **dpkg -i** ***deb*** instala um pacote DEB (distros Debian) (substituir a variável *pacote.deb* pelo nome do pacote de programa)
- **rpm -Uvh** ***rpm*** instala um pacote RPM (Distros que utilizam RPM) (substituir a variável*pacote.rpm*pelo nome do pacote de programa)

### **Informações do sistema Linux**
- **arch:** Mostre a arquitetura da máquina (1).
- **uname -m:** Mostre a arquitetura da máquina (2).
- **uname -r:** Mostre versão do kernel usada.
- **dmidecode -q:** Mostre os componentes do sistema (hardware).
- **hdparm -i /dev/hda:** Mostre as características de um disco rígido.
- **hdparm -tT /dev/sda:** Execute teste de leitura em um disco rígido.
- **cat /proc/cpuinfo:** Exiba informações da CPU.
- **cat /proc/interrupts:** Mostre interrupções.
- **cat /proc/meminfo:** verificar a utilização de memória.
- **cat /proc/swaps:df -h:** Mostre o tamanho dos arquivos e diretórios ordenados por tamanho.
- **ls -lSr |more:** Estimar o espaço usado pelo diretório ‘dir1’.
- **du -sh dir1:** Mostre o tamanho dos arquivos e diretórios ordenados por tamanho.
- **du -sk \* | sort -rn:** mostra o espaço usado por pacotes rpm instalados organizado pelo tamanho (Fedora, Red Hat e outros).
- **rpm -q -a –qf ‘%10{SIZE}t%{NAME}n’ | sort -k1,1n:** mostra o espaço usado por pacotes instalados, organizado pelo tamanho (Debian, Ubuntu e outros).
- **dpkg-query -W -f=’${Installed-Size;10}t${Package}n’ | sort -k1,1n:** g> Mostre arquivos de swap.
- **cat /proc/version:** Exiba a versão do kernel.
- **cat /proc/net/dev:** Mostre estatísticas e adaptadores de rede.
- **cat /proc/mounts:** Mostre o sistema de arquivos montado.
- **lspci -tv:** exiba os dispositivos PCI.
- **lsusb -tv:** Mostre os dispositivos USB.
- **date:** Mostre a data do sistema.
- **cal 2011:** Visualizar o calendário em 2011.
- **cal 07 2011:** Mostre o calendário para o mês de julho de 2011.
- **date 041217002011.00:** Coloque (estado, ajustar) data e hora.
- **clock -w:** Salve as alterações para a data na BIOS.

### **Desligar (reinicialização do sistema ou logout)**
- **shutdown -h now:** Desligue o sistema (1).
- **init 0:** Desligue o sistema (2).
- **telinit 0:** Desligue o sistema (3).
- **halt:** Desligue o sistema (4).
- **shutdown -h hours:** minutos e
- **shutdown -c:** Cancele um desligamento do sistema planejado.
- **shutdown -r now:** Reinicie (1).
- **reboot**: Reinicie (2).
- **logout:** Feche a sessão.

### **Arquivos e diretórios**
- **cd /home:** Digite o diretório “em casa”.
- **cd ..:** Volte um nível.
- **cd ../..:** volta 2 níveis.
- **cd:** Vá para o diretório de raiz.
- **cd ~user1:** Vá para o diretório de user1.
- **cd -:** Volte para o diretório anterior.
- **pwd:** Mostre o caminho do diretório de trabalho.
- **ls:** consulte os arquivos em um diretório.
- **ls -F:** consulte os arquivos em um diretório.
- **ls -l:** mostre detalhes de arquivos e pastas em um diretório.
- **ls -a:** Mostre arquivos ocultos.
- **ls \*[0-9]\*:** Mostre arquivos e pastas que contêm números.
- **tree:** Mostre arquivos e pastas em uma árvore a partir da raiz. (1)
- **lstree:** Mostre arquivos e pastas em uma árvore a partir da raiz. (2)
- **mkdir dir1:** Crie uma pasta ou diretório com nome ‘dir1’.
- **mkdir dir1 dir2:** Crie duas pastas ou diretórios simultaneamente (criando dois diretórios ao mesmo tempo).
- **mkdir -p /tmp/dir1/dir2:** Crie uma árvore de diretório.
- **rm -f file1:** Exclua o arquivo chamado ‘arquivo1’.
- **rmdir dir1:** Exclua a pasta chamada ‘dir1’.
- **rm -rf dir1:** exclua uma pasta chamada ‘dir1’ com seu conteúdo recursivamente. *(Se excluí-lo recursivo que estou a dizer que é com o seu conteúdo).*
- **rm -rf dir1 dir2:** Exclua duas pastas (diretórios) com seu conteúdo recursivamente.
- **mv dir1 new\_dir:** Renomear ou mover um arquivo ou pasta (diretório).
- **cp file1:** Copie um arquivo.
- **cp file1 file2:** Copie os dois arquivos ao mesmo tempo.
- **cp dir /\* .:** Copie todos os arquivos de um diretório dentro do diretório de trabalho atual.
- **cp -a /tmp/dir1 .:** Copie um diretório dentro do diretório de trabalho atual.
- **cp -a dir1:** Copie um diretório.
- **cp -a dir1 dir2:** diretório de cópia dois em uníssono.
- **ln -s file1 lnk1:** Crie um link simbólico para o arquivo ou diretório.
- **ln file1 lnk1:** Crie um vínculo físico para o arquivo ou diretório.
- **touch -t 0712250000 file1:** modifica o tempo real (tempo de criação) de um arquivo ou diretório.
- **file file1:** saída (despejo na tela) do tipo mime de um arquivo de texto.
- **iconv -l:** listas de cifras conhecidas.
- **iconv -f fromEncoding -t toEncoding inputFile > outputFile:** Crie uma nova forma de arquivo de entrada assumindo que está codificado em fromEncoding e convertê-lo para ToEncoding.
- **find . -maxdepth 1 -name \*.jpg –print -exec convert ”{}” -resize 80×60 “thumbs/{}” \;:** agrupando arquivos dimensionados no diretório atual e enviá-los aos diretórios em visualização de miniaturas (requer o converso do ImagemagicK).

### **Encontrar arquivos**
- **find / -name file1:** busca de arquivo e diretório da raiz do sistema.
- **find / -user user1:** Encontre arquivos e diretórios pertencentes ao usuário ‘user1’.
- **find /home/user1 -name \\*.bin:** Procure arquivos com extensão ‘. bin’ no diretório ‘/ home/user1’.
- **find /usr/bin -type f -atime +100:** Pesquisar arquivos binários não utilizados nos últimos 100 dias.
- **find /usr/bin -type f -mtime -10:** Pesquisar arquivos criados ou alterados nos últimos 10 dias.
- **find / -name \\*.rpm -exec chmod 755 ‘{}’ \;:** Procure arquivos com extensão ‘. rpm’ e modificar permissões.
- **find / -xdev -name \\*.rpm:** Procure arquivos com extensão ‘. rpm’ ignorando a mídia removível, como CD-ROM, pen-drive, etc…
- **locate \\*.ps:** encontrar arquivos com a extensão ‘. ps primeiro executado com o comando “updatedb’.
- **whereis halt:** Mostre a localização de um arquivo binário, a ajuda ou a fonte. Neste caso ele pergunta onde está o comando ‘parada’.
- **which halt:** mostrar o caminho completo (o caminho completo) para um binário / executável.

### **Trabalhando com sistema de arquivos**
- **mount /dev/hda2 /mnt/hda2:** Monte um disco chamado hda2. Primeiro, verifique a existência do diretório ‘/ mnt/hda2’; Se você não estiver, você deve criá-lo.
- **umount /dev/hda2:** Remova um disco chamado hda2. Em primeiro lugar, do ponto de ‘ / mnt/hda2.
- **fuser -km /mnt/hda2:** Force a remoção quando o dispositivo está ocupado.
- **umount -n /mnt/hda2:** Execute a remoção sem ler o arquivo/etc/MTAB. Útil quando o arquivo é somente leitura ou o disco rígido está cheio.
- **mount /dev/fd0 /mnt/floppy:** Monte um disco flexível (disquete).
- **mount /dev/cdrom /mnt/cdrom:** montar um cdrom / dvdrom.
- **mount /dev/hdc /mnt/cdrecorder:** Monte um cd gravável ou um dvdrom.
- **mount /dev/hdb /mnt/cdrecorder:** montar um cd gravável / dvdrom (um dvd).
- **mount -o loop file.iso /mnt/cdrom:** Monte um arquivo ou uma imagem iso.
- **mount -t vfat /dev/hda5 /mnt/hda5:** Monte um sistema de aComandos rquivos FAT32.
- **mount /dev/sda1 /mnt/usbdisk:** Monte uma memória ou um pen-drive usb (sem especificar o tipo de sistema de arquivos).

### **Espaço em disco**
- **df -h:** Mostre o tamanho dos arquivos e diretórios ordenados por tamanho.
- **ls -lSr |more:** Estimar o espaço usado pelo diretório ‘dir1’.
- **du -sh dir1:** Mostre o tamanho dos arquivos e diretórios ordenados por tamanho.
- **du -sk \* | sort -rn:** mostra o espaço usado por pacotes rpm instalados organizado pelo tamanho (Fedora, Red Hat e outros).
- **rpm -q -a –qf ‘%10{SIZE}t%{NAME}n’ | sort -k1,1n:** mostra o espaço usado por pacotes instalados, organizado pelo tamanho (Debian, Ubuntu e outros).
- **dpkg-query -W -f=’${Installed-Size;10}t${Package}n’ | sort -k1,1n:** Mostrar (no Debian ou derivados) uma lista com 25 pacotes instalados que consomem mais espaço (em ordem decrescente)

### **Usuários e grupos**
- **groupadd nombre\_del\_grupo:** Crie um novo grupo.
- **groupdel nombre\_del\_grupo:** Exclua um grupo.
- **groupmod -n nuevo\_nombre\_del\_grupo viejo\_nombre\_del\_grupo:** Renomear um grupo.
- **useradd -c “Name Surname ” -g** **admin** **-d /home/user1 -s /bin/bash user1:** Crie um novo usuário “admin” do grupo.
- **useradd user1:** Crie um novo usuário.
- **userdel -r user1:** excluir um usuário (‘-r’ elimina o diretório Home).
- **usermod -c “User FTP” -g system -d /ftp/user1 -s /bin/nologin user1:** Altere os atributos do usuário.
- **passwd:** Altere senha.
- **passwd user1:** Altere a senha do usuário (apenas pelo root).
- **chage -E 2011-12-31 user1:** Defina um limite de tempo para a senha do usuário. Neste caso, ele diz que a chave expira a 31 de dezembro de 2011.Informações do sistema Linux
- **pwck:** Verifique a sintaxe correta ‘/ etc/passwd’ arquivo formato e a existência de usuários.
- **grpck:** Verifique a sintaxe correta e formato do arquivo ‘/ etc/grupo’ e a existência de grupos.
- **newgrp group\_name:** Registre um novo grupo para alterar o grupo padrão dos arquivos recém-criados.

### **Permissões de Arquivos (+ Adiciona e – Remover permissões)**
- **ls -lh:** Mostre permissões.
- **ls /tmp | pr -T5 -W$COLUMNS:** Divida o terminal em 5 colunas.
- **chmod ugo+rwx directory1:** definir permissões de leitura®, gravar (w) e executar (x) para o dono (u), grupo (g) e outros (ou) no diretório ‘arquivo1’.
- **chmod go-rwx directory1:** Remove® a permissão de leitura, gravação (w) e grupo de implementação (x) (g) e outros (ou) no diretório ‘arquivo1’.
- **chown user1 file1:** Altere o proprietário de um arquivo.
- **chown -R user1 directory1:** Altere o proprietário de um diretório e todos os arquivos e diretórios contidos dentro.
- **chgrp group1 file1:** Altere o grupo de arquivos.
- **chown user1:** Grupo1 arquivo1
- **find / -perm -u+s:** Ver todos os arquivos com sistema SUID configurado.
- **chmod u+s /bin/file1:** Defina o bit SUID em um arquivo binário. O usuário que está executando esse arquivo adquire os mesmos privilégios como proprietário.
- **chmod u-s /bin/file1:** Desabilite o bit SUID em um arquivo binário.
- **chmod g+s /home/public:** definir o SGID bit em um diretório – semelhante ao SUID, mas para o diretório.
- **chmod g-s /home/public:** Desative o bit SGID em um diretório.
- **chmod o+t /home/public:** conjunto STIKY bit em um diretório. Permite a exclusão de arquivos somente para os legítimos proprietários.
- **chmod o-t /home/public:** Desative STIKY bit em um diretório.

### **Atributos especiais de arquivo: (“+” Adiciona e “–” Remover permissões)**
- **chattr +a file1:** permite gravar apenas abrindo um arquivo acrescentar modo.
- **chattr +c file1:** permite que um arquivo a ser compactado / descompactado automaticamente.
- **chattr +d file1:** Ele garante que o programa ignore excluir os arquivos durante o backup.
- **chattr +i file1:** torna-se o arquivo inalterado, portanto não pode ser excluído, alterado, renomeado ou vinculado.
- **chattr +s file1:** Permite que um arquivo a ser excluído com segurança.
- **chattr +S file1:** Ele garante que um arquivo é modificado, as alterações são gravadas no modo síncrono, como com a sincronia.
- **chattr +u file1:** Ele permite que você recuperar o conteúdo de um arquivo, mesmo se está cancelado.
- **lsattr:** Mostre atributos especiais.

### **Arquivos e arquivos compactados**
- **bunzip2 file1.bz2:** Descompacte um arquivo chamado ‘file1.bz2’.
- **bzip2 file1:** comprime um arquivo chamado ‘file1’.
- **gunzip file1.gz:** Descompacte um arquivo chamado ‘file1.gz’.
- **gzip file1:** comprime um arquivo chamado ‘file1’.
- **gzip -9 file1:** Comprima com compressão máxima.
- **rar a file1.rar test\_file:** Crie um arquivo com o rar chamado ‘file1.rar’.
- **rar a file1.rar file1 file2 dir1:** Comprima ‘arquivo1’, ‘arquivo2’ e ‘dir1’ simultaneamente.
- **rar x file1.rar:** Descompacte o arquivo rar.
- **unrar x file1.rar:** Descompacte o arquivo rar.
- **tar -cvf archive.tar file1:** Crie um tarball descompactado.
- **tar -cvf archive.tar file1 file2 dir1:** Crie um arquivo contendo ‘arquivo1’, ‘ file2′ e ‘dir1’.
- **tar -tf archive.tar:** exibir o conteúdo de um arquivo.
- **tar -xvf archive.tar:** extrair um arquivo tar.
- **tar -xvf archive.tar -C /tmp:** extrair um tarball em / tmp.
- **tar -cvfj archive.tar.bz2 dir1:** Crie um arquivo tar compactado no bzip2.
- **tar -xvfj archive.tar.bz2:** descompactar um arquivo compactado do bzip2 tar
- **tar -cvfz archive.tar.gz dir1:** Crie um arquivo tar compactado em gzip.
- **tar -xvfz archive.tar.gz:** Descompacte um arquivo tar do gzip compactado.
- **zip file1.zip file1:** Crie um arquivo compactado zip.
- **zip -r file1.zip file1 file2 dir1:** compressão, zip, vários arquivos e diretórios simultaneamente.
- **unzip file1.zip:** Descompacte um arquivo zip.

### **Pacotes RPM (Red Hat, Fedora e similares)**
- **rpm -ivh package.rpm:** Instale um pacote rpm.
- **rpm -ivh –nodeeps package.rpm:** Instale um pacote rpm ignorar solicitações de dependências.
- **rpm -U package.rpm:** atualize um pacote rpm sem alterar a configuração dos arquivos.
- **rpm -F package.rpm:** atualize um pacote rpm somente se ele estiver instalado.
- **rpm -e package\_name.rpm:** Remova um pacote rpm.
- **rpm -qa:** Mostre todos os pacotes rpm instalados no sistema.
- **rpm -qa | grep httpd:** Mostre todos os rpm de pacotes com o nome “httpd”.
- **rpm -qi package\_name:** informações sobre um pacote específico instalado.
- **rpm -qg “System Environment/Daemons”:** Mostar um grupo software pacotes rpm.
- **rpm -ql package\_name:** Mostre lista de arquivos fornecidos por um pacote rpm instalados.
- **rpm -qc package\_name:** Exiba a lista de arquivos, dada por uma configuração de pacote rpm instalados.
- **rpm -q package\_name –whatrequires:** Mostre lista de dependências que são solicitados para um pacote rpm.
- **rpm -q package\_name –whatprovides:** Mostar capacidade fornecida por um pacote rpm.
- **rpm -q package\_name –scripts:** Mostre scripts começados durante a remoção da instalação.
- **rpm -q package\_name –changelog:** Mostar o histórico das revisões de um pacote rpm.
- **rpm -qf /etc/httpd/conf/httpd.conf:** Verificar qual rpm pacote pertence um determinado arquivo.
- **rpm -qp package.rpm -l:** Mostre lista de arquivos fornecidos por um rpm do pacote que ainda não foi instalado.
- **rpm –import /media/cdrom/RPM-GPG-KEY:** importe a assinatura digital chave pública.
- **rpm –checksig package.rpm:** Verificar a integridade de um pacote rpm.
- **rpm -qa gpg-pubkey:** Verificar a integridade de todos os pacotes rpm instalados.
- **rpm -V package\_name:** Verifique o tamanho do arquivo, licenças, tipos, proprietário, grupo, exame de saúde Resumo de MD5 e última modificado.
- **rpm -Va:** verificar todos os pacotes rpm instalados no sistema. Use com cuidado.
- **rpm -Vp package.rpm:** Verifique se que um pacote instalado ainda não rpm.
- **rpm2cpio package.rpm | cpio –extract –make-directories \*bin\*:** Extraia o arquivo executável de um pacote rpm.
- **rpm -ivh /usr/src/redhat/RPMS/arch/package.rpm:** Instale um pacote construído a partir de um rpm fonte.
- **rpmbuild –rebuild package\_name.src.rpm:** Construa um pacote rpm a partir de um rpm fonte.

### **Pacotes YUM Updater (Red Hat, Fedora e similares)**
- **yum install package\_name:** Baixar e instalar um pacote rpm.
- **yum localinstall package\_name.rpm:** Isto irá instalar um RPM e vai tentar resolver todas as dependências para você, usando seus repositórios.
- **yum update package\_name.rpm:** Atualize todos os pacotes rpm instalados no sistema.
- **yum update package\_name:** Upgrade / atualizar um pacote rpm.
- **yum remove package\_name:** Remova um pacote rpm.
- **yum list:** Liste todos os pacotes instalados no sistema.
- **yum search package\_name:** Encontre um pacote no repositório rpm.
- **yum clean packages:** Limpe um cache de rpm, apagando os pacotes baixados.
- **yum clean headers:** exclua todo o cabeçalho de arquivos que o sistema usa para resolver a dependência.
- **yum clean all:** Remova os arquivos de cache e o cabeçalho do pacote.

### **Pacotes deb (Debian, Ubuntu e derivados)**
- **dpkg -i package.deb:** instalar / atualizar um pacote deb.
- **dpkg -r package\_name:** Remova uma deb para o pacote do sistema.
- **dpkg -l:** Mostre todos os pacotes deb instalados no sistema.
- **dpkg -l | grep httpd:** Mostre todos deb pacotes com o nome “httpd”
- **dpkg -s package\_name:** informações sobre um pacote específico instalado no seu sistema.
- **dpkg -L package\_name:** Mostar lista de arquivos fornecidos por um pacote instalado no sistema.
- **dpkg –contents package.deb:** Mostre lista de arquivos fornecidos por um pacote não instalado ainda.
- **dpkg -S /bin/ping:** Verificar qual pacote pertence um determinado arquivo.

### **Atualizador de pacotes APT (Debian, Ubuntu y derivados)**
- **apt-get install package\_name:** instalar / atualizar um pacote deb.
- **apt-cdrom install package\_name:** instalar / atualizar um pacote deb do cdrom.
- **apt-get update:** Atualize a lista de pacotes.
- **apt-get upgrade:** Atualize pacotes instalados todos.
- **apt-get remove package\_name:** Remova a instalação de um pacote deb do sistema.
- **apt-get check:** Verifique se a resolução correta de dependências.
- **apt-get clean:** limpar o cache de pacotes baixados.
- **apt-cache search searched-package:** Retorna a lista de pacotes que corresponde à série ‘queria pacotes’.

### **Exibir o conteúdo de um arquivo**
- **cat file1:** Ver o conteúdo de um arquivo a partir da primeira linha.
- **tac file1:** Ver o conteúdo de um arquivo a partir da última linha.
- **more file1:** Veja o conteúdo ao longo de um arquivo.
- **less file1:** semelhantes para o comando ‘mais’ mas permite que você salve o arquivo, bem como o movimento para trás.
- **head -2 file1:** Veja as duas primeiras linhas de um arquivo.
- **tail -2 file1:** Ver as duas últimas linhas de um arquivo.
- **tail -f /var/log/messages:** Ver em tempo real o que foi adicionado ao arquivo.

### **Manipulação de texto**
- **cat file1 file2 .. | command <> file1\_in.txt\_or\_file1\_out.txt:** sintaxe geral para a manipulação de texto usando o tubo, STDIN e STDOUT.
- **cat file1 | command( sed, grep, awk, grep, etc…) > result.txt:** sintaxe geral para manipular um texto de um arquivo e escrever os resultados para um novo arquivo.
- **cat file1 | command( sed, grep, awk, grep, etc…) » result.txt:** sintaxe geral para manipular um texto de um arquivo e adicionar o resultado em um arquivo existente.
- **grep Aug /var/log/messages:** Procure as palavras “Ago” no arquivo ‘/ var/log/messages’.
- **grep ^Aug /var/log/messages:** procurar palavras que começam com “Agosto” no arquivo ‘/ var/log/messages’
- **grep [0-9] /var/log/messages:** Selecione todas as linhas no arquivo ‘/ var/log/messages’ que contêm números.
- **grep Aug -R /var/log/\*:** encontrar a seqüência de caracteres “Ago” no diretório ‘ / var/log ‘ e abaixo.
- **sed ‘s/stringa1/stringa2/g’ example.txt:** Realocando “string1” com “string2” em Sample. txt
- **sed ‘/^$/d’ example.txt:** remover todas as linhas em branco do sample. txt
- **sed ‘/ \*#/d; /^$/d’ example.txt:** excluir comentários e linhas em branco de Sample. txt
- **echo ‘esempio’ | tr ‘[:** baixa
- **sed -e ‘1d’ result.txt:** elimina a primeira linha do arquivo Sample. txt
- **sed -n ‘/stringa1/p’:** exibir somente as linhas que contêm a palavra “string1”.

### **Estabelecer o formato de conversão de arquivos**
- **dos2unix filedos.txt fileunix.txt:** Converta um formato de arquivo de texto do MSDOS para UNIX.
- **unix2dos fileunix.txt filedos.txt:** Converta um formato de arquivo de texto do UNIX para MSDOS.
- **recode ..HTML < page.txt > page.html:** Converta um arquivo de texto para html.
- **recode -l | more:** Mostre todas as conversões de formato disponíveis.

### **Análise de sistema de arquivos**
- **badblocks -v /dev/hda1:** Verifica os blocos defeituosos no disco hda1.
- **fsck /dev/hda1:** reparar / verificar a integridade do arquivo do sistema Linux no disco hda1.
- **ext2 /dev/hda1:** reparação / verificar a integridade do sistema de arquivo ext2 no disco hda1.
- **e2fsck /dev/hda1:** reparação / verificar a integridade do sistema de arquivo ext2 no disco hda1.
- **e2fsck -j /dev/hda1:** reparação / verificar a integridade do sistema de arquivo ext3 no disco hda1.
- **ext3 /dev/hda1:** reparação / verificar a integridade do sistema de arquivo ext3 no disco hda1.
- **vfat /dev/hda1:** reparação / verificar integridade do arquivo sistema disco fat hda1.
- **msdos /dev/hda1:** reparar / verificar a integridade de um arquivo a partir do dos sistema disco hda1.
- **dosfsck /dev/hda1:** reparar / verificar a integridade de um arquivo a partir do dos sistema disco hda1.

### Formatar sistema de arquivos
- **mkfs /dev/hda1:** Verifica os blocos defeituosos no disco hda1.
- **mke2fs /dev/hda1:** reparar / verificar a integridade do arquivo do sistema Linux no disco hda1.
- **mke2fs -j /dev/hda1:** reparação / verificar a integridade do sistema de arquivo ext2 no disco hda1.
- **mkfs -t vfat 32 -F /dev/hda1:** reparação / verificar a integridade do sistema de arquivo ext2 no disco hda1.
- **fdformat -n /dev/fd0:** reparação / verificar a integridade do sistema de arquivo ext3 no disco hda1.
- **mkswap /dev/hda3:** reparação / verificar a integridade do sistema de arquivo ext3 no disco hda1.

### **Backups**
- **dump -0aj -f /tmp/home0.bak /home:** Fazer um completo salvar do directório ‘/Home’.
- **dump -1aj -f /tmp/home0.bak /home:** Fazer um Backup incremental do diretório ‘ /home’.
- **restore -if /tmp/home0.bak:** Restaurando um save interativamente.
- **rsync -rogpav –delete /home /tmp:** Sincronização entre diretórios.
- **rsync -rogpav -e ssh –delete /home ip\_address:** rsync através do túnel SSH.
- **rsync -az -e ssh –delete ip\_addr:** Sincronizar um diretório local com um diretório remoto via ssh e compressão.
- **rsync -az -e ssh –delete /home/local ip\_addr:** sincronizar um diretório remoto em um diretório local através de ssh e compressão.
- **dd bs=1M if=/dev/hda | gzip | ssh** **user@ip\_addr ‘dd of=hda.gz’:** fazer um salvamento em um disco rígido em um host remoto através de ssh.
- **dd if=/dev/sda of=/tmp/file1:** Salve o conteúdo de um disco rígido para um arquivo. (Neste caso o disco rígido é “sda” e o arquivo “file1”).
- **tar -Puf backup.tar /home/user:** Salvar os diretórios/etc e a raiz (excluindo o conteúdo do subdiretório/root/dir1 /) em um arquivo compactado, cujo nome inclui a data e hora atual.
- **( cd /tmp/local/ && tar c . ) | ssh -C** **user@ip\_addr ‘cd /home/share/ && tar x -p’:** Copie o conteúdo de um diretório em um diretório remoto através de ssh.
- **( tar c /home ) | ssh -C** **user@ip\_addr ‘cd /home/backup-home && tar x -p’:** copiar um diretório local em um diretório remoto através de ssh.
- **tar cf – . | (cd /tmp/backup ; tar xf – ):** cópia local preservando licenças e links de um diretório para outro.
- **find /home/user1 -name ‘\*.txt’ | xargs cp -av –target-directory=/home/backup/ –parents:**encontrar e copiar todos os arquivos com extensão ‘. txt’ de um diretório para outro
- **find /var/log -name ‘\*.log’ | tar cv –files-from=- | bzip2 > log.tar.bz2:** encontrar todos os arquivos com extensão ‘. log’ e fazer um arquivo bzip.
- **dd if=/dev/hda of=/dev/fd0 bs=512 count=1:** Faça uma cópia do MRB (Master Boot Record) para um disquete.
- **dd if=/dev/fd0 of=/dev/hda bs=512 count=1:** Restaurar a cópia da (MBR Master Boot Record) gravada no disquete.

### **CD-ROM**
- **cdrecord -v gracetime=2 dev=/dev/cdrom -eject blank=fast -force:** limpar ou apagar um cd regravável.
- **mkisofs /dev/cdrom > cd.iso:** Crie uma imagem iso do CD-ROM no disco.
- **mkisofs /dev/cdrom | gzip > cd\_iso.gz:** Crie uma imagem iso compactada do CD-ROM no disco.
- **mkisofs -J -allow-leading-dots -R -V “Label CD” -iso-level 4 -o ./cd.iso data\_cd:** Crie uma imagem iso de um diretório.
- **cdrecord -v dev=/dev/cdrom cd.iso:** grave uma imagem iso.
- **gzip -dc cd\_iso.gz | cdrecord dev=/dev/cdrom –:** grave uma imagem iso comprimida.
- **mount -o loop cd.iso /mnt/iso:** Monte uma imagem iso.
- **cd-paranoia -B:** Tire músicas de um cd para arquivos wav.
- **cd-paranoia – ”-3”:** Pegue as 3 primeiras músicas de um cd para arquivos wav.
- **cdrecord –scanbus:** varredura de ônibus para identificar o canal
- **dd if=/dev/hdc | md5sum:** Execute um md5sum em um dispositivo, como um CD.

### **Redes (LAN e Wi-Fi)**
- **ifconfig eth0:** Mostre a configuração de uma placa de rede Ethernet.
- **ifup eth0:** Ative uma interface ‘eth0’.
- **ifdown eth0:** Desabilite uma interface ‘eth0’.
- **ifconfig eth0 192.168.1.1 netmask 255.255.255.0:** Configure um endereço IP.
- **ifconfig eth0 promisc:** Configure ‘eth0’ modo comum para obter pacotes (sniffing).
- **dhclient eth0:** Ative a interface ‘eth0’ em modo dhcp.
- **route -n:** Mostre tabela de rota.
- **route add -net 0/0 gw IP\_Gateway:** Configure a entrada padrão.
- **route add -net 192.168.0.0 netmask 255.255.0.0 gw 192.168.1.1:** Configure uma rota estática para encontrar a rede, ‘192.168.0.0/16’.
- **route del 0/0 gw IP\_gateway:** Remova a rota estática.
- **echo “1” > /proc/sys/net/ipv4/ip\_forward:** Ative o ip de rota.
- **hostname:** Exiba o nome do host do sistema.
- **host** **example.com:** Encontre o nome do host para resolver o nome de um IP (1).
- **nslookup** **example.com:** Encontre o nome do host para resolver o nome de um ip e vice-versa (2).
- **ip link show:** Mostra o status de todas as interfaces.
- **mii-tool eth0:** Mostar o status de ‘eth0’ link.
- **ethtool eth0:** Exiba estatísticas da placa de rede ‘eth0’.
- **netstat -tup:** Mostre todas as conexões de rede ativa e seu PID.
- **netstat -tupl:** Mostre todos os ouvinte de rede de serviços sobre o sistema e seu PID.
- **tcpdump tcp port 80:** Mostre todo o tráfego HTTP.
- **iwlist scan:** Mostre as redes sem fio.
- **iwconfig eth1:** Mostre a configuração de uma placa de rede sem fio.
- **whois** **example.com:** Pesquisa Base de dados Whois .

### **Redes Microsoft Windows (SAMBA)**
- **nbtscan ip\_addr:** resolução de nome de rede do BIOS.
- **nmblookup -A ip\_addr:** resolução de nome de rede do BIOS.
- **smbclient -L ip\_addr/hostname:** Visualizar compartilhamentos remotos de um host windows.

### **Firewall (iptables)**
- **iptables -t filter -L:** Mostre todas as correntes na tabela de filtro.
- **iptables -t nat -L:** Mostre todas as correntes da tabela nat.
- **iptables -t filter -F:** Limpe todas as regras da tabela de filtro.
- **iptables -t nat -F:** Limpe todas as regras da tabela nat.
- **iptables -t filter -X:** exclua qualquer cadeia criados pelo usuário.
- **iptables -t filter -A INPUT -p tcp –dport telnet -j ACCEPT:** permita conexões telnet de entrar.
- **iptables -t filter -A OUTPUT -p tcp –dport http -j DROP:** bloquear conexões HTTP de saída.
- **iptables -t filter -A FORWARD -p tcp –dport pop3 -j ACCEPT:** permitindo conexões POP para uma cadeia de frente.
- **iptables -t filter -A INPUT -j LOG –log-prefix “DROP INPUT”:** registrando uma sequência de entrada.
- **iptables -t nat -A POSTROUTING -o eth0 -j MASQUERADE:** Configure uma PAT (conversão de endereços de porta) na eth0, escondendo os pacotes de saída de coação.
- **iptables -t nat -A PREROUTING -d 192.168.0.1 -p tcp -m tcp –dport 22 -j DNAT –to-destination 10.0.0.2**

### **Monitoramento e depuração**
- **top:** Exiba tarefas linux usando mais cpu.
- **ps -eafw:** Exibe as tarefas do Linux.
- **ps -e -o pid,args –forest:** Exibe as tarefas do Linux de forma hierárquica.
- **pstree:** Mostre uma árvore de processos do sistema.
- **kill -9 ID\_Processo:** forçar o encerramento de um processo e terminá-lo.
- **kill -1 ID\_Processo:** força um processo para recarregar a configuração.
- **lsof -p $$:** Exiba uma lista de arquivos abertos por processos.
- **lsof /home/user1:** Exibe uma lista de arquivos abertos em um determinado caminho do sistema.
- **strace -c ls >/dev/null:** Mostre o sistema de chamadas feitas e recebidas por um processo.
- **strace -f -e open ls >/dev/null:** Visualizar chamadas para a biblioteca.
- **watch -n1 ‘cat /proc/interrupts’:** Mostre interrupções em tempo real.
- **last reboot:** Reinicialização de história do programa.
- **lsmod:** Exiba o kernel carregado.
- **free -m:** Exibe o status da RAM em megabytes.
- **smartctl -A /dev/hda:** Monitore a confiabilidade de um disco rígido através do SMART.
- **smartctl -i /dev/hda:** Verifique se o SMART está habilitado em um disco rígido.
- **tail /var/log/dmesg:** Mostre os eventos inerentes no processo de carregar o kernel.
- **tail /var/log/messages:** Mostre eventos de sistema.

## **Dicas e Comandos úteis**
- **apropos …keyword:** exibir uma lista de comandos que pertencem às palavras-chave de um programa; Eles são úteis quando você sabe o que faz o seu programa, mas sconoces o nome do comando.
- **man ping:** exibir as páginas de manual on-line; por exemplo, um comando ping, use a opção ‘-k’ para encontrar qualquer comandos relacionados.
- **whatis …keyword:** Exibe a descrição do que o programa faz.
- **mkbootdisk –device /dev/fd0 uname -r:** Crie um disquete boteable.
- **gpg -c file1:** codifica um arquivo com o guarda de segurança do GNU.
- **gpg file1.gpg:** decodificar um arquivo com o guarda de segurança do GNInformações do sistema LinuxU.
- **wget -r** **example.com:** Baixe um site inteiro.
- **wget -c** **example.com/file.iso:** Baixe um arquivo com a possibilidade de parar o download e retomar mais tarde.
- **echo ‘wget -c** **example.com/files.iso‘ | at 09:** 00
- **ldd /usr/bin/ssh:** Mostrar compartilhada bibliotecas exigirem pelo ssh programa.
- **alias hh=’history’:** Coloque um alias para um comando – hh = história.
- **chsh:** Mude o Shell de comando.
- **chsh –list-shells:** É um comando adequado para descobrir se você tem controle remoto em outro terminal.
- **clear:** Limpa a tela do terminal.
- **umcomando > archivodesaida.txt 2>&1:** executa um comando e redirecionar saída para um arquivo, combinando neste ambos STDOUT e STDERR.
- **umcomando | archivodesaida.txt 2> archivodeerros.txt:** Executar um comando, você redirecionar a saída (STDOUT) para um arquivo e os erros (STDERR) para outro.
- **umcomando | tee arquivodesaida.txt:** executa um comando, exibe a saída na tela e, simultaneamente, grava-lo em um arquivo.

