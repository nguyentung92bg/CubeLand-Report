/* IL2CPP: Rotatelab.WinStreak.Stage$$get_Index
int32_t Rotatelab_WinStreak_Stage__get_Index (Rotatelab_WinStreak_Stage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Stage$$get_Index
   int32_t Rotatelab_WinStreak_Stage__get_Index (Rotatelab_WinStreak_Stage_o* __this, const
   MethodInfo* method); */

void Rotatelab_WinStreak_Stage__get_Index_1090ebc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010a0f4c + 0x10a0ed0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0f50 + 0x10a0ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0f54 + 0x10a0ef0));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_WinStreak_Stage__get_WinStreakData_1090e4c();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(param_1 + 0x40);
  iVar1 = *(int *)(iVar1 + 0xc);
  if (*(int *)(**(int **)(_UNK_010a0f58 + 0x10a0f18) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = **(int **)(_UNK_010a0f5c + 0x10a0f40);
  iVar2 = *(int *)(iVar4 + 0x1c);
  if (iVar2 == 0) {
    FUN_00efd7c4(iVar4);
    iVar2 = *(int *)(iVar4 + 0x1c);
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (*(int *)(iVar2 + 0x1c) == 0) {
    FUN_00efd7c4(iVar2);
  }
  if (iVar1 != 0) {
    System_Array__IndexOfImpl_object__16cb198
              (iVar1,uVar5,0,*(undefined4 *)(iVar1 + 0xc),
               *(undefined4 *)(*(int *)(iVar2 + 0x1c) + 8));
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164d4d8 + 0x164d4a4));
  uVar5 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0164d4dc + 0x164d4b8));
  System_ArgumentNullException___ctor_2b08d00(uVar5,uVar3,0);
  func_0x00ec3920(uVar5,iVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

