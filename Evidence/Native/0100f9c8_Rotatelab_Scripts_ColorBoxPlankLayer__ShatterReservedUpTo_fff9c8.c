/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$ShatterReservedUpTo
void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterReservedUpTo (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, int32_t target, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer$$ShatterReservedUpTo
   void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterReservedUpTo
   (Rotatelab_Scripts_ColorBoxPlankLayer_o* __this, int32_t target, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxPlankLayer__ShatterReservedUpTo_fff9c8(int param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  pcVar2 = (char *)(_UNK_0100fa7c + 0x100f9e0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100fa80 + 0x100f9f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100fa84 + 0x100fa00));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  iVar3 = *(int *)(param_1 + 0x20);
  if (param_2 < iVar4) {
    iVar4 = param_2;
  }
  if (iVar3 < iVar4) {
    puVar5 = *(undefined4 **)(_UNK_0100fa88 + 0x100fa3c);
    do {
      *(int *)(param_1 + 0x20) = iVar3 + 1;
      if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x1c),iVar3,*puVar5);
      Rotatelab_Scripts_ColorBoxPlankLayer__ShatterPlank_fffa8c(param_1,uVar1);
      iVar3 = *(int *)(param_1 + 0x20);
    } while (iVar3 < iVar4);
  }
  return;
}

