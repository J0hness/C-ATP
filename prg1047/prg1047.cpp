int main()
{                                                                      
    int hi, hf, mi, mf, tempo_hora, tempo_minuto;

    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);

    tempo_hora = hf - hi;
    tempo_minuto = mf - mi;

    if(tempo_minuto < 0)
    {
    	tempo_minuto += 60;
    	tempo_hora --;
    }
    if(tempo_hora < 0)
    	tempo_hora += 24;

    if(hi == hf && mi == mf)
    	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    else
    	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempo_hora, tempo_minuto);
    return 0;
}
