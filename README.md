# StateMachineLib
A simple State Machine library for Arduino based on [rppelayo's finite state machine library](https://github.com/rppelayo/FiniteStateMachine).

## Features
- **Contexts**: Supports user-defined contexts that encapsulates all relevant data and functionality needed for state callbacks, minimizing the need for accessing global variables or functions on callbacks.
- **Finite State Machine (FSM)**: A simple state machine, allows operation of predefined set of states, each with customizable `enter`, `update`, and `exit` function pointers. 
- **Hierarchical State Machine (HSM)**: An extended FSM with support for nested states. States can inherit common behaviors from parent states while maintaining their own unique logic.
- **State Coordinator**: A core component responsible for managing state transitions. Used internally by both FSM and HSM classes. Can utilize this class to define their own custom state machines, offering flexibility for handling transitions and state logic.

---
For more detailed information about the library, please visit our [Wiki](https://github.com/0verflux/StateMachineLib/wiki).