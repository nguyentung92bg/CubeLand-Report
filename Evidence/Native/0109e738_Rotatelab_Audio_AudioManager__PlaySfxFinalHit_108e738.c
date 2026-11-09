/* IL2CPP: Rotatelab.Audio.AudioManager$$PlaySfxFinalHit
void Rotatelab_Audio_AudioManager__PlaySfxFinalHit (Rotatelab_Audio_AudioManager_o* __this, int32_t soundType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$PlaySfxFinalHit
   void Rotatelab_Audio_AudioManager__PlaySfxFinalHit (Rotatelab_Audio_AudioManager_o* __this,
   int32_t soundType, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager__PlaySfxFinalHit_108e738(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 auStack_30 [16];
  
  pcVar3 = (char *)(_UNK_0109e8e4 + 0x109e758);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8e8 + 0x109e76c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8ec + 0x109e778));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8f0 + 0x109e784));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8f4 + 0x109e790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8f8 + 0x109e79c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109e8fc + 0x109e7a8));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(param_1 + 0x14),**(undefined4 **)(_UNK_0109e900 + 0x109e7bc));
  if (iVar1 != 0) {
    iVar1 = Rotatelab_Audio_AudioManager__GetVoxelBreakGroup_108d404(param_1,param_2);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar6 = *(int **)(_UNK_0109e904 + 0x109e7f4);
    uVar7 = *(undefined4 *)(iVar1 + 0x38);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    puVar2 = *(undefined4 **)(iVar1 + 0x5c);
    iVar4 = puVar2[2];
    if (iVar4 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar6 + 0x5c);
      }
      uVar5 = *puVar2;
      iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109e908 + 0x109e840));
      System_Action_object__Int32Enum____ctor_1f18d2c
                (iVar4,uVar5,**(undefined4 **)(_UNK_0109e90c + 0x109e860),0);
      piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 8);
      *piVar6 = iVar4;
      thunk_FUN_00ec5080(piVar6,iVar4);
    }
    uVar5 = Rotatelab_PooledClosure__Action_object__Int32Enum__153dc48
                      (param_1,param_2,iVar4,**(undefined4 **)(_UNK_0109e910 + 0x109e890));
    if (*(int *)(**(int **)(_UNK_0109e914 + 0x109e8a8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Delay_2ce9f2c(auStack_30,uVar7,uVar5,0,0,0);
  }
  return;
}

