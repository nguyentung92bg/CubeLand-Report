/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$UnoccupyNextRow
void Rotatelab_Scripts_ShrinkingCoverController__UnoccupyNextRow (Rotatelab_Scripts_ShrinkingCoverController_o* __this, bool isLastRowRemovable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$UnoccupyNextRow
   void Rotatelab_Scripts_ShrinkingCoverController__UnoccupyNextRow
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, bool isLastRowRemovable, const MethodInfo*
   method); */

void Rotatelab_Scripts_ShrinkingCoverController__UnoccupyNextRow_1052050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_01062200 + 0x106206c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062204 + 0x1062080));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062208 + 0x106208c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106220c + 0x1062098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062210 + 0x10620a4));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(_UNK_01062214 + 0x10620d4);
  System_Collections_Generic_List_Vector3Int___get_Item_26ff740
            (&uStack_30,*(int *)(param_1 + 0x94),0,*puVar4);
  iVar1 = iStack_28;
  if (param_2 == 0) {
    iVar2 = *(int *)(param_1 + 0x94);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_Vector3Int___get_Item_26ff740
              (&uStack_30,iVar2,*(int *)(iVar2 + 0xc) + -1,*puVar4);
    if (iStack_28 == iVar1) {
      return;
    }
  }
  while( true ) {
    if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x94) + 0xc) < 1) {
      return;
    }
    if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_Vector3Int___get_Item_26ff740
              (&uStack_30,*(int *)(param_1 + 0x94),0,*puVar4);
    if (iStack_28 != iVar1) break;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01062218 + 0x1062178));
    if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_Vector3Int___get_Item_26ff740
              (&uStack_30,*(int *)(param_1 + 0x94),0,*puVar4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Grid_GridManager__RemoveFromGrid_1106fd4
              (iVar2,param_1,uStack_30,uStack_2c,iStack_28,0);
    if (*(int *)(param_1 + 0x94) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_Vector3Int___RemoveAt_27016a0
              (*(int *)(param_1 + 0x94),0,**(undefined4 **)(_UNK_0106221c + 0x10621f4));
  }
  return;
}

