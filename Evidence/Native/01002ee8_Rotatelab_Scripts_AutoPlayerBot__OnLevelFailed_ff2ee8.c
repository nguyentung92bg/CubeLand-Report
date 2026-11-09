/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$OnLevelFailed
void Rotatelab_Scripts_AutoPlayerBot__OnLevelFailed (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$OnLevelFailed
   void Rotatelab_Scripts_AutoPlayerBot__OnLevelFailed (Rotatelab_Scripts_AutoPlayerBot_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__OnLevelFailed_ff2ee8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01002f84 + 0x1002f00);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002f88 + 0x1002f14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002f8c + 0x1002f20));
    *pcVar4 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x1d);
  if (*(int *)(**(int **)(_UNK_01002f90 + 0x1002f34) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  Rotatelab_Scripts_AutoPlayerBot__HandleTerminal_ff2e50
            (param_1,**(undefined4 **)(_UNK_01002f94 + 0x1002f78),cVar1 != '\0',iVar3 + -1);
  return;
}

