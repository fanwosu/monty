#include "monty.h"
/**
 * f_queue -  prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - this add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
 */
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *auxillary;

	auxillary = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (auxillary)
	{
		while (auxillary->next)
			auxillary = auxillary->next;
	}
	if (!auxillary)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		auxillary->next = new_node;
		new_node->prev = auxillary;
	}
}
