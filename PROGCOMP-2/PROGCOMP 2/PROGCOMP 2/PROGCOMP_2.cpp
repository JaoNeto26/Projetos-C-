#include <iostream> 
#include "Text.h" 
#include "Bot.h" 

using namespace std;

int main()
{
    
    Text text, line;
    Create(&text, 20);
    Create(&line, 100);

    int i = 0;
    Read(&line);
    while (CharAt(&line, 0) != '%')
    {
        Add(&text, &line);
        Print(&line);
        Answer(i++);
        Read(&line);
    }

    Text title;
    Init(&title, "Resumo da Conversa ");
    Boxed(&title);
    Highlight(&text);

    Destroy(&line);
    Destroy(&text);
    Destroy(&title);
}