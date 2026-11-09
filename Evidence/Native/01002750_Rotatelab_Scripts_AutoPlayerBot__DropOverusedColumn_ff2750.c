/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$DropOverusedColumn
void Rotatelab_Scripts_AutoPlayerBot__DropOverusedColumn (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$DropOverusedColumn
   void Rotatelab_Scripts_AutoPlayerBot__DropOverusedColumn (Rotatelab_Scripts_AutoPlayerBot_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__DropOverusedColumn_ff2750(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar2 = (char *)(_UNK_010028c0 + 0x1002764);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010028c4 + 0x1002778));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010028c8 + 0x1002784));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010028cc + 0x1002790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010028d0 + 0x100279c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010028d4 + 0x10027a8));
    *pcVar2 = '\x01';
  }
  iVar3 = 0;
  iVar4 = 0;
  puVar7 = *(undefined4 **)(_UNK_010028d8 + 0x10027c4);
  while( true ) {
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) <= iVar3) break;
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_int___get_Item_261b65c
                      (*(int *)(param_1 + 0x34),iVar3,*puVar7);
    iVar3 = iVar3 + 1;
    if (iVar1 != *(int *)(param_1 + 0x4c)) {
      iVar4 = iVar4 + 1;
    }
  }
  if (iVar4 != 0) {
    if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0xc);
    if (-1 < iVar3 + -1) {
      puVar5 = *(undefined4 **)(_UNK_010028dc + 0x1002840);
      puVar6 = *(undefined4 **)(_UNK_010028e0 + 0x1002848);
      do {
        if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = iVar3 + -1;
        iVar4 = System_Collections_Generic_List_int___get_Item_261b65c
                          (*(int *)(param_1 + 0x34),iVar3,*puVar7);
        if (iVar4 == *(int *)(param_1 + 0x4c)) {
          if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_object___RemoveAt_267f3f8
                    (*(int *)(param_1 + 0x30),iVar3,*puVar5);
          if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          System_Collections_Generic_List_int___RemoveAt_261d234
                    (*(int *)(param_1 + 0x34),iVar3,*puVar6);
        }
      } while (0 < iVar3);
    }
  }
  return;
}

