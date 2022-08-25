#include<stdlib.h>
#include<stdio.h>
#define TS 50
#define N 5

typedef struct
{
    int min;
    int seg;

} Duracao;

typedef struct
{
    char nome[TS];
    char album[TS];
    char artista[TS];    
    char estilo[TS];
    Duracao tempo;
} Musica;

Musica _Playlist[N];
int _numMusica = 0;


void menu(); // imprime menu.
void op_menu(int opcao);//dispara opcoes do menu
void erro_mensagem(int codgoErro);// mensagem de erro.
int inclusao();// inclui musica
Musica cria_Musica(); // cria Musica
void imp_musica(Musica m); //Imprime dados da musica.
int validaDuracao(int min, int seg); //valida Tempo da Musica
int listaPlayList(); //Lista Todas as Musicas
void alterarFaixa(int faixa);//altera musica
int alterar();//altera dados da faixa
int excluir(); // Exclui Musica
void excluir_faixa(int faixa);//exclui Faixa
void reorganizarPlaylist(int faixa);//Reorganiza Playlist

int main(int argc, char const *argv[]){

    int op = 1;
    while (op !=5)
    {
        menu();
        scanf("%d", &op);
        fflush(stdin);
        op_menu(op);
        

    }
    
    
    return 0;
}
void menu(){
    system("cls");
    printf("********************************\n");
    printf("-(1)Incluir Musica\n");
    printf("-(2)ExcluirMusica\n");
    printf("-(3)Alterar Musica\n");
    printf("-(4)Listar todas as Musicas\n");
    printf("-(5)Sair\n");
    printf("********************************\n\n");
    
    printf("**** Digite a opcao: ****");

}
void op_menu(int opcao){
    
    int erro;

        if(opcao < 1 || opcao > 5){
        erro_mensagem(0);  // erro de opcao invalida.     
    }else if(opcao < 5)
    {
        if(opcao == 1){
            erro = inclusao();
        }else if(opcao==2){
            erro = excluir();
        }else if(opcao==3){
            erro = alterar();
        }else if(opcao ==4){
            erro = listaPlayList();
        }
    }

    if(erro <= 0){
        erro_mensagem(erro);
    }

    

}
void erro_mensagem(int codigoErro){
    switch (codigoErro)
    {
    case 0: printf("Opcao invalida.\n"); break;
    case -1: printf("Lista de musicas cheia.\n"); break;
    case -2: printf("Lista de musicas Vazia.\n"); break;
    case -5: printf("Digite minuto corretamente.\n"); break;
    case -6: printf("Digite segundo corretamente.\n"); break;
    case -7: printf("Digite minuto e segundo corretamente.\n"); break;
    case -8: printf("Digite digite a faixa entre as opcoes listadas.\n"); break;
    
    default: printf("Opcao invalida.\n"); break;
    }
    system("PAUSE");
}
int inclusao(){
    if(_numMusica >= N){
        return -1;
    }

    _Playlist[_numMusica] = cria_Musica();
    imp_musica(_Playlist[_numMusica]);
    //system("pause");
    _numMusica++;

    return 1;
}

Musica cria_Musica(){
    
    Musica m;
    int erro = -1;

    //fflush(stdin);

    printf("Nome da Musica: ");
    gets(m.nome);
    fflush(stdin);

    printf("Album: ");
    gets(m.album);
    fflush(stdin);
    
    printf("Artista: ");
    gets(m.artista);
    fflush(stdin);
    
    printf("Estilo: ");
    gets(m.estilo);
    fflush(stdin);


    while (erro < 0)
    {
        printf("duracao (MM SS)");
        scanf("%d%d", &m.tempo.min, &m.tempo.seg);
        fflush(stdin);
        erro = validaDuracao(m.tempo.min, m.tempo.seg);
        if(erro < 0){
            erro_mensagem(erro);
            continue;
        }

    }
    

    

    return m;
}
void imp_musica(Musica m){

    printf("- Musica: %s\n", m.nome);
    printf("- Album: %s\n", m.album);
    printf("- Artista: %s\n", m.artista);
    printf("- Estilo: %s\n", m.estilo);
    printf("- Tempo: (MM:SS): %d:%d\n", m.tempo.min, m.tempo.seg);

}
int validaDuracao(int min, int seg){
    if(min < 0){
        return -5;
    }else if (seg >= 60 || seg < 0){
        return -6;
    }else if(seg==0 && min == 0 ){
        return -7;
    }else{
        return 1;
    }
}
int listaPlayList(){
    int i;
    if(_numMusica <=0){
        return -2;
    }
    system("cls");
    for (i = 0; i < _numMusica; i++)
    {
        printf("*** Faixa [%d]  ***\n", i+1);
        imp_musica(_Playlist[i]);
    }
    system("pause");    
    return 1;
}
int alterar(){
    
    int faixa =-1;

    if(_numMusica==0){
        return -2;
    }
    while (faixa < 0 || faixa > _numMusica)
    {
        listaPlayList();
        printf("Digite a faixa que deseja alterar [%d - %d]: ", 1, _numMusica);
        scanf("%d", &faixa);
        fflush(stdin);
        faixa--;

        if(faixa < 1 || faixa > _numMusica){
            erro_mensagem(-8);// Faixa inexistente.
        }else{
            
            alterarFaixa(faixa);// altera a faixa selecionada.
        }
    }
    system("cls");
    imp_musica(_Playlist[faixa]);
    system("pause");    
}
void alterarFaixa(int faixa){
    
    int erro = -1;

    //fflush(stdin);

    printf("Nome da Musica: ");
    gets(_Playlist[faixa].nome);
    fflush(stdin);

    printf("Album: ");
    gets(_Playlist[faixa].album);
    fflush(stdin);
    
    printf("Artista: ");
    gets(_Playlist[faixa].artista);
    fflush(stdin);
    
    printf("Estilo: ");
    gets(_Playlist[faixa].estilo);
    fflush(stdin);


    while (erro < 0)
    {
        printf("duracao (MM SS)");
        scanf("%d%d", &_Playlist[faixa].tempo.min, &_Playlist[faixa].tempo.seg);
        fflush(stdin);
        erro = validaDuracao(_Playlist[faixa].tempo.min, _Playlist[faixa].tempo.seg);
        if(erro < 0){
            erro_mensagem(erro);
            continue;
        }

    }
    

}
int excluir(){
        
    int faixa =-1;

    if(_numMusica==0){
        return -2;
    }

    while (faixa < 0 || faixa > _numMusica)
    {
        listaPlayList();
        printf("Digite a faixa que deseja excluir [%d - %d]: ", 1, _numMusica);
        scanf("%d", &faixa);
        faixa--;
        printf("faixa ->%d", faixa);
        system("pause");
        fflush(stdin);
        

        if(faixa < 0 || faixa > _numMusica){
            erro_mensagem(-8);// Faixa inexistente.
        }else{
            void excluir_faixa(int faixa);// exclui a faixa selecionada.
        }
    }
    

    system("cls");
    printf("Exclusao Bem Sucedida\n");
    printf("\n%d\n", _numMusica); // teste para exclusao
    system("pause");
    return 1;
}
void excluir_faixa(int faixa){
    if(_numMusica == 1){
        _numMusica = 0;
        printf("\n1 musica.");
                printf("\nEntrou aqui");
            system("pause");
    }else if(_numMusica-1 == faixa){
        _numMusica--;
        printf("\nultima musica.");
    }else{
        printf("\nQualquer musica.");
        void reorganizarPlaylist(int faixa);
    }
  
}
void reorganizarPlaylist(int faixa){
    int i;

    for(i=faixa; i <_numMusica - 1 ;i++ ){
        _Playlist[i] = _Playlist[i+1];
    }
    _numMusica--;
}