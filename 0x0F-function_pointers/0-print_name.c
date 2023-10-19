/**
*print_name - Function to print name
*@name: name parameter
*@f: more parameter
*/


void print_name(char *name, void (*f)(char *))
{
	if (!name || *name == '\0' || !f)
		return;

	f(name);
}
