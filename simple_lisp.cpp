#include "simple_lisp.h"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("simple_lisp: error: no input files\n");
        exit(EXIT_FAILURE);
    }

    const char *Source = ReadFile(argv[1]);

    sl_script Script;
    Script.Filename = argv[1];
    CompileScript(&Script, Source);
    Disasm(&Script);

    sl_vm Vm;
    InitVM(&Vm);
    Execute(&Vm, &Script);

    return 0;
}
