#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv)
{
    MPI_Init(&argc, &argv);

    int rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);

    if (rank % 2) printf("I am rank %d, and I am odd rank\n", rank);
    else printf("I am rank %d, and I am even rank\n", rank);

    MPI_Finalize();
    return 0;
}