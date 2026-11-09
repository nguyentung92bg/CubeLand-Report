/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController.<HitSoundLoopRoutine>d__49$$MoveNext
bool Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine_d__49__MoveNext (Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine_d__49_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController.<HitSoundLoopRoutine>d__49$$MoveNext
   bool Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine_d__49__MoveNext
   (Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine_d__49_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine_d__49__MoveNext_1052c50(int param_1)

{
  float fVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  
  pcVar2 = (char *)(_UNK_01062d74 + 0x1062c68);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062d78 + 0x1062c7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062d7c + 0x1062c88));
    *pcVar2 = '\x01';
  }
  uVar4 = 0;
  if (*(uint *)(param_1 + 8) < 2) {
    iVar3 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    fVar1 = (float)UnityEngine_Time__get_time_3610900(0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (_UNK_01062d70 <= fVar1 - *(float *)(iVar3 + 0xcc)) {
      uVar4 = 0;
      *(undefined4 *)(iVar3 + 200) = 0;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 200),0);
    }
    else {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01062d80 + 0x1062ce8));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,0x1d,0);
      if (*(int *)(**(int **)(_UNK_01062d84 + 0x1062d18) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar4 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3f000000,0);
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar4);
      uVar4 = 1;
      *(undefined4 *)(param_1 + 8) = 1;
    }
  }
  return uVar4;
}

