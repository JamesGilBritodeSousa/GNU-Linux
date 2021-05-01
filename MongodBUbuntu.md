{
  "nbformat": 4,
  "nbformat_minor": 0,
  "metadata": {
    "colab": {
      "name": "MongodBUbuntu.ipynb",
      "provenance": [],
      "collapsed_sections": [],
      "authorship_tag": "ABX9TyP7bsImbFpIcp6Rzs7x6i1/",
      "include_colab_link": true
    },
    "kernelspec": {
      "name": "python3",
      "display_name": "Python 3"
    },
    "language_info": {
      "name": "python"
    }
  },
  "cells": [
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "view-in-github",
        "colab_type": "text"
      },
      "source": [
        "<a href=\"https://colab.research.google.com/github/JamesGilBritodeSousa/Linux/blob/main/MongodBUbuntu.ipynb\" target=\"_parent\"><img src=\"https://colab.research.google.com/assets/colab-badge.svg\" alt=\"Open In Colab\"/></a>"
      ]
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "kCI6PlrtAO74"
      },
      "source": [
        "# **Como instalar o MongoDB no Ubuntu 20.04**\n",
        "\n",
        "Uma versão anterior deste tutorial foi escrita por Melissa Anderson e Mark Drake\n",
        "Published on September 11, 2020 7.1\n",
        "\n",
        "### Introdução\n",
        "O MongoDB, também conhecido como Mongo, é um banco de dados de documentos de código aberto usado em muitas aplicações Web modernas. Ele é classificado como um banco de dados NoSQL porque ele não depende de uma estrutura de banco de dados relacional tradicional baseada em tabelas.\n",
        "\n",
        "Em vez disso, ele usa documentos do tipo JSON com esquemas dinâmicos, o que significa que, ao contrário de bancos de dados relacionais, o MongoDB não requer um esquema predefinido antes de adicionar dados a um banco de dados. Você pode alterar o esquema a qualquer momento e tantas vezes quanto for necessário sem precisar configurar um banco de dados novo com um esquema atualizado.\n",
        "\n",
        "Neste tutorial, você instalará o MongoDB em um servidor Ubuntu 20.04, irá testá-lo e aprender como gerenciá-lo como um serviço systemd.\n",
        "\n",
        "### Pré-requisitos\n",
        "Para seguir este tutorial, será necessário:\n",
        "Um servidor Ubuntu 20.04. Cada servidor deverá ter um usuário administrativo não root e um firewall configurado com o UFW.\n"
      ]
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "KjMspJzqBCvH"
      },
      "source": [
        "## Passo 1 — Como instalar o MongoDB\n",
        "Os repositórios de pacotes oficiais do Ubuntu incluem uma versão estável do MongoDB. No entanto, no momento da escrita deste artigo, a versão do MongoDB disponível a partir dos repositórios padrão do Ubuntu é a 3.6, enquanto a versão estável mais recente é a 4.4.\n",
        "\n",
        "Para obter a versão mais recente deste software, você deve incluir o repositório de pacotes dedicado do MongoDB nas suas fontes APT. Assim, você será capaz de instalar o mongodb-org, um meta-pacote que sempre aponta para a versão mais recente do MongoDB.\n",
        "\n",
        "Para começar, importe a chave GPG pública para a versão estável mais recente do MongoDB. Você pode encontrar o arquivo de chave apropriado, navegando até o servidor de chaves do MongoDB e encontrando o arquivo que inclui o número de versão estável mais recente e que termina em .asc. Por exemplo, se você quiser instalar a versão 4.4 do MongoDB, você procuraria por um arquivo chamado server-4.4.asc.\n",
        "\n",
        "Clique com o botão direito no arquivo, e selecione Copy link address. Em seguida, cole esse link no comando curl a seguir, substituindo a URL destacada:"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "colab": {
          "base_uri": "https://localhost:8080/"
        },
        "id": "fWWuPhL_BCWJ",
        "outputId": "b30057ac-9e3d-4939-e52e-9bbcab36fee4"
      },
      "source": [
        "!curl -fsSL https://www.mongodb.org/static/pgp/server-4.4.asc | sudo apt-key add -\n"
      ],
      "execution_count": null,
      "outputs": [
        {
          "output_type": "stream",
          "text": [
            "OK\n"
          ],
          "name": "stdout"
        }
      ]
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "alLz3m_rBagd"
      },
      "source": [
        "O cURL é uma ferramenta de linha de comando disponível em muitos sistemas operacionais, usada para transferir dados. Ele lê todos os dados armazenados na URL passada a ele e imprime o conteúdo na saída do sistema. No exemplo a seguir, o cURL imprime o conteúdo do arquivo de chave GPG e então faz um pipe para o seguinte comando sudo apt-key add -, adicionando assim a chave GPG à sua lista de chaves confiáveis.\n",
        "\n",
        "Além disso, note que este comando curl usa as opções -fsSL que, juntas, essencialmente dizem ao cURL para falhar silenciosamente. Isso significa que, se por alguma razão o cURL não for capaz de entrar em contato com o servidor GPG ou o servidor GPG estiver fora do ar, ele não adicionará acidentalmente o código de erro resultante à sua lista de chaves confiáveis.\n",
        "\n",
        "Este comando retornará OK se a chave for adicionada com sucesso:\n",
        "\n",
        "Output\n",
        "OK\n",
        "\n",
        "Se quiser verificar se a chave foi adicionada corretamente, você pode fazer isso com o seguinte comando:\n"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "MHoCyODkBhD9"
      },
      "source": [
        "!apt-key list\n",
        "\n",
        "'''Isso irá retornar a chave do MongoDB em algum lugar na saída:\n",
        "\n",
        "Output\n",
        "/etc/apt/trusted.gpg\n",
        "--------------------\n",
        "pub   rsa4096 2019-05-28 [SC] [expires: 2024-05-26]\n",
        "      2069 1EEC 3521 6C63 CAF6  6CE1 6564 08E3 90CF B1F5\n",
        "uid           [ unknown] MongoDB 4.4 Release Signing Key <packaging@mongodb.com>\n",
        ". . .'''"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "ISJlr_MFBldk"
      },
      "source": [
        "Neste ponto, sua instalação APT ainda não encontrará o pacote mongodb-org que você precisa para instalar a versão mais recente do MongoDB.\n",
        "\n",
        "Há dois lugares no servidor onde o APT procura fontes online de pacotes para baixar e instalar: o arquivo sources.list e o diretório sources.list.d. O sources.list é um arquivo que lista fontes ativas de dados APT, com uma fonte por linha e as fontes mais preferidas listadas primeiro. O diretório sources.list.d permite que você adicione essas entradas sources.list como arquivos separados.\n",
        "\n",
        "Execute o comando a seguir, que cria um arquivo no diretório sources.list.d chamado mongodb-org-4.4.list. O único conteúdo neste arquivo é uma linha contendo deb [ arch=amd64,arm64 ] https://repo.mongodb.org/apt/ubuntu focal/mongodb-org/4.4 multiverse:"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "mqfzvlX8B3hx"
      },
      "source": [
        "\n",
        "!echo \"deb [ arch=amd64,arm64 ] https://repo.mongodb.org/apt/ubuntu focal/mongodb-org/4.4 multiverse\" | sudo tee /etc/apt/sources.list.d/mongodb-org-4.4.list"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "XlmYj7QFB6dT"
      },
      "source": [
        "Esta única linha diz ao APT tudo o que ele precisa saber sobre o que é a fonte e onde encontrá-la:\n",
        "\n",
        "deb: isso significa que a entrada da fonte faz referência a uma arquitetura Debian regular. Em outros casos, essa parte da linha \n",
        "\n",
        "*   List item\n",
        "*   List item\n",
        "\n",
        "pode aparecer como deb-src, o que significa que a entrada da fonte representa o código fonte da distribuição Debian.\n",
        "\n",
        "[ arch=amd64,arm64 ]: isso especifica para quais arquiteturas os dados APT devem ser baixados. Neste caso, ele especifica as arquiteturas amd64 e arm64.\n",
        "\n",
        "https://repo.mongodb.org/apt/ubuntu: este é um URI representando a localização onde os dados APT podem ser encontrados. Neste caso, o URI aponta para o endereço HTTPS onde o repositório oficial do MongoDB está localizado.\n",
        "\n",
        "focal/mongodb-org/4.4: os repositórios do Ubuntu podem conter várias versões diferentes. Isso especifica que você só quer a versão 4.4 do pacote mongodb-org disponível para a versão focal do Ubuntu (“Focal Fossa” sendo o codinome do Ubuntu 20.04).\n",
        "\n",
        "multiverse: essa parte aponta o APT para um dos quatro principais repositórios do Ubuntu. Neste caso, ele está apontando para o repositório multiverse."
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "g0SV362uCDzT"
      },
      "source": [
        "# Depois de executar este comando, atualize o índice local de pacotes do servidor para que o APT possa encontrar o pacote mongodb-org:\n",
        "!sudo apt update"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "OHHTxe0sCJ2D"
      },
      "source": [
        "# Depois disso, instale o MongoDB:\n",
        "!sudo apt install mongodb-org"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "St7-lkjsCJaB"
      },
      "source": [
        "Quando solicitado, pressione Y, e depois, ENTER para confirmar que deseja instalar o pacote:\n",
        "\n",
        "Quando o comando terminar, o MongoDB estará instalado em seu sistema. No entanto, ainda não será possível usá-lo. Em seguida, você iniciará o MongoDB e confirmará se ele está funcionando corretamente."
      ]
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "P3wEibDsCa9z"
      },
      "source": [
        "## Passo 2 — Iniciando o serviço do MongoDB e testando o banco de dados\n",
        "O processo de instalação descrito no passo anterior configura automaticamente o MongoDB para ser executado como um daemon controlado pelo systemd, o que significa que você pode gerenciar o MongoDB usando os vários comandos systemctl. No entanto, esse procedimento de instalação não inicia automaticamente o serviço.\n",
        "\n",
        "Execute o comando systemctl a seguir para iniciar o serviço MongoDB:"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "ZDHOEaTFChso"
      },
      "source": [
        "!sudo systemctl start mongod.service"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "cHK-f7MRCkrY"
      },
      "source": [
        "Em seguida, verifique o status do serviço. Observe que esse comando não inclui .service na definição do arquivo de serviço. O systemctl irá anexar esse sufixo a qualquer argumento que você passa automaticamente se ele ainda não estiver presente. Desse modo, não é necessário incluí-lo:\n"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "eybBit-dCl2W"
      },
      "source": [
        "!sudo systemctl status mongod\n",
        "\n",
        "'''Este comando retornará uma saída como a seguinte, indicando que o serviço está funcionando:\n",
        "\n",
        "Output\n",
        "● mongod.service - MongoDB Database Server\n",
        "     Loaded: loaded (/lib/systemd/system/mongod.service; disabled; vendor preset: enabled)\n",
        "     Active: active (running) since Tue 2020-06-09 12:57:06 UTC; 2s ago\n",
        "       Docs: https://docs.mongodb.org/manual\n",
        "   Main PID: 37128 (mongod)\n",
        "     Memory: 64.8M\n",
        "     CGroup: /system.slice/mongod.service\n",
        "             └─37128 /usr/bin/mongod --config /etc/mongod.conf'''"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "zV2uRnRNCqCR"
      },
      "source": [
        "Depois de confirmar que ele está funcionando como esperado, habilite o serviço MongoDB para iniciar durante a inicialização:"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "n76AKr20CumH"
      },
      "source": [
        "!sudo systemctl enable mongod"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "nsNhi5OjCv6W"
      },
      "source": [
        "Você pode verificar se o banco de dados está operacional conectando-se ao servidor de banco de dados e executando um comando de diagnóstico. O comando a seguir conectará você ao banco de dados e mostrará na saída a versão atual, endereço do servidor e a porta dele. Ele também retornará o resultado do comando interno do MongoDB connectionStatus:\n"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "nmxLohroCwrl"
      },
      "source": [
        "!mongo --eval 'db.runCommand({ connectionStatus: 1 })'\n",
        "\n",
        "'''connectionStatus verificará e retornará o status da conexão com o banco de dados. Um valor de 1 para o campo ok na resposta indica que o servidor está funcionando corretamente.\n",
        "\n",
        "Output\n",
        "MongoDB shell version v4.4.0\n",
        "connecting to: mongodb://127.0.0.1:27017/?compressors=disabled&gssapiServiceName=mongodb\n",
        "Implicit session: session { \"id\" : UUID(\"1dc7d67a-0af5-4394-b9c4-8a6db3ff7e64\") }\n",
        "MongoDB server version: 4.4.0\n",
        "{\n",
        "    \"authInfo\" : {\n",
        "        \"authenticatedUsers\" : [ ],\n",
        "        \"authenticatedUserRoles\" : [ ]\n",
        "    },\n",
        "    \"ok\" : 1\n",
        "}'''"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "Z82xdpvhC1xi"
      },
      "source": [
        "Além disso, note que o banco de dados é executado na porta 27017 em 127.0.0.1, o endereço de loopback local representando o localhost. Este é o número padrão da porta do MongoDB.\n",
        "\n",
        "Em seguida, analisaremos como gerenciar a instância do servidor MongoDB com o systemd."
      ]
    },
    {
      "cell_type": "markdown",
      "metadata": {
        "id": "x_9R9UFoC5L9"
      },
      "source": [
        "## Passo 3 — Como gerenciar o serviço MongoDB\n",
        "Como mencionado anteriormente, o processo de instalação descrito no Passo 1 configura o MongoDB para ser executado como um serviço systemd. Isso significa que você pode gerenciá-lo usando comandos padrão systemctl como faria com outros serviços do sistema Ubuntu.\n"
      ]
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "-X0QYgctDAXU"
      },
      "source": [
        "# Como mencionado anteriormente, o comando systemctl status verifica o status do serviço MongoDB:\n",
        "!sudo systemctl status mongod"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "y8IpvH7VFgp4"
      },
      "source": [
        "# Você pode parar o serviço a qualquer momento digitando:\n",
        "!sudo systemctl stop mongod"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "r-m9aRl7FkQT"
      },
      "source": [
        "# Para iniciar o serviço quando ele estiver parado, execute:\n",
        "!sudo systemctl start mongod"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "Fft0h3ANFmMy"
      },
      "source": [
        "# Você também pode reiniciar o servidor quando ele já estiver executando:\n",
        "!sudo systemctl restart mongod"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "ww25x6_sGGUW"
      },
      "source": [
        "# Se você quiser desativar essa inicialização automática, digite:\n",
        "!sudo systemctl disable mongod"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "1S894mwwGOno"
      },
      "source": [
        "# Em seguida, para habilitá-lo novamente durante a inicialização, execute o comando enable novamente:\n",
        "!sudo systemctl enable mongod"
      ],
      "execution_count": null,
      "outputs": []
    },
    {
      "cell_type": "code",
      "metadata": {
        "id": "vNwFb4YyDDJO"
      },
      "source": [
        "# Se necessário desativar o firewall:\n",
        "!sudo ufw disable\n",
        "\n",
        "!sudo ufw status"
      ],
      "execution_count": null,
      "outputs": []
    }
  ]
}