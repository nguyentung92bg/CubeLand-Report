/* IL2CPP: Rotatelab.MusicToggle$$LoadToggle
void Rotatelab_MusicToggle__LoadToggle (Rotatelab_MusicToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MusicToggle$$LoadToggle
   void Rotatelab_MusicToggle__LoadToggle (Rotatelab_MusicToggle_o* __this, const MethodInfo*
   method); */

void Rotatelab_MusicToggle__LoadToggle_107acf4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  pcVar3 = (char *)(_UNK_0108adbc + 0x108ad08);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108adc0 + 0x108ad1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108adc4 + 0x108ad28));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_0108adc8 + 0x108ad3c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x18);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  puVar4 = *(undefined4 **)(_UNK_0108adcc + 0x108ad70);
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c(uVar5,*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__SetMusic_107add0(iVar1,uVar2);
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c(uVar5,*puVar4);
                    /* WARNING: Could not recover jumptable at 0x0108adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar2,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

