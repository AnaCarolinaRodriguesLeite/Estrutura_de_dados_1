//sem a função main
    //aqui espicifica as variaveis que compoe a struct
    struct tipoFiliacao
    {
        char nomeFilho[80], nomeMae[80], nomePai[80];
    };
    //funcao dá start aqui
    struct tipoFiliacao separaLinhaCSV(char linha[240])
    {
        //variavel importante
        struct  tipoFiliacao gente;
        //entrada
        //para teste :scanf("%[^\n]",&linha);
        //processamento
        int j = 1, tam = 0; //j=44; quantidade da familia
        for (int i = 0; j <= 3 ; i++)
        {
            if(linha[i] == ',' || linha[i] == '\0' ){
                if(j == 1){
                    gente.nomeFilho[tam] = '\0'; //quando o nome chega no fim, é um alerta de que não tem mais nada e ai vem a vírgula
                }
                else if (j == 2){
                    gente.nomeMae[tam] = '\0';
                }
                else{
                    gente.nomePai[tam] = '\0';
                }
                tam = 0;
                j++;
            }
            else{
                if(j == 1){
                    gente.nomeFilho[tam] = linha[i]; //verificar se ta no fim ou nao
                }
                else if (j == 2){
                    gente.nomeMae[tam] = linha[i];
                }
                else{
                    gente.nomePai[tam] = linha[i];
                }
                tam++;
            }
        } 
      return gente;  
    };