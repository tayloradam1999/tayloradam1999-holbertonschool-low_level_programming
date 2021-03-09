#ifndef DOG
#define DOG

/**
 * strcuct dog - Dog struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 */

tyepdef struct dog {
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
