using Blazor_Tarefas.Entidades;

namespace Tarefas_Net7.Client.Repositorios
{
    public interface IRepositorio
    {
        List<Tarefa> ObterTarefas();
    }
}
