def evaluate_expression(expression):
    def has_precedence(op1, op2):
        if (op1 in '*/' and op2 in '+-'):
            return False
        return True

    def apply_operation(operands, operators):
        operand2 = operands.pop()
        operand1 = operands.pop()
        if operators[-1] == '+':
            result = operand1 + operand2
        elif operators[-1] == '-':
            result = operand1 - operand2
        elif operators[-1] == '*':
            result = operand1 * operand2
        elif operators[-1] == '/':
            result = operand1 // operand2
        operands.append(result)
        operators.pop()

    operands = []
    operators = []

    for ch in expression:
        if ch.isdigit():
            operands.append(int(ch))
        elif ch == '(':
            operators.append(ch)
        elif ch == ')':
            while operators[-1] != '(':
                apply_operation(operands, operators)
            operators.pop()  # Remove the '('
        elif ch in '+-*/':
            while operators and has_precedence(ch, operators[-1]):
                apply_operation(operands, operators)
            operators.append(ch)

    while operators:
        apply_operation(operands, operators)

    return operands[0]

