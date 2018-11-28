#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


main ()
{

  int opcao=0;
  int opcao1=0, opcao2=0, questao=0, pontuacao=0, Pontuacao;
  char resposta;

  while (opcao!=9)
  {
         system("cls");
         printf("\n1- Como surgiu a banda");
         printf("\n2- O porque do nome Metallica");
         printf("\n3- Albuns e datas de lancamentos");
         printf("\n4- Membros");
         printf("\n5- Top 10 musicas mais tocadas");
         printf("\n6- Premios ja conquistados pela banda");
         printf("\n7- Turnes mundiais");
         printf("\n8- Quiz sobre a banda");
         printf("\n9-sair");
         printf("\n\n- Saiba mais sobre a banda Metallica, escolha uma opcao:");
         scanf("%d",&opcao);

         switch(opcao)
        {
             case 1:
             {
                   printf("\n O Metallica foi formado em Los Angeles, California, no fim de 1981 quando o baterista Lars Ulrich colocou um anuncio num jornal de Los Angeles que dizia Baterista a procura de outros musicos de metal para jamcom Tygers of Pan Tang, Diamond Head e Iron Maiden. Os guitarristas James Hetfield e Hugh Tanner de Leather Charm responderam ao anuncio. Embora ele nao tivesse formado uma banda, Ulrich perguntou para o fundador da Metal Blade Records Brian Slagel se ele podia gravar uma cancao para a proxima compilacao da gravadora intitulada Metal Massacre. Slagel aceitou e Ulrich recrutou Hetfield para cantar e tocar baixo em 1981.");
                   getch();
                   break;
             }
            case 2:
            {

                   printf ("\n Em entrevista a NPR, o baterista Lars Ulrich explicou como tudo se deu. Aconteceu na primavera de 1981, quando Ulrich foi para Sao Francisco, onde conheceu umas pessoas locais.\n\n Uma dessas pessoas, Ron Quintana, eh importante para a historia. Ele comentou com Ulrich sobre o interesse que tinha em criar sua propria fanzine (uma especie de revista nao oficial produzida por fas que objetivam apenas compartilhar seus gostos e interesses). Lars explicou que ele tinha uma duvida:\n\n Ele me perguntou se deveria chamar a publicacao de Metallica ou de Metal Mania. Entao eu sugeri que chamasse de Metal Mania.\n\n Mas e Ron?\n\n Ok, dito isso, entende-se que Lars roubou o nome para sua banda. Baseado nisso, a Metal Core Fanzine questionou Ron, que tambem trabalha como DJ, sobre o que achava da situacao toda. Sera ele guarda rancor do baterista pelo o que aconteceu ha 30 anos?\n\n Ele respondeu:\n\n Fiquei feliz por dar o nome para ele. Eu era maniaco por metal, e por isso mantive o nome Metal Mania. Inclusive, eu nomeei a fanzine antes mesmo de ele ter usado o nome Metallica. Isso justamente pelo fato de que não queria usar aquele nome.");
                   getch();
                   break;
             }

           case 3:
             {

                   printf ("\n Albuns:\n\n\tHardwired... to Self-Destruct\n\tGravadora: Blackened recordings\n\tLancamento: 2016\n\n\tThrough The Never\n\tGravadora: Blackened Recordings\n\tLancamento: 2013\n\n\tFreeze 'Em All\n\tGravadora: Blackened Recordings\n\tLancamento: 2013\n\n\tBeyond Magnetic (EP)\n\tGravadora: Warner Music\n\tLancamento: 2011\n\n\tDevil's Dance\n\tGravadora: Radar Records\n\tLancamento: 2008\n\n\tDeath Magnetic\n\tGravadora: Warner Bros. \n\tLancamento: 2008\n\n\tThe Unnamed Feeling\n\tGravadora: Vertigo Records\n\tLancamento: 2004\n\n\tSome Kind Of Monster (EP) \n\tGravadora: Warner Music\n\tLancamento: 2004\n\n\tSt. Anger\n\tGravadora: Elektra Records\n\tLancamento: 2003\n\n\tBlack Album\n\tGravadora: Ejas\n\tLancamento: 2002\n\n\tGarage Inc. \n\tGravadora: Elektra Records\n\tLancamento: 1998\n\n\tThe Memory Remains\n\tGravadora: Elektra Records / Vertigo Records / Sony Music\n\tLancamento: 1997\n\n\tFuel\n\tGravadora: Elektra Records / Vertigo Records / Sony Music \n\tLancamento: 1997\n\n\tLoad\n\tGravadora: Elektra Records \n\tLancamento: 1996\n\n\tMetallica\n\tGravadora: Elektra Records\n\tLancamento: 1991\n\n\t...And Justice for All\n\tGravadora: Elektra Records \n\tLancamento: 1988\n\n\tMaster of Puppets\n\tGravadora: Elektra Records\n\tLancamento: 1986\n\n\tRide The Lightning\n\tGravadora: Elektra Records\n\tLancamento: 1984\n\n\tCreeping Death\n\tGravadora: Music For Nations\n\tLancamento: 1984\n\n\tKill 'Em All\n\tGravadora: Megaforce Records\n\tLancamento: 1983\n\n\tJump In The Fire\n\tGravadora: Music For Nations \n\tLancamento: 1983\n\n\tMetal Up Your Ass\n\tGravadora: Auto-Production\n\tLancamento: 1982\n\n Albuns com participacoes:\n\n\tLulu - Metallica & Lou Reed\n\tGravadora: Universal Music \n\tLancamento: 2011\n\n Albuns de melhores hits:\n\n\tGreatest Hits (part Il) \n\tGravadora: Vertigo Records\n\tLancamento: 2008)\n\n\tGreatest Hits (part I) \n\tGravadora: Vertigo Records \n\tLancamento: 2008\n\n Albuns ao vivo:\n\n\tS&M (Live) \n\tGravadora: Elektra Records\n\tLancamento: 1999\n\n\tLive Shit : Binge And Purge\n\tGravadora: Vertigo Records\n\tLancamento: 1993\n\n\t");
                   getch();
                   break;
             }
           case 4:
           {

                   printf ("\nMembros atuais:\n\n\t James Hetfield\n\t Guitarra e Voz - Desde 1981\n\n\t Lars Ulrich\n\t Bateria - Desde 1981\n\n\t Kirk Hammett\n\t Guitarra solo - Desde 1983\n\n\t Robert Trujillo\n\t Baixista - Desde 2003\n\nEx-membros:\n\n\t Dave Mustaine\n\t Baixista - De 1982 a 1983\n\n\t Cliff Burton\n\t Baixista - De 1982 a 1986\n\n\t Jason Newsted\n\t Baixista - De 1986 a 2001\n\n\t Ron McGovney\n\t Baixista - De 1982 a 1982\n\n\t Bob Rock\n\t Guitarra solo - De 2001 a 2003\n");
                   getch();
                   break;
            }
            case 5:
           {

                   printf ("\nTOP 10:\n\n\t1- One\n\tAlbum: ...And Justice for All - 1988\n\n\t2- Master of Puppets\n\tAlbum: Master of Puppets - 1986\n\n\t3- Enter Sandman\n\tAlbum: Metallica - 1991\n\n\t4- Fade to Black\n\tAlbum: Ride the Lightning - 1984\n\n\t5- Battery\n\tAlbum:  Master of Puppets - 1986\n\n\t6- Seek and Destroy\n\tAlbum: Metal Up Your Ass - 1982\n\n\t7- Fuel\n\tAlbum: Fuel - 1997\n\n\t8- Creeping Death\n\tAlbum: Ride the Lightning - 1984\n\n\t9- The Unforgiven\n\tAlbum: Metallica - 1991\n\n\t10- Nothing Else Matters\n\tAlbum: Metallica - 1991\n");
                   getch();
                   break;
            }
            case 6:
           {

                   printf ("\nAmerican Music Awards:\n\n\t1993 - Artista Favorito de Heavy Metal/ Hard Rock\n\n\t1997 - Artista Favorito de Heavy Metal/ Hard Rock\n\nBillboard Music Awards:\n\n\t1997 - Artista do Ano de Rock and Roll\n\n\t1999 - Album de Catalogo do Ano\n\n\t1999 - Artista de Catalogo do ano\n\nGrammy Awards:\n\n\t1990 - (One) Melhor Performance de Metal\n\n\t1991 - (Stone Cold Crazy) Melhor Performance de Metal\n\n\t 1992 - (Metallica) Melhor Performance de Metal\n\n\t1999 - (Better Than You) Melhor Performance de Metal\n\n\t2000 - (Whiskey in The Jar) Melhor Performance de Hard Rock\n\n\t2001 - (The Call of Ktulu) Melhor Performance de Rock Instrumental\n\n\t2004 - (St. Anger) Melhor Performance de Metal\n\n\t2009 - (My Apocalypse) Melhor Performance de Rock Instrumental\n\n\t2009 - (Death Magnetic) Melhor Embalagem de Disco\n\nIndependent Spirit Awards:\n\n\t2005 - (Some kind of Monster) Melhor Documentario\n\nJuno Awards:\n\n\t t2005 - (Some kind of Monster) Jack Richardson Produtor do Ano\n\nKerrang! Awards:\n\n\t2003 - Melhor Banda Internacional\n\t 2003 - Melhor Banda do Planeta\n\n\t2007 - Melhor Banda do Planeta\n\n\t2008 - Melhor Banda do Planeta\n\n\t2008 - Premio Inspiracao\n\n\t2009 - (Death Magnetic) Melhor Album\n\n\t2011 - Melhor Banda do Planeta\n\n\t2012 - Melhor Banda do Planeta\n\nMTV Video Music Awards:\n\n\t1992 - (Enter Sandman) Melhor Video de Metal\n\n\t1996 - (Until it Sleeps) Melhor Video de Metal\n\nRadio Music Awards:\n\n\t2005 - Artista do ano/Ativo e Alternativo\n\n\t2005 - Artista do Ano/Rock\n\nTop In Rock Awards:\n\n\t 2008 Melhor Banda de Metal\n\n\t 2009 Melhor Banda de Metal\n");
                   getch();
                   break;
            }
            case 7:
           {

                   printf ("\nTurnes Mundiais:\n\n\tDamage, Inc. Tour (1986-1987)\n\n\tDamaged Justice (1988-1989)\n\n\tWherever We May Roam Tour (1991-1992)\n\n\tNowhere Else to Roam (1993)\n\n\tMadly in Anger with the World Tour (2003-2004)\n\n\tEscape from the Studio 06 e World Magnetic Tour (2008-2010)\n");
                   getch();
                   break;
            }
            case 8:

                       {
                    printf("\n1- Quantos anos o Metallica completara em 2018?\n");


                    printf("\n\na)30\n");
                    printf("b)32\n");
                    printf("c)34\n");
                    printf("d)35\n");
                    printf("e)37\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'e')||(resposta=='E')){

                     pontuacao=pontuacao + 1;

                      printf("\nAcertou! A banda foi formada em 1981\n\n");
                    }
                     else{
                     printf("\nErrou! A banda foi formada em 1981\n\n");
                     }

                     printf("\n2- Qual o integrante mais velho da banda?\n");


                    printf("\n\na)Kirk Hammet\n");
                    printf("b)James Hetfield\n");
                    printf("c)Lars Ulrich\n");
                    printf("d)Robert Trujjilo\n");
                    printf("e)Dave Mustaine\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'a')||(resposta=='A')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou! O integrante mais velho da banda eh Kirk Hammet com 56 anos\n\n");
                    }
                     else{
                     printf("\nErrou! O integrante mais velho da banda eh Kirk Hammet com 56 anos\n\n");
                     }

                    printf("\n3- Como foi que Cliff Burton morreu?\n");

                    printf("\n\na) Acidente de onibus\n");
                    printf("b)Suicidio\n");
                    printf("c)Assassinato\n");
                    printf("d)Envenenado\n");
                    printf("e)Nenhuma das alternativas\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'a')||(resposta=='A')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou! Cliff Burton morreu em 1986 em um acidente de onibus\n\n");
                    }
                     else{
                     printf("\nErrou! Cliff Burton morreu em 1986 em um acidente de onibus\n\n");
                     }

                     printf("\n4- Em que ano foi lancado o primeiro album do Metallica?\n");


                    printf("\n\na) 1980\n");
                    printf("b)1981\n");
                    printf("c)1982\n");
                    printf("d)1983\n");
                    printf("e)1984\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'd')||(resposta=='D')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou! O album Kill em All foi o primeiro lancado pela banda, no ano de 1983\n\n");
                    }
                     else{
                     printf("\nErrou! O album Kill em All foi o primeiro lancado pela banda, no ano de 1983\n\n");
                     }

                     printf("\n5- Em qual ano Metallica lancou seu quarto album?\n");


                    printf("\n\na) 1980\n");
                    printf("b)1985\n");
                    printf("c)1988\n");
                    printf("d)1990\n");
                    printf("e)Nenhuma das alternativas\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'c')||(resposta=='C')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou! ...And Justice For All, quarto album do Metallica, foi lancado em 1988\n\n");
                    }
                     else{
                     printf("\nErrou! ...And Justice For All, quarto album do Metallica, foi lancado em 1988\n\n");
                     }
                    printf("\n6- Qual musica do Metallica apresenta, logo ao inicio, som de batimentos cardiacos?\n");


                    printf("\n\na)The Unforgiven\n");
                    printf("b)That Was Just Your Life\n");
                    printf("c)My Apocalypse\n");
                    printf("d)Nothing else matters\n");
                    printf("e)Nenhuma das alternativas\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'b')||(resposta=='B')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou! \n\n");
                    }
                     else{
                     printf("\nErrou! That Was Just Your Life\n\n");
                     }

                     printf("\n7- Qual das seguintes musicas nao foi tocada durante o concerto Symphony & Metallica, em 1999?\n");


                    printf("\n\na)Of Wolf And Man\n");
                    printf("b)Master of Puppets\n");
                    printf("c)No Leaf Clover\n");
                    printf("d)Fade to Black\n");
                    printf("e)Nenhuma das alternativas\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'd')||(resposta=='D')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou!\n\n");
                    }
                     else{
                     printf("\nErrou! Fade to Black\n\n");
                     }

                     printf("\n8- Qual o nome do primeiro baixista do Metallica?\n");


                    printf("\n\na)Dave Mustaine\n");
                    printf("b)Zakk Wild\n");
                    printf("c)Ozzy Osbourne\n");
                    printf("d)Carlos Santana\n");
                    printf("e)Nenhuma das alternativas\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'a')||(resposta=='A')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou!\n\n");
                    }
                     else{
                     printf("\nErrou! Dave Mustaine \n\n");
                     }

                       printf("\n9- Em tributo a quem foi gravada a musica To live is to die?\n");


                    printf("\n\na)Dave Mustaine\n");
                    printf("b)Cliff Burton\n");
                    printf("c)Ozzy Osbourne\n");
                    printf("d)James Hetfield\n");
                    printf("e)Nenhuma das alternativas\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'b')||(resposta=='B')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou! Cliff Burton\n\n");
                    }
                     else{
                     printf("\nErrou! Cliff Burton \n\n");
                     }

                    printf("\n10- Antes de Kirk Hammet entrar na banda, qual era o nome de sua antiga banda?\n");


                    printf("\n\na)AC/DC\n");
                    printf("b)Iron Maiden\n");
                    printf("c)Exodus\n");
                    printf("d)Black Sabbath\n");
                    printf("e)Nenhuma das alternativas\n");

                    printf("\nA resposta eh: ");

                    scanf("%s", &resposta);


                     if ((resposta == 'c')||(resposta=='C')){

                      pontuacao=pontuacao + 1;

                      printf("\nAcertou! Exodus\n\n");
                    }
                     else{
                     printf("\nErrou! Exodus\n\n");
                     }



                     printf("\nSua pontuacao total eh: %d\n\n", pontuacao);
                     break;
                                }
        }


   system ("PAUSE");
}
}
