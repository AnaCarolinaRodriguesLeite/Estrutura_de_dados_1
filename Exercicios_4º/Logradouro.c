//sem a função main
    //aqui espicifica as variaveis que compoe a struct
    struct tipoLogradouro{
        char tipo[80], nome[80], complemento[80];
    };
    //funcao dá start aqui
    void criaLinhaCSV( struct tipoLogradouro info , char linha[240]){
        //variavel importante
        struct  tipoLogradouro endereco;
        //entrada
        //para teste :scanf("%[^\n]",&linha);
        //processamento
        int j = 1, tam = 0; //j=44; quantidade da familia
        for (int i = 0; j <= 3 ; i++)
        {
            if(linha[i] == ';' || linha[i] == '\0' ){
                if(j == 1){
                    endereco.tipo[tam] = '\0'; //quando o nome chega no fim, é um alerta de que não tem mais nada e ai vem a vírgula
                }
                else if (j == 2){
                    endereco.nome[tam] = '\0';
                }
                else{
                    endereco.complemento[tam] = '\0';
                }
                tam = 0;
                j++;
            }
            else{
                if(j == 1){
                    endereco.tipo[tam] = linha[i]; //verificar se ta no fim ou nao
                }
                else if (j == 2){
                    endereco.nome[tam] = linha[i];
                }
                else{
                    endereco.complemento[tam] = linha[i];
                }
                tam++;
            }
        } 
      return endereco;  
    };