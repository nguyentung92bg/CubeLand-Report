/* IL2CPP: Rotatelab.UI.SoundToggle$$LoadToggle
void Rotatelab_UI_SoundToggle__LoadToggle (Rotatelab_UI_SoundToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SoundToggle$$LoadToggle
   void Rotatelab_UI_SoundToggle__LoadToggle (Rotatelab_UI_SoundToggle_o* __this, const MethodInfo*
   method); */

void Rotatelab_UI_SoundToggle__LoadToggle_112bdb8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0113be48 + 0x113bdcc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113be4c + 0x113bde0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113be50 + 0x113bdec));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113be54 + 0x113be00));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar1 + 0x14),**(undefined4 **)(_UNK_0113be58 + 0x113be20));
                    /* WARNING: Could not recover jumptable at 0x0113be44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar2,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

