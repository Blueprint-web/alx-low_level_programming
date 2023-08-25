#include "lists.h"
/**
 * add_node - the add node funtion
 * @head: the head node
 * @str: the string
 * Return: the string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int count = 0;

	while (str[count])
	{
		count++;
	}
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = count;
	temp->next = (*head);
	(*head) = temp;
	return (*head);
}
