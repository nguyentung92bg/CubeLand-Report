/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$OnLevelSucceeded
void Rotatelab_Scripts_AutoPlayerBot__OnLevelSucceeded (Rotatelab_Scripts_AutoPlayerBot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$OnLevelSucceeded
   void Rotatelab_Scripts_AutoPlayerBot__OnLevelSucceeded (Rotatelab_Scripts_AutoPlayerBot_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__OnLevelSucceeded_ff2da0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01002e3c + 0x1002db8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002e40 + 0x1002dcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01002e44 + 0x1002dd8));
    *pcVar3 = '\x01';
  }
  cVar1 = *(char *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_01002e48 + 0x1002dec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  Rotatelab_Scripts_AutoPlayerBot__HandleTerminal_ff2e50
            (param_1,**(undefined4 **)(_UNK_01002e4c + 0x1002e28),cVar1 != '\0',uVar2);
  return;
}

