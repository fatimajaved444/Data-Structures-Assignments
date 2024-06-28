//#include<iostream>
//#include<string>
//using namespace std;
//
//template <class T>
//class node
//{
//public:
//	T data;
//	node<T>* next;
//public:
//	node()
//	{
//		data = 0;
//		next = 0;
//	}
//
//	node(T d = 0, node<T>* n = NULL)
//	{
//		data = d;
//		next = n;
//	}
//};
//
//template <class T>
//class Block
//{
//public:
//	string start_byte_ID;
//	T total_bytes;
//	Block<T>* next;
//
//	Block()
//	{
//		total_bytes = 0;
//		start_byte_ID = 0;
//		next = NULL;
//	}
//	Block(string id = "", T bytes = 0)
//	{
//		start_byte_ID = id;
//		total_bytes = bytes;
//		next = NULL;
//	}
//	void Print_Block()
//	{
//		cout << "[ID: " << start_byte_ID << "  ";
//		cout << "Bytes: " << total_bytes << "]==>";
//	}
//};
//
//template<class T>
//class Pool
//{
//public: 
//	Block<T>* Head_Pool;
//	T Size_Pool;
//	string StartID_Pool;
//
//	Pool()
//	{
//		Head_Pool = NULL;
//		Size_Pool = 0;
//		StartID_Pool = "POOL";
//	}
//
//	Pool(string id = "POOL", T s = 0)
//	{
//		StartID_Pool = id;
//		Size_Pool = s;
//		Head_Pool = NULL;
//
//		AddBytes();
//	}
//	void AddBlockAtStart(int ID, T s)
//	{
//		string id = to_string(ID);
//		Block<T>* New_Block = new Block<T>(id, s);
//		if (Head_Pool == NULL)
//		{
//			Head_Pool = New_Block;
//		}
//		else
//		{
//			New_Block->next = Head_Pool;
//			Head_Pool = New_Block;
//		}
//	}
//	void AddBlockAtEnd(int ID, T s)
//	{
//		if (Head_Pool == NULL)
//		{
//			AddBlockAtStart(ID, s);
//		}
//		else
//		{
//			string id = to_string(ID);
//			Block<T>* new_block = new Block<T>(id, s);
//
//			Block<T>* Temp = Head_Pool;
//
//			while (Temp->next != NULL)
//			{
//				Temp = Temp->next;
//			}
//
//			Temp->next = new_block;
//		}
//	}
//	void AddBytes()
//	{
//		if (Size_Pool == 0)
//			return;
//		else if (Size_Pool >= 100 && Size_Pool < 500)
//		{
//			if (Size_Pool == 100)
//			{
//				int id = 1;
//				string ID = to_string(id);
//				Block<T>* New_Block = new Block<T>(ID, 100);
//				Head_Pool = New_Block;
//			}
//			else
//			{
//				T s = Size_Pool;
//				int id = 1;
//				while (s >= 0)
//				{
//					AddBlockAtEnd(id, 100);
//
//					id++;
//					s = s - 100;
//					if (s < 100)
//						break;
//				}
//				AddBlockAtEnd(id, s);
//			}
//		}
//		else if (Size_Pool >= 500 && Size_Pool < 1000)
//		{
//			if (Size_Pool == 500)
//			{
//				int id = 1;
//				string ID = to_string(id);
//				Block<T>* New_Block = new Block<T>(ID, 500);
//				Head_Pool = New_Block;
//			}
//			else
//			{
//				T s = Size_Pool;
//				int id = 1;
//				while (s >= 0)
//				{
//					AddBlockAtEnd(id, 500);
//
//					id++;
//					s = s - 500;
//					if (s < 500)
//						break;
//				}
//				AddBlockAtEnd(id, s);
//			}
//		}
//		else
//		{
//			if (Size_Pool == 1000)
//			{
//				int id = 1;
//				string ID = to_string(id);
//				Block<T>* New_Block = new Block<T>(ID, 1000);
//				Head_Pool = New_Block;
//			}
//			else
//			{
//				T s = Size_Pool;
//				int id = 1;
//				while (s >= 0)
//				{
//					AddBlockAtEnd(id, 500);
//
//					id++;
//					s = s - 500;
//					if (s < 500)
//						break;
//				}
//				AddBlockAtEnd(id, s);
//			}
//		}
//	}
//	void Print_Pool()
//	{
//		if (Head_Pool == NULL)
//			cout << "The Pool is Empty." << endl;
//		else
//		{
//			cout << "\n========================" << StartID_Pool << "=======================" << endl;
//			cout << "[Size: " << Size_Pool << "]==>" << endl;
//			Block<T>* Temp = Head_Pool;
//			while (Temp != NULL)
//			{
//				Temp->Print_Block();
//				Temp = Temp->next;
//			}
//		}
//		cout << "NULL" << endl;
//	}
//};
//
//template<class T>
//class Program
//{
//public:
//
//	Block<T>* Head_Program;
//	Program<T>* down;
//
//	Program()
//	{
//		Head_Program = NULL;
//		down = NULL;
//	}
//
//	Program(string ID, T size)
//	{
//		Head_Program = new Block<T>(ID, size);
//		down = NULL;
//	}
//
//	void Print_Program()
//	{
//		Block<T>* Temp = Head_Program;
//		cout << "==========================" << Head_Program->start_byte_ID << "=====================" << endl;
//		while (Temp != NULL)
//		{
//			Temp->Print_Block();
//			Temp = Temp->next;
//		}
//		cout << "NULL" << endl;
//	}
//	void AddProgramAtStart(string ID, T size)
//	{
//		Block<T>* New_Block = new Block<T>(ID, size);
//		if (Head_Program == NULL)
//		{
//			Head_Program = New_Block;
//		}
//		else
//		{
//			New_Block->next = Head_Program;
//			Head_Program = New_Block;
//		}
//	}
//	void AddProgramAtEnd(string ID, T size)
//	{
//		if (Head_Program == NULL)
//		{
//			AddProgramAtStart(ID, size);
//		}
//		else
//		{
//			Block<T>* new_block = new Block<T>(ID, size);
//
//			Block<T>* Temp = Head_Program;
//
//			while (Temp->next != NULL)
//			{
//				Temp = Temp->next;
//			}
//
//			Temp->next = new_block;
//		}
//	}
//};
//
//template<class T>
//class MemoryManagemnt
//{
//public:
//	Program<T>* Head_MM;
//	Pool<T>* pool;
//
//	MemoryManagemnt()
//	{
//		Head_MM = NULL;
//		pool = NULL;
//	}
//	MemoryManagemnt(string ID, T size)
//	{
//		pool = new Pool<T>(ID, size);
//		//pool->Print_Pool();
//		Head_MM = NULL;
//	}
//	void AddNewProgram(string id, T size, int strategy)
//	{
//		if (strategy == 1 || strategy == 2 || strategy == 3)
//		{
//			Program<T>* new_program = new Program<T>(id, size);
//			if (size > pool->Size_Pool)
//			{
//				cout << "\nSpace NOT Available for Program " << new_program->Head_Program->start_byte_ID << endl;
//				return;
//			}
//			if (Head_MM == NULL)
//			{
//
//				Head_MM = new_program;
//				if (strategy == 3)
//				{
//					AllocatedMemory_Fit(new_program->Head_Program->start_byte_ID, new_program->Head_Program->total_bytes);
//					return;
//				}
//				if (strategy == 1)
//				{
//					AllocatedMemory_FirstFit(new_program->Head_Program->start_byte_ID, new_program->Head_Program->total_bytes);
//				}
//				else
//				{
//					AllocatedMemory_BestFit(new_program->Head_Program->start_byte_ID, new_program->Head_Program->total_bytes);
//				}
//				if (new_program->Head_Program->next)
//					return;
//				AllocatedMemory_Fit(new_program->Head_Program->start_byte_ID, new_program->Head_Program->total_bytes);
//				
//			}
//			else
//			{
//				Program<T>* Temp = Head_MM;
//				while (Temp->down != NULL)
//				{
//					Temp = Temp->down;
//				}
//				Temp->down = new_program;
//				if (strategy == 3)
//				{
//					AllocatedMemory_Fit(new_program->Head_Program->start_byte_ID, new_program->Head_Program->total_bytes);
//					return;
//				}
//				if (strategy == 1)
//				{
//					AllocatedMemory_FirstFit(new_program->Head_Program->start_byte_ID, new_program->Head_Program->total_bytes);
//				}
//				else//2
//				{
//					AllocatedMemory_BestFit(new_program->Head_Program->start_byte_ID, new_program->Head_Program->total_bytes);
//				}
//				if (new_program->Head_Program->next)
//					return;
//				AllocatedMemory_Fit(new_program->Head_Program->start_byte_ID, new_program->Head_Program->total_bytes);
//			}
//		}
//		else
//			return;
//	}
//	Block<T>* SearchPoolID(string ID)
//	{
//		Block<T>* Temp = pool->Head_Pool;
//		while (Temp != NULL)
//		{
//			if (ID == Temp->start_byte_ID)
//				return Temp;
//			Temp = Temp->next;
//		}
//	}
//
//	Program<T>* SearchProgrambyID(string ID)
//	{
//		Program<T>* Temp = Head_MM;
//		while (Temp != NULL)
//		{
//			if (ID == Temp->Head_Program->start_byte_ID)
//				return Temp;
//			Temp = Temp->down;
//		}
//	}
//
//	void AllocateMemory(string ID, T s, Program<T>* P)
//	{
//		P->AddProgramAtEnd(ID, s);
//		Block<T>* Temp = SearchPoolID(ID);
//		Temp->total_bytes = (Temp->total_bytes) - s;
//		pool->Size_Pool = (pool->Size_Pool) - s;
//	}
//
//	void AllocatedMemory_FirstFit(string P_ID, T size)
//	{
//		int flag = 0;
//
//		Block<T>* Temp = pool->Head_Pool;
//		while (Temp != NULL)
//		{
//			if ((Temp->total_bytes) - size >= 0)
//			{
//				flag = 1;
//				break;
//			}
//			Temp = Temp->next;
//		}
//
//		if (flag == 1)
//		{
//			Program<T>* P = SearchProgrambyID(P_ID);
//			T s = size;
//			Block<T>* Temp = pool->Head_Pool;
//			while (Temp != NULL)
//			{
//				if (s <= Temp->total_bytes)
//				{
//					string ID = Temp->start_byte_ID;
//					AllocateMemory(ID, s, P);
//					return;
//				}
//
//				Temp = Temp->next;
//			}
//		}
//
//	}
//	void AllocatedMemory_BestFit(string P_ID, T size)
//	{
//		int flag = 0;
//
//		Block<T>* Temp = pool->Head_Pool;
//		while (Temp != NULL)
//		{
//			if ((Temp->total_bytes) - size >= 0)
//			{
//				flag = 1;
//				break;
//			}
//			Temp = Temp->next;
//		}
//		if (flag == 1)
//		{
//			Program<T>* P = SearchProgrambyID(P_ID);
//			T s = size;
//			Block<T>* Temp = pool->Head_Pool;
//
//			while (!Temp->total_bytes)
//			{
//				Temp = Temp->next;
//			}
//
//			Block<T>* min_pool = Temp;
//			T S = Temp->total_bytes;
//			T min_diff = S - s;
//			if (min_diff < 0)
//				min_diff = min_diff * -1;
//
//
//			while (Temp != NULL)
//			{
//				if (s <= Temp->total_bytes)
//				{
//					S = Temp->total_bytes;
//					T diff = S - s;
//					if (diff < 0)
//						diff = diff * -1;
//
//					if (min_diff > diff)
//					{
//						min_diff = diff;
//						min_pool = Temp;
//					}
//				}
//
//				Temp = Temp->next;
//			}
//
//			string ID = min_pool->start_byte_ID;
//			AllocateMemory(ID, s, P);
//			return;
//		}
//	}
//	void Print_MM()
//	{
//		if (Head_MM == NULL)
//		{
//			cout << "\n================Programs in Memory=====================\n" << endl;
//			cout << "NULL" << endl;
//			return;
//		}
//		//cout << "\n-----------------------------------Programs in Memory-----------------------------------\n" << endl;
//		Program<T>* Temp = Head_MM;
//		while (Temp != NULL)
//		{
//			Temp->Print_Program();
//			cout << endl;
//			Temp = Temp->down;
//		}
//		//pool->Print_Pool();
//	}
//	void Print_P()
//	{
//		pool->Print_Pool();
//	}
//	void AllocatedMemory_Fit(string P_ID, T size)
//	{
//		Program<T>* P = SearchProgrambyID(P_ID);
//		T s = size;
//		Block<T>* Temp = pool->Head_Pool;
//
//		while (Temp != NULL)
//		{
//			if (s <= Temp->total_bytes)
//			{
//				string ID = Temp->start_byte_ID;
//				AllocateMemory(ID, s, P);
//				return;
//			}
//			else
//			{
//				if (Temp->total_bytes == 0)
//					Temp = Temp->next;
//				string ID = Temp->start_byte_ID;
//				T S = Temp->total_bytes;
//
//				if (s < Temp->total_bytes)
//					S = s;
//
//				s = s - (Temp->total_bytes);
//				if (s < 0)
//					s = s * -1;
//				AllocateMemory(ID, S, P);
//				if (s == 0)
//					return;
//			}
//			Temp = Temp->next;
//		}
//
//	}
//	void DeleteAtEnd(Block<T>* P, string ID)
//	{
//		Block<T>* Temp = P;
//		P = Temp->next;
//		Block<T>* Pool = SearchPoolID(P->start_byte_ID);
//		Pool->total_bytes = Pool->total_bytes + P->total_bytes;
//		pool->Size_Pool = pool->Size_Pool + P->total_bytes;
//		//Print_P();
//		delete P;
//		Temp->next = NULL;
//	}
//
//	void DeallocateMemory(string ID)
//	{
//		Program<T>* P = SearchProgrambyID(ID);
//
//		if (P->Head_Program == NULL)
//			return;
//		else
//		{
//			Block<T>* Temp = P->Head_Program->next;
//			int count = 0;
//			while (Temp != NULL)
//			{
//				count++;
//				Temp = Temp->next;
//			}
//
//			while (count)
//			{
//				if (count == 1)
//				{
//					DeleteAtEnd(P->Head_Program, P->Head_Program->next->start_byte_ID);
//					break;
//				}
//				Temp = P->Head_Program->next;
//				while (Temp->next->next != NULL)
//				{
//					Temp = Temp->next;
//				}
//				DeleteAtEnd(Temp, Temp->start_byte_ID);
//
//				cout << "\n";
//				//P->Print_Program();
//				cout << "\n";
//				count--;
//			}
//		}
//	}
//
//	~MemoryManagemnt()
//	{
//		cout << "======================DeAllocating Memory==========================";
//		Program<T>* Temp = Head_MM->down;
//		int count = 0;
//		while (Temp != NULL)
//		{
//			count++;
//			Temp = Temp->down;
//		}
//
//		while (count)
//		{
//			Temp = Head_MM;
//			while (Temp->down->down != NULL)
//			{
//				Temp = Temp->down;
//			}
//			DeallocateMemory(Temp->down->Head_Program->start_byte_ID);
//
//			delete Temp->down;
//			Temp->down = NULL;
//
//			cout << "\n";
//			Print_MM();
//			cout << "\n";
//			count--;
//		}
//
//		DeallocateMemory(Head_MM->Head_Program->start_byte_ID);
//
//		Print_MM();
//		delete Head_MM;
//		Head_MM = NULL;
//
//		Print_MM();
//
//		cout << endl;
//		pool->Print_Pool();
//	}
//};
//
//int main()
//{
//
//	MemoryManagemnt<int> m("Pool", 1200);
//	m.Print_P();
//	m.AddNewProgram("CHESS", 100, 2);
//	m.AddNewProgram("SEQUENCE", 400, 2);
//	//m.AddNewProgram("GCR", 50, 1);
//	
//	m.Print_MM();
//
//	cout << "\n";
//	m.Print_P();
//
//	cout << endl;
//
//	return 0;
//
//}
