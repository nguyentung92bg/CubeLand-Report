/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$HitSoundLoopRoutine
System_Collections_IEnumerator_o* Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ShrinkingCoverController$$HitSoundLoopRoutine
   System_Collections_IEnumerator_o* Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine
   (Rotatelab_Scripts_ShrinkingCoverController_o* __this, const MethodInfo* method); */

int Rotatelab_Scripts_ShrinkingCoverController__HitSoundLoopRoutine_1052220(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0106228c + 0x1062234);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01062290 + 0x1062248));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01062294 + 0x106225c));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

