#include "lists.h"
/**
 * add_node_end - to add node to the  end;
 * @head: the head pointre
 * @str: the string to add
 * Return: the newly add string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *temp;
	list_t *new = *head;

	while (str[count])
	{
		count++;
	}
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup(str);
	temp->len = count;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	while (new->next)
		new = new->next;
	new->next = temp;

	return (temp);
}
