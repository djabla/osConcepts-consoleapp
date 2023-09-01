#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int open();
int diskmenu();
int mallocmenu();
int pagerepmenu();
int fcfs();
int sstf();
int scan();
int look();
int firstfit();
int bestfit();
int worstfit();
int fifo();
int optimal();
int lru();
void print(int frame_size,int frame[]);
void add_reference(int frame_size,int frame[], int reference);
int predict(int reference_length, int references[], int page_no ,int frame_size,int frame[], int start);
void optadd_reference(int frame_size,int frame[], int reference, int current_position,int reference_length, int references[]);
int lrupredict(int reference_length, int references[], int page_no ,int frame_size,int frame[], int start);
void lruadd_reference(int frame_size,int frame[], int reference, int current_position,int reference_length, int references[]);
int pointer;
int faults ,hits;
int i;

int main(){
	system("color 2");
	printf("\n\n\n\n\n\n");
	printf("\t\t     ");
	for (i=0; i<79; i++)
		{
			printf("%c",220);
		}
	printf("\n\t\t     %c                                                                             %c",219,219);
	printf("\n\t\t     %c                                                                             %c",219,219);
	printf("\n\t\t     %c                             O P E R A T I N G                               %c",219,219);
	printf("\n\t\t     %c                               S Y S T E M S                                 %c",219,219);
	printf("\n\t\t     %c                              C O N C E P T S                                %c",219,219);
	printf("\n\t\t     %c                                                                             %c",219,219);
	printf("\n\t\t     %c                                                                             %c",219,219);
	printf("\n\t\t     ");
	for (i=0; i<79; i++)
		{
			printf("%c",223);
		}
	printf("\n\n");
	printf("\t\t\t\t\t   ");
	system("pause");

	open();
}

int open(){
    int a;
    system("CLS");

	printf("\n\n\n\n\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                             M A I N  M E N U                                 %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                           [1]  Disk Scheduling                               %c",219,219);
	printf("\n\t\t     %c                           [2]  Memory Allocation                             %c",219,219);
	printf("\n\t\t     %c                           [3]  Page Replacement                              %c",219,219);
	printf("\n\t\t     %c                           [4]  Exit                                          %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
		{
			printf("%c",223);
		}

	printf("\n\n\t\t\t                              Choice: ");
	scanf("%d", &a);
	system("cls");

	switch(a){
		case 1:{
			system("CLS");
			diskmenu();
			break;
		}
		case 2:{
			system("CLS");
			mallocmenu();
			break;
		}
		case 3:{
			system("CLS");
			pagerepmenu();
			break;
		}
	}
}

int diskmenu(){
	int b;
	printf("\n\n\n\n\n\n\t\t     ");
	for (i=0; i<80; i++)
		{
			printf("%c",220);
		}
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                        D I S K  S C H E D U L I N G                          %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                               [1]  FCFS                                      %c",219,219);
	printf("\n\t\t     %c                               [2]  SSTF                                      %c",219,219);
	printf("\n\t\t     %c                               [3]  Scan                                      %c",219,219);
	printf("\n\t\t     %c                               [4]  Look                                      %c",219,219);
	printf("\n\t\t     %c                               [5]  Main Menu                                 %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
		printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
		{
			printf("%c",223);
		}

	printf("\n\n\t\t\t                              Choice: ");
	scanf("%d", &b);

	switch(b){
		case 1:{
			system("CLS");
			system("color 3");
			fcfs();
			break;
		}
		case 2:{
			system("CLS");
			system("color 3");
			sstf();
			break;
		}
		case 3:{
			system("CLS");
			system("color 3");
			scan();
			break;
		}
		case 4:{
			system("CLS");
			system("color 3");
			look();
			break;
		}
        case 5:{
            system("CLS");
            open();
            break;
        }
	}
}

int mallocmenu(){
	int c;
	printf("\n\n\n\n\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                       M E M O R Y  A L L O C A T I O N                       %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                              [1]  First Fit                                  %c",219,219);
	printf("\n\t\t     %c                              [2]  Best Fit                                   %c",219,219);
	printf("\n\t\t     %c                              [3]  Worst Fit                                  %c",219,219);
	printf("\n\t\t     %c                              [4]  Main Menu                                  %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\n\t\t\t                              Choice: ");
	scanf("%d", &c);

	switch(c){
		case 1:{
			system("CLS");
			system("color 3");
			firstfit();
			break;
		}
		case 2:{
			system("CLS");
			system("color 3");
			bestfit();
			break;
		}
		case 3:{
			system("CLS");
			system("color 3");
			worstfit();
			break;
		}
        case 4:{
            system("CLS");
            open();
            break;
        }
	}
}

int pagerepmenu(){
	int d;
	printf("\n\n\n\n\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                        P A G E  R E P L A C E M E N T                        %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                              [1]  FIFO                                       %c",219,219);
	printf("\n\t\t     %c                              [2]  Optimal                                    %c",219,219);
	printf("\n\t\t     %c                              [3]  LRU                                        %c",219,219);
	printf("\n\t\t     %c                              [4]  Main Menu                                  %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\n\t\t\t                              Choice: ");
	scanf("%d", &d);

	switch(d){
		case 1:{
			system("CLS");
			system("color 3");
			fifo();
			break;
		}
		case 2:{
			system("CLS");
			system("color 3");
			optimal();
			break;
		}
		case 3:{
			system("CLS");
			system("color 3");
			lru();
			break;
		}
		case 4:{
            system("CLS");
            open();
            break;
        }
	}
}

int fcfs(){
	int i,no_of_requests,initial_head;
	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                      FCFS                                    %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter the number of requests: ");
	scanf("%d",&no_of_requests);
	int request[no_of_requests];
	printf("\n\t\t     Enter the requests: \n");
	for (i = 0; i < no_of_requests; ++i)
	{
		printf("\t\t     ");
		scanf("%d",&request[i]);
	}
	printf("\n\t\t     Enter current position of head: ");
	scanf("%d",&initial_head);

	printf("\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\n\n\n");

	int seek_time=0;
	printf("\t\t     %d -> ",initial_head );
	for(i=0;i<no_of_requests;i++)
	{
		if(i == no_of_requests-1)
			printf("%d\n", request[i] );
		else
			printf("%d -> ", request[i] );
		seek_time += abs(request[i] - initial_head);
		initial_head = request[i];
	}
	printf("\n\t\t     Seek Time: %d\n\n\n\t\t     ", seek_time);

	system("pause");
	open();
}

struct request
{
	int request_track_number;
	bool visited;
};

int sstf(){
	int i,no_of_requests,initial_head,limit,j,choice,previous_head;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                      SSTF                                    %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter the number of requests: ");
	scanf("%d",&no_of_requests);
	struct request req[no_of_requests];
	printf("\n\t\t     Enter the requests: \n");
	for (i = 0; i < no_of_requests; ++i)
	{
	    printf("\t\t     ");
		scanf("%d",&req[i].request_track_number);
		req[i].visited = false;
	}
	printf("\n\t\t     Enter current position of head: ");
	scanf("%d",&initial_head);

	printf("\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\n\n\n");

	int seek_time=0;
	printf("\t\t     %d -> ",initial_head );
	int n = no_of_requests;
	while(n)
	{
		int min = 1e9;
		int min_track_number, position;
		for(i=0;i<no_of_requests;i++)
		{
			if(abs(initial_head - req[i].request_track_number) < min && req[i].visited == false)
			{
				min = abs(initial_head - req[i].request_track_number);
				min_track_number = req[i].request_track_number;
				position = i;
			}
		}
		initial_head = req[position].request_track_number;
		req[position].visited = true;
		printf("%d -> ",min_track_number);
		seek_time += min;
		n--;
	}

	printf("\n\n\t\t     Seek Time: %d\n\n\n\t\t     ", seek_time);
	system("pause");
	open();
}

int scan(){
	int i,no_of_requests,initial_head,limit,j,choice,previous_head;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                      SCAN                                    %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter the number of requests: ");
	scanf("%d",&no_of_requests);
	struct request req[no_of_requests];
	printf("\n\t\t     Enter the requests: \n");
	for (i = 0; i < no_of_requests; ++i)
	{
	    printf("\t\t     ");
		scanf("%d",&req[i].request_track_number);
		req[i].visited = false;
	}
	printf("\n\t\t     Enter current position of head: ");
	scanf("%d",&initial_head);

	printf("\n\t\t     Enter previous position of head: ");
	scanf("%d",&previous_head);

	printf("\n\t\t     Enter the cylinder size: ");
	scanf("%d",&limit);

	printf("\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\n\n\n");

	if(previous_head - initial_head > 0 )
	{
		choice = 2;
	}
	else
		choice = 1;
	//scanf("%d",&choice);
	int seek_time=0;
	printf("\t\t     %d -> ",initial_head );
	if(choice == 1)
	{
		for(i=initial_head;i<limit;i++)
		{
			for(j=0;j<no_of_requests;j++)
			{
				if(req[j].request_track_number == i && req[j].visited == false)
				{
					printf("%d -> ", req[j].request_track_number);
					req[j].visited = true;
					seek_time += abs(req[j].request_track_number - initial_head);
					initial_head = req[j].request_track_number;
				}
			}
		}
		printf("%d -> ", limit-1);
		seek_time += abs(limit-1 - initial_head);
		initial_head = limit-1;
		for(i=initial_head;i>=0;i--)
		{
			for(j=0;j<no_of_requests;j++)
			{
				if(req[j].request_track_number == i && req[j].visited == false)
				{
					printf("%d -> ", req[j].request_track_number);
					req[j].visited = true;
					seek_time += abs(req[j].request_track_number - initial_head);
					initial_head = req[j].request_track_number;
				}
			}
		}
		seek_time += abs(initial_head - 0);
		printf("0 \n");
	}
	else if(choice == 2)
	{
		for(i=initial_head;i>=0;i--)
		{
			for(j=0;j<no_of_requests;j++)
			{
				if(req[j].request_track_number == i && req[j].visited == false)
				{
					printf("%d -> ", req[j].request_track_number);
					req[j].visited = true;
					seek_time += abs(req[j].request_track_number - initial_head);
					initial_head = req[j].request_track_number;
				}
			}
		}
		printf("%d -> ", 0);
		seek_time += abs(0 - initial_head);
		initial_head = 0;
		for(i=initial_head;i<limit;i++)
		{
			for(j=0;j<no_of_requests;j++)
			{
				if(req[j].request_track_number == i && req[j].visited == false)
				{
					printf("%d -> ", req[j].request_track_number);
					req[j].visited = true;
					seek_time += abs(req[j].request_track_number - initial_head);
					initial_head = req[j].request_track_number;
				}
			}
		}
		seek_time += abs(limit-1 - initial_head );
		printf("%d \n", limit-1);

	}
	printf("\n\t\t     Seek Time: %d\n\n\n\t\t     ", seek_time);
	system("pause");
	open();
}

int look(){
	int i,no_of_requests,initial_head,limit,j,choice,previous_head;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                      LOOK                                    %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter the number of requests: ");
	scanf("%d",&no_of_requests);
	struct request req[no_of_requests];
	printf("\n\t\t     Enter the requests: \n");
	for (i = 0; i < no_of_requests; ++i)
	{
	    printf("\t\t     ");
		scanf("%d",&req[i].request_track_number);
		req[i].visited = false;
	}
	printf("\n\t\t     Enter current position of head: ");
	scanf("%d",&initial_head);

	printf("\n\t\t     Enter previous position of head: ");
	scanf("%d",&previous_head);

	printf("\n\t\t     Enter the cylinder size: ");
	scanf("%d",&limit);

	printf("\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\n\n\n\t\t     ");

	if(previous_head - initial_head > 0 )
	{
		choice = 2;
	}
	else
		choice = 1;
	//scanf("%d",&choice);
	int seek_time=0;
	printf("%d -> ",initial_head );
	int cp_initial_head = initial_head;
	if(choice == 1)
	{
		for(i=initial_head;i<limit;i++)
		{
			for(j=0;j<no_of_requests;j++)
			{
				if(req[j].request_track_number == i && req[j].visited == false)
				{
					printf("%d -> ", req[j].request_track_number);
					req[j].visited = true;
					seek_time += abs(req[j].request_track_number - initial_head);
					initial_head = req[j].request_track_number;
				}
			}
		}
		initial_head = 0;
		for(i=0;i<cp_initial_head;i++)
		{
			for(j=0;j<no_of_requests;j++)
			{
				if(req[j].request_track_number == i && req[j].visited == false)
				{
					printf("%d -> ", req[j].request_track_number);
					req[j].visited = true;
					seek_time += abs(req[j].request_track_number - initial_head);
					initial_head = req[j].request_track_number;
				}
			}
		}
		printf("\n");
	}
	else if(choice == 2)
	{
		for(i=initial_head;i>=0;i--)
		{
			for(j=0;j<no_of_requests;j++)
			{
				if(req[j].request_track_number == i && req[j].visited == false)
				{
					printf("%d -> ", req[j].request_track_number);
					req[j].visited = true;
					seek_time += abs(req[j].request_track_number - initial_head);
					initial_head = req[j].request_track_number;
				}
			}
		}
		initial_head = limit-1;
		for(i=limit;i>cp_initial_head;i--)
		{
			for(j=0;j<no_of_requests;j++)
			{
				if(req[j].request_track_number == i && req[j].visited == false)
				{
					printf("%d -> ", req[j].request_track_number);
					req[j].visited = true;
					seek_time += abs(req[j].request_track_number - initial_head);
					initial_head = req[j].request_track_number;
				}
			}
		}
		printf("\n");
	}
	printf("\n\t\t     Seek Time: %d\n\n\n\t\t     ", seek_time);
	system("pause");
	open();
}

struct process
{
	int id;
	int memory_required;
	int allocated_partition;
	int external_fragment;
	bool allocated;
};

struct partition
{
	int id;
	int size;
	int internal_fragment;
	bool alloted;
};

int firstfit(){
	int memory,no_of_partitions,no_of_processes,i,j,sum=0;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                   FIRST FIT                                  %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter total memory: ");
	scanf("%d",&memory);
	printf("\n\t\t     Enter number of partitions: ");
	scanf("%d",&no_of_partitions);
	struct partition parti[no_of_partitions];
	for(i=0;i<no_of_partitions;i++)
	{
		printf("\t\t     Enter memory for partition%d: ",i+1);
		scanf("%d",&parti[i].size);
		parti[i].id = i+1;
		parti[i].alloted=false;

		sum+=parti[i].size;
	}
	if(sum < memory)
	{
		no_of_partitions++;
		parti[i].size = memory - sum;
		parti[i].id = i+1;
		parti[i].alloted=false;
		printf("\t\t     Size of partition%d: %d\n",i,parti[i].size );
	}
	int total_internal_fragment=0, total_external_fragment=0;
	printf("\n\t\t     Enter number of processes: ");
	scanf("%d",&no_of_processes);
	struct process proc[no_of_processes];
	for (i = 0; i < no_of_processes; ++i)
	{
		printf("\t\t     Enter memory required for process%d: ",i+1 );
		scanf("%d",&proc[i].memory_required);
		proc[i].id = i+1;
		proc[i].external_fragment=0;
		proc[i].allocated = false;
		for(j=0;j<no_of_partitions;j++)
		{
			if(proc[i].memory_required<=parti[j].size && !parti[j].alloted)
			{
				proc[i].allocated = true;
				proc[i].allocated_partition = parti[j].id;
				parti[j].internal_fragment = parti[j].size - proc[i].memory_required;
				total_internal_fragment+=parti[j].internal_fragment;
				parti[j].alloted=true;
				break;
			}
			/*else if(proc[i].memory_required<=parti[j+1].size && !parti[j+1].alloted)
			{
				proc[i].allocated = true;
				proc[i].allocated_partition = parti[j+1].id;
				parti[j+1].internal_fragment = parti[j+1].size - proc[i].memory_required;
				total_internal_fragment+=parti[j+1].internal_fragment;
				parti[j+1].alloted=true;
				break;
			}*/
		}
		for(j=0;j<no_of_partitions;j++)
		{
			if(parti[j].alloted==false)
			{
				proc[i].external_fragment+=parti[j].size;
			}
		}
	}
	for(j=0;j<no_of_partitions;j++)
	{
		if(!parti[j].alloted)
		{
			total_external_fragment+=parti[j].size;
			parti[j].internal_fragment = -1;
		}
	}

	printf("\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\n\n");

	printf("\n\t\t     ProcessID\tMemory required\t\tAllocated\tAllocated Partition\n");
	for(i=0;i<no_of_processes;i++)
	{
		if(proc[i].allocated)
		{
			printf("\t\t     %d\t\t%d\t\t\tYES\t\t%d\t\n",proc[i].id, proc[i].memory_required,  proc[i].allocated_partition);
		}
		else
		{
			printf("\t\t     %d\t\t%d\t\t\tNO\t\t%d\n",proc[i].id, proc[i].memory_required, proc[i].external_fragment);
		}
	}
	printf("\n\t\t     ");
	printf("Internal Fragmentation\n");
	for(i=0;i<no_of_partitions;i++)
	{
		if(parti[i].internal_fragment==-1)
		{
			printf("\t\t     %d ---\n",parti[i].id);
		}
		else
			printf("\t\t     %d %d\n",parti[i].id,parti[i].internal_fragment );
	}
	printf("\n\t\t     Total internal Fragmentation: %d\n\t\t     Total external Fragmentation: %d\n\n\n\t\t     ",total_internal_fragment, total_external_fragment);
	system("pause");
	open();
}

int bestfit(){
	int memory,no_of_partitions,no_of_processes,i,j,sum=0;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
	printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                   BEST FIT                                   %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter total memory: ");
	scanf("%d",&memory);
	printf("\n\t\t     Enter number of partitions: ");
	scanf("%d",&no_of_partitions);
	struct partition parti[no_of_partitions];
	for(i=0;i<no_of_partitions;i++)
	{
		printf("\t\t     Enter memory for partition%d: ",i+1);
		scanf("%d",&parti[i].size);
		parti[i].id = i+1;
		parti[i].alloted=false;

		sum+=parti[i].size;
	}
	if(sum < memory)
	{
		no_of_partitions++;
		parti[i].size = memory - sum;
		printf("\t\t     Size of partition%d: %d\n",i+1,parti[i].size );
		parti[i].id = i+1;
		parti[i].alloted = false;
	}
	for(i=0;i<no_of_partitions-1;i++)
	{
		for(j=0;j<no_of_partitions-1-i;j++)
		{
			if(parti[j].size>parti[j+1].size)
			{
				struct partition temp = parti[j];
				parti[j] = parti[j+1];
				parti[j+1] = temp;
			}
		}
	}
	int total_internal_fragment=0, total_external_fragment=0;
	printf("\n\t\t     Enter number of processes: ");
	scanf("%d",&no_of_processes);
	struct process proc[no_of_processes];
	for (i = 0; i < no_of_processes; ++i)
	{
		printf("\t\t     Enter memory required for process%d: ",i+1 );
		scanf("%d",&proc[i].memory_required);
		proc[i].id = i+1;
		proc[i].external_fragment=0;
		proc[i].allocated = false;
		for(j=0;j<no_of_partitions;j++)
		{
			if(proc[i].memory_required<=parti[j].size && !parti[j].alloted)
			{
				proc[i].allocated = true;
				proc[i].allocated_partition = parti[j].id;
				parti[j].internal_fragment = parti[j].size - proc[i].memory_required;
				total_internal_fragment+=parti[j].internal_fragment;
				parti[j].alloted=true;
				break;
			}
			/*else if(proc[i].memory_required<=parti[j+1].size && !parti[j+1].alloted)
			{
				proc[i].allocated = true;
				proc[i].allocated_partition = parti[j+1].id;
				parti[j+1].internal_fragment = parti[j+1].size - proc[i].memory_required;
				total_internal_fragment+=parti[j+1].internal_fragment;
				parti[j+1].alloted=true;
				break;
			}*/
		}
		for(j=0;j<no_of_partitions;j++)
		{
			if(parti[j].alloted==false)
			{
				proc[i].external_fragment+=parti[j].size;
			}
		}
	}
	for(j=0;j<no_of_partitions;j++)
	{
		if(!parti[j].alloted)
		{
			total_external_fragment+=parti[j].size;
			parti[j].internal_fragment = -1;
		}
	}

	printf("\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\n\n\n\t\t     ");

	printf("ProcessID\tMemory required\t\tAllocated\tAllocated Partition\n");
	for(i=0;i<no_of_processes;i++)
	{
		if(proc[i].allocated)
		{
			printf("\t\t     %d\t\t%d\t\t\tYES\t\t%d\t\n",proc[i].id, proc[i].memory_required,  proc[i].allocated_partition);
		}
		else
		{
			printf("\t\t     %d\t\t%d\t\t\tNO\t\t%d\n",proc[i].id, proc[i].memory_required, proc[i].external_fragment);
		}
	}
	printf("\n");
	printf("\t\t     Internal Fragmentation\n");
	for(i=0;i<no_of_partitions;i++)
	{
		if(parti[i].internal_fragment==-1)
		{
			printf("\t\t     %d ---\n",parti[i].id);
		}
		else
			printf("\t\t     %d %d\n",parti[i].id,parti[i].internal_fragment );
	}
	printf("\n\t\t     Total internal Fragmentation: %d\n\t\t     Total external Fragmentation: %d\n\n\n\t\t     ",total_internal_fragment, total_external_fragment);
	system("pause");
	open();
}

int worstfit(){
	int memory,no_of_partitions,no_of_processes,i,j,sum=0;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                   WORST FIT                                  %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter total memory: ");
	scanf("%d",&memory);
	printf("\n\t\t     Enter number of partitions: ");
	scanf("%d",&no_of_partitions);
	struct partition parti[no_of_partitions];
	for(i=0;i<no_of_partitions;i++)
	{
		printf("\t\t     Enter memory for partition%d: ",i+1);
		scanf("%d",&parti[i].size);
		parti[i].id = i+1;
		parti[i].alloted=false;

		sum+=parti[i].size;
	}
	if(sum < memory)
	{
		no_of_partitions++;
		parti[i].size = memory - sum;
		parti[i].id = i+1;
		parti[i].alloted=false;
		printf("\t\t     Size of partition%d: %d\n",i+1,parti[i].size );
	}
	for(i=0;i<no_of_partitions-1;i++)
	{
		for(j=0;j<no_of_partitions-1-i;j++)
		{
			if(parti[j].size<parti[j+1].size)
			{
				struct partition temp = parti[j];
				parti[j] = parti[j+1];
				parti[j+1] = temp;
			}
		}
	}
	/*for(i=0;i<no_of_partitions;i++)
	{
		printf("%d\n",parti[i].size );
	}*/
	int total_internal_fragment=0, total_external_fragment=0;
	printf("\n\t\t     Enter number of processes: ");
	scanf("%d",&no_of_processes);
	struct process proc[no_of_processes];
	for (i = 0; i < no_of_processes; ++i)
	{
		printf("\t\t     Enter memory required for process%d: ",i+1 );
		scanf("%d",&proc[i].memory_required);
		proc[i].id = i+1;
		proc[i].external_fragment=0;
		proc[i].allocated = false;
		for(j=0;j<no_of_partitions;j++)
		{
			if(proc[i].memory_required<=parti[j].size && !parti[j].alloted)
			{
				proc[i].allocated = true;
				proc[i].allocated_partition = parti[j].id;
				parti[j].internal_fragment = parti[j].size - proc[i].memory_required;
				total_internal_fragment+=parti[j].internal_fragment;
				parti[j].alloted=true;
				break;
			}
			/*else if(proc[i].memory_required<=parti[j+1].size && !parti[j+1].alloted)
			{
				proc[i].allocated = true;
				proc[i].allocated_partition = parti[j+1].id;
				parti[j+1].internal_fragment = parti[j+1].size - proc[i].memory_required;
				total_internal_fragment+=parti[j+1].internal_fragment;
				parti[j+1].alloted=true;
				break;
			}
			else
			{
				proc[i].allocated = false;
			}*/
		}
		for(j=0;j<no_of_partitions;j++)
		{
			if(parti[j].alloted==false)
			{
				proc[i].external_fragment+=parti[j].size;
			}
		}
	}
	for(j=0;j<no_of_partitions;j++)
	{
		if(!parti[j].alloted)
		{
			total_external_fragment+=parti[j].size;
			parti[j].internal_fragment = -1;
		}
	}

	printf("\n\n\t\t     ");
	for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\n\n\n\t\t     ");

	printf("ProcessID\tMemory required\t\tAllocated\tAllocated Partition\n");
	for(i=0;i<no_of_processes;i++)
	{
		if(proc[i].allocated)
		{
			printf("\t\t     %d\t\t%d\t\t\tYES\t\t%d\t\n",proc[i].id, proc[i].memory_required,  proc[i].allocated_partition);
		}
		else
		{
			printf("\t\t     %d\t\t%d\t\t\tNO\t\t%d\n",proc[i].id, proc[i].memory_required, proc[i].external_fragment);
		}
	}
	printf("\n");
	printf("\t\t     Internal Fragmentation\n");
	for(i=0;i<no_of_partitions;i++)
	{
		if(parti[i].internal_fragment==-1)
		{
			printf("\t\t     %d ---\n",parti[i].id);
		}
		else
			printf("\t\t     %d %d\n",parti[i].id,parti[i].internal_fragment );
	}
	printf("\n\t\t     Total internal Fragmentation: %d\n\t\t     Total external Fragmentation: %d\n\n\n\t\t     ",total_internal_fragment, total_external_fragment);
	system("pause");
	open();
}

void print(int frame_size,int frame[])
{
	int i;
	//printf("Printing the Frames: ");
	printf("\t\t     ");
	for(i=0;i<frame_size;i++)
	{
		if(frame[i]==-1)
			printf("- ");
		else
			printf("%d ",frame[i]);
	}

	printf("\n");
}

void add_reference(int frame_size,int frame[], int reference)
{
	int i;
	bool alloted = false;
	for(i=0;i<frame_size;i++)
	{
		if(frame[i]==reference)
		{
			alloted = true;
			printf("\t\t     Hit for %d | ", reference);
			hits++;
			break;
		}
		else if(frame[i]==-1)
		{
			alloted = true;
			frame[i] = reference;
			printf("\t\t     Fault for %d | ", reference);
			faults++;
			break;
		}
	}
	if(alloted == false)
	{
		faults++;
		printf("\t\t     Fault for %d | ", reference);
		frame[pointer] = reference;
		pointer = (pointer+1)%frame_size;
	}
	print(frame_size, frame);
}

int fifo(){
	int frame_size,i,number_of_references;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                      FIFO                                    %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter frame size: ");
	scanf("%d",&frame_size);
	int frame[frame_size];
	for(i=0;i<frame_size;i++)
	{
		frame[i] = -1;
	}

	print(frame_size,frame);

	printf("\n\t\t     Enter the number of references: ");
	scanf("%d",&number_of_references);
	int reference[number_of_references];

	printf("\n\t\t     Enter reference strings: \n");

	for(i=0;i<number_of_references;i++)
	{
	    printf("\t\t     ");
		scanf("%d",&reference[i]);
		add_reference(frame_size,frame,reference[i]);
	}
	printf("\n\t\t     Number of faults: %d \n\t\t     Number of hits: %d\n\n\n\t\t     ",faults,hits );

	system("pause");
	open();
}

int predict(int reference_length, int references[], int page_no ,int frame_size,int frame[], int start)
{
	int pos = -1, farthest = start, i;
	for(i=0;i<frame_size;i++)
	{
		int j;
		for(j=start;j<reference_length;j++)
		{
			if(frame[i]==references[j])
			{
				if(j>farthest)
				{
					farthest=j;
					pos=i;
				}
				break;
			}
		}
		if(j==page_no)
			return i;
	}
	if(pos == -1)
		return 0;
	else
		return pos;
}

void optadd_reference(int frame_size,int frame[], int reference, int current_position,int reference_length, int references[])
{
	int i;
	bool allocated=false;
	for(i=0;i<frame_size;i++)
	{

		if(frame[i]==reference)
		{
			printf("\t\t     Hit for %d | ", reference);
			hits++;
			allocated = true;
			break;
		}
		else if(frame[i]==-1)
		{
			frame[i] = reference;
			printf("\t\t     Fault for %d | ", reference);
			faults++;
			allocated = true;
			break;
		}
	}
	if(allocated==false)
	{
		int j = predict(reference_length,references,current_position,frame_size,frame,current_position+1);

		frame[j] = reference;
		printf("\t\t     Fault for %d | ", reference);
		faults++;
	}
	print(frame_size, frame);
}

int optimal(){
	int frame_size,i,number_of_references;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                   OPTIMAL                                    %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter frame size: ");
	scanf("%d",&frame_size);
	int frame[frame_size];
	for(i=0;i<frame_size;i++)
	{
		frame[i] = -1;
	}

	print(frame_size,frame);

	printf("\n\t\t     Enter the number of references: ");
	scanf("%d",&number_of_references);
	int reference[number_of_references];

	printf("\n\t\t     Enter reference strings: \n");

	for(i=0;i<number_of_references;i++)
	{
	    printf("\t\t     ");
		scanf("%d",&reference[i]);
		optadd_reference(frame_size,frame,reference[i],i,number_of_references,reference);
	}
	printf("\n\t\t     Number of faults: %d \n\t\t     Number of hits: %d\n\n\n\t\t     ",faults,hits );
	system("pause");
	open();
}

int lrupredict(int reference_length, int references[], int page_no ,int frame_size,int frame[], int start)
{
	int pos = -1, farthest = start, i;
	for(i=0;i<frame_size;i++)
	{
		int j;
		for(j=start-1;j>=0;j--)
		{
			if(frame[i]==references[j])
			{
				if(j<farthest)
				{
					farthest=j;
					pos=i;
				}
				break;
			}
		}
		if(j==page_no)
			return i;
	}
	if(pos == -1)
		return 0;
	else
		return pos;
}

void lruadd_reference(int frame_size,int frame[], int reference, int current_position,int reference_length, int references[])
{
	int i;
	bool allocated=false;
	for(i=0;i<frame_size;i++)
	{

		if(frame[i]==reference)
		{
			printf("\t\t     Hit for %d | ", reference);
			hits++;
			allocated = true;
			break;
		}
		else if(frame[i]==-1)
		{
			frame[i] = reference;
			printf("\t\t     Fault for %d | ", reference);
			faults++;
			allocated = true;
			break;
		}
	}
	if(allocated==false)
	{
		int j = lrupredict(reference_length,references,current_position,frame_size,frame,current_position+1);

		frame[j] = reference;
		printf("\t\t     Fault for %d | ", reference);
		faults++;
	}
	print(frame_size, frame);
}

int lru(){
	int frame_size,i,number_of_references;

	printf("\n\n\t\t     ");
    for (i=0; i<80; i++)
    {
        printf("%c",220);
    }
    printf("\n\t\t     %c                                                                              %c",219,219);
	printf("\n\t\t     %c                                       LRU                                    %c",219,219);
	printf("\n\t\t     %c                                                                              %c",219,219);
    printf("\n\t\t     ")	;
	for (i=0; i<80; i++)
    {
        printf("%c",223);
    }

	printf("\n\t\t     Enter frame size: ");
	scanf("%d",&frame_size);
	int frame[frame_size];
	for(i=0;i<frame_size;i++)
	{
		frame[i] = -1;
	}

	print(frame_size,frame);

	printf("\n\t\t     Enter the number of references: ");
	scanf("%d",&number_of_references);
	int reference[number_of_references];

	printf("\n\t\t     Enter reference strings: \n");

	for(i=0;i<number_of_references;i++)
	{
	    printf("\t\t     ");
		scanf("%d",&reference[i]);
		lruadd_reference(frame_size,frame,reference[i],i,number_of_references,reference);
	}
	printf("\n\t\t     Number of faults: %d \n\t\t     Number of hits: %d\n\n\n\t\t     ",faults,hits );
	system("pause");
	open();
}
