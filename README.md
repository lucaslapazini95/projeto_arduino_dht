# A proposta do projeto
O projeto foi uma proposta do IFFAR para que os alunos do 2º semestre da Ciência da Computação implementassem protótipos com placas controladoras afim de inferir digitalmente medidas analógicas e, através dessa medição, fazer constatações.
# Sobre o projeto
Sugeri a minha equipe para realizarmos um protótipo com um sensor digital de temperatura e umidade dentro da Central de Tecnologia da Instituição (CTI) pois essa sala contém os servidores do curso da Ciência da Computação no Instituto Federal Farroupilha. A justificativa para realizar a coleta no CTI era porque, embora a sala fosse climatizada, havia a suspeita de que havia demasiada umidade na sala pois o prédio do curso possui infiltrações e isso poderia representar risco para o funcionamento das máquinas do CTI.

Elaboramos um protótipo com uma placa controladora, uma placa ethernet shield, uma protoboard, um sensor DHT, um cartão de memória (para gravar os dados da coleta) e cabos para conexões e energia. O código que foi desenvolvido para o protótipo foi a junção de funções para operação do DHT, que capta dados analógicos e converte em dados digitais, e e gravação posterior no cartão de memória em um arquivo .CSV.
# Conclusões
Após coleta e análise dos dados, conseguimos verificar que a temperatura dentro do rack dos servidores se mantém estável (21,4ºC a 21,8ºC) contudo, a umidade relativa do ar oscila entre 47% e 71%. Segundo a American Society of Heating, Refrigerating and Air Conditioning Engineers, o ambiente ideal para funcionamento de equipamento de TI deve possuir temperatura entre 18ºC e 27ºC e umidade relativa do ar mantida entre 40% a 55%. 

Os resultados sugerem que: 
1) a sala pode mesmo estar com umidade relativa alta em razão das infiltrações que o prédio possui;
2) 2) essa umidade alta pode vir a representar um risco para o funcionamento dos equipamentos no CTI.
