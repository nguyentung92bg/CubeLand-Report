/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckShowed
bool Rotatelab_Tutorial_TutorialManager__CheckShowed (Rotatelab_Tutorial_TutorialManager_o* __this, System_String_o* key, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckShowed
   bool Rotatelab_Tutorial_TutorialManager__CheckShowed (Rotatelab_Tutorial_TutorialManager_o*
   __this, System_String_o* key, const MethodInfo* method); */

bool Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0108f0c0 + 0x108f054);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f0c4 + 0x108f068));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108f0c8 + 0x108f074));
    *pcVar3 = '\x01';
  }
  uVar1 = System_String__Concat_2a0b574
                    (**(undefined4 **)(_UNK_0108f0d0 + 0x108f0a0),param_2,
                     **(undefined4 **)(_UNK_0108f0cc + 0x108f094),0);
  iVar2 = UnityEngine_PlayerPrefs__GetInt_35f6b70(uVar1,0,0);
  return 0 < iVar2;
}

