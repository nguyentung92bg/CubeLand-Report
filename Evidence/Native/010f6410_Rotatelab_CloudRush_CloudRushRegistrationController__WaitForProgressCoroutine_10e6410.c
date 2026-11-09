/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$WaitForProgressCoroutine
System_Collections_IEnumerator_o* Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, float startTime, float completionProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$WaitForProgressCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine
   (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, float startTime, float
   completionProgress, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushRegistrationController__WaitForProgressCoroutine_10e6410
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010f6494 + 0x10f642c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6498 + 0x10f6444));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f649c + 0x10f6458));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  return iVar1;
}

