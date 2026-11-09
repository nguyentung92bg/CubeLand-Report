/* IL2CPP: Rotatelab.MusicToggle$$SetToggle
void Rotatelab_MusicToggle__SetToggle (Rotatelab_MusicToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MusicToggle$$SetToggle
   void Rotatelab_MusicToggle__SetToggle (Rotatelab_MusicToggle_o* __this, const MethodInfo*
   method); */

void Rotatelab_MusicToggle__SetToggle_107b33c(int *param_1)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  
  pcVar3 = (char *)(_UNK_0108b3f8 + 0x108b350);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b3fc + 0x108b364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108b400 + 0x108b370));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_0108b404 + 0x108b384);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar1 + 0x18),**(undefined4 **)(_UNK_0108b408 + 0x108b3a4));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__SetMusic_107add0(iVar1,uVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x0108b3f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar2 ^ 1,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

