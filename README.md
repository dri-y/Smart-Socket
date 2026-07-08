# Smart-Socket

## Sistema IoT de Proteção Infantil para Tomadas

## 📌 Sobre o projeto

O SmartSafeSocket é um protótipo de sistema de segurança desenvolvido com ESP32, cujo objetivo é simular uma tomada inteligente capaz de detectar aproximações de risco, interromper a alimentação elétrica simulada e alertar um responsável.

A ideia do projeto surgiu com o intuito de desenvolver uma solução de proteção infantil, evitando acidentes causados pelo contato de crianças com tomadas elétricas.

---

# 🎯 Objetivos

- Desenvolver um sistema de detecção de aproximação utilizando sensores.
- Simular o corte automático de energia em uma situação de risco.
- Criar um mecanismo de autorização para religamento do sistema.
- Implementar comunicação entre o dispositivo e o usuário.
- Aplicar conceitos de programação C++, eletrônica e IoT.

---

# ⚙️ Funcionamento

O sistema funciona seguindo as etapas:

1. O sensor monitora continuamente a distância de objetos próximos.
2. Caso uma aproximação seja considerada perigosa:
   - A alimentação simulada da tomada é interrompida.
   - Um alerta sonoro é ativado.
   - O responsável recebe uma notificação.
3. O sistema permanece bloqueado até que um usuário autorizado realize o religamento.

---

# 🔄 Fluxo do sistema

```
Monitoramento
      |
      ↓
Sensor detecta aproximação
      |
      ↓
Distância está abaixo do limite?
      |
   Sim
      |
      ↓
Ativa proteção
      |
      ↓
Desliga tomada simulada
      |
      ↓
Envia alerta
      |
      ↓
Aguarda autorização
      |
      ↓
Religa sistema
```

---

# 🛠️ Componentes utilizados

| Componente | Função |
|---|---|
| ESP32 | Unidade de processamento e comunicação |
| Sensor de distância | Detectar aproximações |
| LED verde | Indicar tomada ativa |
| LED vermelho | Indicar proteção acionada |
| Buzzer | Alerta sonoro |
| Botão | Autorização/rearme do sistema |
| Relé (simulação futura) | Controle da alimentação |

---

# 💻 Tecnologias utilizadas

- Linguagem: C++
- Plataforma: ESP32
- Ambiente: Arduino IDE
- Comunicação: Wi-Fi (futuramente MQTT)
- Conceitos aplicados:
  - Programação orientada a objetos
  - Sensores
  - Sistemas embarcados
  - Internet das Coisas (IoT)

---

# 📂 Estrutura do projeto

```
SmartSafeSocket

├── src/
│   ├── main.cpp
│   ├── SensorDistancia.cpp
│   ├── Tomada.cpp
│   ├── Alarme.cpp
│   └── Comunicacao.cpp
│
├── docs/
│   ├── Fluxograma.png
│   ├── DiagramaBlocos.png
│   └── Requisitos.md
│
└── README.md
```

---

# 🧠 Estados do sistema

O sistema possui diferentes estados:

### NORMAL
- Tomada liberada.
- Sensor monitorando.

### PROTEÇÃO
- Aproximação perigosa detectada.
- Tomada desligada.
- Alarme ativado.

### AGUARDANDO AUTORIZAÇÃO
- Sistema permanece bloqueado.
- Aguarda comando do responsável.

### FALHA
- Algum componente apresentou erro.
- Sistema entra em modo seguro.

---

# 🚧 Desenvolvimento

## Versão atual

- [ ] Leitura do sensor de distância
- [ ] Controle dos LEDs
- [ ] Acionamento do buzzer
- [ ] Sistema de bloqueio
- [ ] Botão de autorização
- [ ] Comunicação Wi-Fi
- [ ] MQTT
- [ ] Aplicativo

---

# 🔮 Melhorias futuras

- Implementação de aplicativo próprio.
- Comunicação utilizando MQTT.
- Histórico de eventos.
- Sistema de autenticação do responsável.
- Uso de RFID ou biometria.
- Integração com sistemas de automação residencial.

---

# 👨‍💻 Autor

Desenvolvido por [Seu nome]

Projeto de estudo envolvendo eletrônica, programação embarcada e IoT.
