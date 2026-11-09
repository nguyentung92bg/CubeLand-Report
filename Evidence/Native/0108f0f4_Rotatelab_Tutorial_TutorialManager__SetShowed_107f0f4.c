/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$SetShowed
void Rotatelab_Tutorial_TutorialManager__SetShowed (Rotatelab_Tutorial_TutorialManager_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$SetShowed
   void Rotatelab_Tutorial_TutorialManager__SetShowed (Rotatelab_Tutorial_TutorialManager_o* __this,
   System_String_o* key, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0108f164 + 0x108f108);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f168 + 0x108f11c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f16c + 0x108f128));
    *pcVar4 = '\x01';
  }
  uVar1 = System_String__Concat_2a0b574
                    (**(undefined4 **)(_UNK_0108f174 + 0x108f150),param_2,
                     **(undefined4 **)(_UNK_0108f170 + 0x108f144),0);
  iVar2 = UnityEngine_PlayerPrefs__TrySetInt_35f6358(uVar1,1,0);
  if (iVar2 != 0) {
    return;
  }
  thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b64 + 0x3606b28));
  uVar1 = thunk_FUN_00f00cdc();
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b68 + 0x3606b3c));
  UnityEngine_PlayerPrefsException___ctor_35f62e8(uVar1,uVar3);
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03606b6c + 0x3606b54));
  FUN_01f4fe28(uVar1,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

