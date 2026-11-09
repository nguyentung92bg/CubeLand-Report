/* IL2CPP: Rotatelab.UI.SoundToggle$$SetToggle
void Rotatelab_UI_SoundToggle__SetToggle (Rotatelab_UI_SoundToggle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SoundToggle$$SetToggle
   void Rotatelab_UI_SoundToggle__SetToggle (Rotatelab_UI_SoundToggle_o* __this, const MethodInfo*
   method); */

void Rotatelab_UI_SoundToggle__SetToggle_112be5c(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar4 = (char *)(_UNK_0113bf60 + 0x113be70);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bf64 + 0x113be84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bf68 + 0x113be90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113bf6c + 0x113be9c));
    *pcVar4 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0113bf70 + 0x113beb0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar1 + 0x14);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_0113bf74 + 0x113beec);
  uVar2 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar1 + 0x14),*puVar7);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (iVar5,uVar2 ^ 1,**(undefined4 **)(_UNK_0113bf78 + 0x113bf14));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(iVar1 + 0x14),*puVar7);
                    /* WARNING: Could not recover jumptable at 0x0113bf5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,uVar3,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

