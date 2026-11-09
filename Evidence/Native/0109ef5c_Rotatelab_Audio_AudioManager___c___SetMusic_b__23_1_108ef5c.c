/* IL2CPP: Rotatelab.Audio.AudioManager.<>c$$<SetMusic>b__23_1
void Rotatelab_Audio_AudioManager___c___SetMusic_b__23_1 (Rotatelab_Audio_AudioManager___c_o* __this, Rotatelab_Audio_AudioManager_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager.<>c$$<SetMusic>b__23_1
   void Rotatelab_Audio_AudioManager___c___SetMusic_b__23_1 (Rotatelab_Audio_AudioManager___c_o*
   __this, Rotatelab_Audio_AudioManager_o* this, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager___c___SetMusic_b__23_1_108ef5c(undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_035a955c + 0x35a94e0);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035a9560 + 0x35a94f4));
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035a9564 + 0x35a952c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035a9568 + 0x35a953c);
    *(code **)(_UNK_035a956c + 0x35a954c) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x035a9558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar3,1);
  return;
}

