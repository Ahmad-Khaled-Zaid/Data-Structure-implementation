"""
Stack will follow LIFO rule (Last in first out)
"""

class Stack:
    stack_list = []

    def __init__(self):
        print("Stack created")

    def add(self, number):
        """
        This method is used to add item to the stack
        :param (number) \n
        :return None
        """
        if len(self.stack_list) < 3:
            self.stack_list += [number]
        else:
            print("stack is full")

    def show_stack(self):
        """
        this method is used to print all the stack items
        :return list containing all the stack items
        """
        return self.stack_list[::-1]

    def delete(self):
        """
        This method is used to delete an item from the stack
        :return None
        """
        self.stack_list = self.stack_list[:len(self.stack_list) - 1]

    def is_empty(self):
        """
        this method is used to check if the stack is empty
        :return Boolean value
        """
        return len(self.stack_list) == 0

    def size(self):
        """
        This method is used to know the size of the stack
        :return: integer number referred to the stack size
        """
        return len(self.stack_list)

    def top_stack(self):
        """
        this method is used to get the last element added to the stack
        :return: last element added to the stack
        """
        return self.stack_list[-1] if len(self.stack_list) > 0 else "stack is empty"


new_stack = Stack()
new_stack.show_stack()

print(new_stack.is_empty())
print(new_stack.top_stack())
