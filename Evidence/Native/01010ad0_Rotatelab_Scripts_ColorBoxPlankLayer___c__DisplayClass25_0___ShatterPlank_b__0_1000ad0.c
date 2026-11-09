/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer.<>c__DisplayClass25_0$$<ShatterPlank>b__0
void Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass25_0___ShatterPlank_b__0 (Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass25_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxPlankLayer.<>c__DisplayClass25_0$$<ShatterPlank>b__0
   void Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass25_0___ShatterPlank_b__0
   (Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass25_0_o* __this, const MethodInfo* method);
    */

void Rotatelab_Scripts_ColorBoxPlankLayer___c__DisplayClass25_0___ShatterPlank_b__0_1000ad0
               (int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01010bb8 + 0x1010af0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010bbc + 0x1010b04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01010bc0 + 0x1010b10));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01010bc4 + 0x1010b24);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x6c);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum__Vector3__Quaternion__float___Raise_23a6f94
            (iVar1,*(undefined4 *)(*(int *)(param_1 + 8) + 0x30),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
             *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),
             *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),**(undefined4 **)(_UNK_01010bc8 + 0x1010b90));
  return;
}

