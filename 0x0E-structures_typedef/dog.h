#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - stores info about a particular dog
 * @name:  dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG.H*/
