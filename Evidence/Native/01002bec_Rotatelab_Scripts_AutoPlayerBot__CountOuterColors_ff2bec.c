/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$CountOuterColors
void Rotatelab_Scripts_AutoPlayerBot__CountOuterColors (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$CountOuterColors
   void Rotatelab_Scripts_AutoPlayerBot__CountOuterColors (Rotatelab_Scripts_AutoPlayerBot_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__CountOuterColors_ff2bec(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  pcVar2 = (char *)(_UNK_01002d24 + 0x1002c00);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002d28 + 0x1002c14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002d2c + 0x1002c20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002d30 + 0x1002c2c));
    *pcVar2 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = 0;
  System_Array__Clear_2b96cdc(iVar4,0,*(undefined4 *)(iVar4 + 0xc),0);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01002d34 + 0x1002c68));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 0x14);
  puVar6 = *(undefined4 **)(_UNK_01002d38 + 0x1002c8c);
  do {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0xc) <= iVar3) {
      return;
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814(iVar4,iVar3,*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(uint *)(iVar1 + 0x14);
    if (0 < (int)uVar5) {
      if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)uVar5 < *(int *)(*(int *)(param_1 + 0x3c) + 0xc)) {
        iVar1 = *(int *)(param_1 + 0x3c);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar1 = iVar1 + uVar5 * 4;
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

