/* IL2CPP: Rotatelab.Scripts.MechanicSo$$OnValidate
void Rotatelab_Scripts_MechanicSo__OnValidate (Rotatelab_Scripts_MechanicSo_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MechanicSo$$OnValidate
   void Rotatelab_Scripts_MechanicSo__OnValidate (Rotatelab_Scripts_MechanicSo_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_MechanicSo__OnValidate_105fca0(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_0106fd44 + 0x106fcb4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fd48 + 0x106fcc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106fd4c + 0x106fcd4));
    *pcVar2 = '\x01';
  }
  iVar3 = 0;
  puVar4 = *(undefined4 **)(_UNK_0106fd50 + 0x106fcec);
  while( true ) {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0xc) + 0xc) <= iVar3) {
      return;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0xc),iVar3,*puVar4);
    if (iVar1 == 0) break;
    *(int *)(iVar1 + 8) = iVar3;
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

