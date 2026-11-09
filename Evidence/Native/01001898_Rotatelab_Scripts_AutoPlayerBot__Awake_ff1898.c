/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$Awake
void Rotatelab_Scripts_AutoPlayerBot__Awake (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$Awake
   void Rotatelab_Scripts_AutoPlayerBot__Awake (Rotatelab_Scripts_AutoPlayerBot_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__Awake_ff1898(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  
  pcVar4 = (char *)(_UNK_01001970 + 0x10018ac);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01001974 + 0x10018c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01001978 + 0x10018cc));
    *pcVar4 = '\x01';
  }
  iVar6 = *(int *)(_UNK_0100197c + 0x10018e0);
  uVar5 = **(undefined4 **)(_UNK_01001980 + 0x10018ec);
  if (*(int *)(*(int *)(iVar6 + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = System_Type__GetTypeFromHandle_2b80928(uVar5,0);
  if (*(int *)(*(int *)(iVar6 + 0x4c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = System_Enum__GetValues_2ba9dc8(uVar5,0);
  if (iVar6 != 0) {
    uVar5 = System_Array__get_Length_2b8bcdc(iVar6,0);
    uVar5 = FUN_00ec388c(**(undefined4 **)(_UNK_01001984 + 0x1001958),uVar5);
    puVar3 = (undefined4 *)(param_1 + 0x3c);
    *puVar3 = uVar5;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

