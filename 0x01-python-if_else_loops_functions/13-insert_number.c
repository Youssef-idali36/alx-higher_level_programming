#include "lists.h"
/**
 * insert_node - insert a number into a sorted singly linked list
 * @head: pointer 
 * @number: data of node
 * Return: pointer to head
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *tmp, *new;
	int data;

	new = malloc(sizeof(listint_t));
	new->n = number;
	new->next = NULL;

	data = number;
	if (*head == NULL || data < (*head)->n)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL && tmp->next->n < data)
			tmp = tmp->next;
		new->next = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
