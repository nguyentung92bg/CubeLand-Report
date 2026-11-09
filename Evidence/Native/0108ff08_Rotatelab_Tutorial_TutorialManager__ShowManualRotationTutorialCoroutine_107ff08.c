/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$ShowManualRotationTutorialCoroutine
System_Collections_IEnumerator_o* Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$ShowManualRotationTutorialCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

int Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine_107ff08
              (undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0108ff74 + 0x108ff1c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108ff78 + 0x108ff30));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108ff7c + 0x108ff44));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

