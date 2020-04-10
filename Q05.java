package app;

public class Q05 {
    public static No dados;
    public static void main(String[] args) throws Exception {
        Q05 listar = new Q05();
        listar.dados = new No("mensagem 1,");
        listar.dados.prox = new No("mensagem 1,");
        listar.dados.prox.prox = new No("mensagem 2,");
        listar.dados.prox.prox.prox = new No("mensagem 1,");
        listar.dados.prox.prox.prox.prox = new No("mensagem 3");

        System.out.println("Emails duplicados: \n");
        listar.mostarMsg(dados);

        listar.removerMsgDuplicada();
        System.out.println(""); 
        System.out.println("\nEmails apos a remocao de duplicados: \n");
        listar.mostarMsg(dados);
    }
    
    public static class No {
        String dado;
        No prox;
        No(String s){
            dado = s;
            prox = null;;
        }
    }

    void removerMsgDuplicada(){
        No ini = null, fim = null, copia = null;
        ini = dados;
        
        while(ini != null && ini.prox != null){
            fim = ini;
            while(fim.prox != null){
                if(ini.dado == fim.prox.dado){
                    copia = fim.prox;
                    fim.prox = copia.prox;          
                }else{
                    fim = fim.prox;
                }
            }
            ini = ini.prox;
        }
    }

    void mostarMsg(No no){
        while(no != null){
            System.out.print(no.dado + " ");
            no = no.prox;
        }
    }
}